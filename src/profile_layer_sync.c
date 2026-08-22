/*
 * Copyright (c) 2026 The ZMK Contributors
 *
 * SPDX-License-Identifier: MIT
 */

#include <zephyr/kernel.h>
#include <zephyr/logging/log.h>

#include <zmk/event_manager.h>
#include <zmk/events/ble_active_profile_changed.h>
#include <zmk/keymap.h>

LOG_MODULE_REGISTER(profile_layer_sync, CONFIG_ZMK_LOG_LEVEL);

// BT profile index (as used by &bt BT_SEL) -> base layer that should become active.
// Keep in sync with mantaray_pro_wireless.keymap: profile 4 is the Windows profile
// mapped to win_base_layer (layer 3); every other profile uses default_layer (layer 0).
static uint8_t profile_to_layer(uint8_t profile_index) {
    return (profile_index == 4) ? 3 : 0;
}

static int profile_layer_sync_listener(const zmk_event_t *eh) {
    const struct zmk_ble_active_profile_changed *ev = as_zmk_ble_active_profile_changed(eh);
    if (ev == NULL) {
        return ZMK_EV_EVENT_BUBBLE;
    }

    uint8_t target_layer = profile_to_layer(ev->index);
    LOG_DBG("BT profile %d active, switching to layer %d", ev->index, target_layer);
    zmk_keymap_layer_to(target_layer);

    return ZMK_EV_EVENT_BUBBLE;
}

ZMK_LISTENER(profile_layer_sync, profile_layer_sync_listener);
ZMK_SUBSCRIPTION(profile_layer_sync, zmk_ble_active_profile_changed);
