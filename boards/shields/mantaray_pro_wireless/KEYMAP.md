# Mantaray Pro Wireless Keymap

## Layer 0: Pine Mac base

```
┌──────────┬──────┬──────┬──────┬──────┬──────┐   ┌──────┬──────┬──────┬──────┬──────┬──────┐
│ `/=      │  1   │  2   │  3   │  4   │  5   │   │  6   │  7   │  8   │  9   │  0   │ -/_  │
├──────────┼──────┼──────┼──────┼──────┼──────┤   ├──────┼──────┼──────┼──────┼──────┼──────┤
│ CAPS     │  Q   │  L   │  C   │  M   │  K   │   │ '/"  │  F   │  U   │  O   │  Y   │ \/|  │
├──────────┼──────┼──────┼──────┼──────┼──────┤   ├──────┼──────┼──────┼──────┼──────┼──────┤
│ ⇧/BKSP   │  N   │  R   │  S   │  T   │  W   │   │  P   │  H   │  E   │  A   │  I   │ ;/:  │
├──────────┼──────┼──────┼──────┼──────┼──────┤   ├──────┼──────┼──────┼──────┼──────┼──────┤
│ ⌃/TAB    │  J   │  X   │  Z   │  G   │  V   │   │  B   │  D   │ ,/<  │ ./>  │ //?  │ ENT  │
└──────────┴──────┴──────┴──────┼──────┼──────┤   ├──────┼──────┼──────┴──────┴──────┴──────┘
                                │⌘/ENT │⇧/ESC │   │L1/BSP│L2/SPC│
                                └──────┴──────┘   └──────┴──────┘
```

**The left outer thumb is a real Command key.** Hold it and every ⌘ shortcut works at the
position where you actually type the letter: ⌘C, ⌘V, ⌘⇧Z, ⌘1–⌘9, ⌘⌫, ⌘+click, all of it.
Nothing needs to be mapped per-shortcut.

**Bulk backspace:** the right outer thumb is a layer-tap, so a cold press-and-hold engages
Layer 1 instead of repeating. To hold-delete, **tap once, then tap-and-hold** (`quick-tap-ms`
is 200ms). Rapid repeated tapping works normally. If you want a plain holdable backspace,
Layer 2 has one at the right pinky home position.

**Pine changes from QWERTY** (position -> output):

```
W -> L
E -> C
R -> M
T -> K
Y -> '
U -> F
A -> N
S -> R
D -> S
F -> T
G -> W
H -> P
J -> H
K -> E
L -> A
; -> I
' -> ;
Z -> J
C -> Z
V -> G
B -> V
N -> B
M -> D
```

## Layer 1: Navigation (hold right outer thumb)

```
┌──────────┬──────┬──────┬──────┬──────┬──────┐   ┌──────┬──────┬──────┬──────┬──────┬──────┐
│          │      │      │      │      │      │   │      │      │      │      │      │      │
├──────────┼──────┼──────┼──────┼──────┼──────┤   ├──────┼──────┼──────┼──────┼──────┼──────┤
│ ⌥⌘C      │ ⌃⌥←  │ ⌃⌥↩  │ ⌃⌥C  │ ⌃⌥→  │      │   │      │ ⌘←   │ ⌥←   │ ⌥→   │ ⌘→   │      │
├──────────┼──────┼──────┼──────┼──────┼──────┤   ├──────┼──────┼──────┼──────┼──────┼──────┤
│ ⇧        │ ⌘Tab │ MUTE │ VOL- │ VOL+ │PL/PS │   │ HOME │  ←   │  ↓   │  ↑   │  →   │ END  │
├──────────┼──────┼──────┼──────┼──────┼──────┤   ├──────┼──────┼──────┼──────┼──────┼──────┤
│ ⌃        │      │      │      │      │      │   │ PGDN │ ⌃←   │ ⌃↓   │ ⌃↑   │ ⌃→   │ PGUP │
└──────────┴──────┴──────┴──────┼──────┼──────┤   ├──────┼──────┼──────┴──────┴──────┴──────┘
                                │  ⌘   │  ⇧   │   │ ▓▓▓  │      │
                                └──────┴──────┘   └──────┴──────┘
```

Arrows sit on the right home row. ⌘ and ⇧ stay live on the left thumbs and left pinky, so
`⌘⇧←`, `⌥⇧→`, and friends all work while the layer is held.

* `←` `↓` `↑` `→` - Arrows (right home row)
* `⌘←` `⌘→` - Jump to beginning/end of line
* `⌥←` `⌥→` - Jump word left/right
* `HOME` `END` `PGUP` `PGDN` - Document navigation
* `⌃←` `⌃→` - Switch desktop space left/right
* `⌃↑` - Mission Control
* `⌃↓` - App Exposé (show current app windows)
* `⌥⌘C` - Clipboard history (Alfred)
* `⌘Tab` - App Switcher
* `⌃⌥←` `⌃⌥→` - Rectangle: left/right half
* `⌃⌥↩` - Rectangle: maximize
* `⌃⌥C` - Rectangle: center
* `MUTE` `VOL-` `VOL+` `PL/PS` - Media controls

## Layer 2: Symbols & Numpad (hold right inner thumb)

```
┌──────────┬──────┬──────┬──────┬──────┬──────┐   ┌──────┬──────┬──────┬──────┬──────┬──────┐
│ ESC      │  F1  │  F2  │  F3  │  F4  │  F5  │   │ F10  │  F6  │  F7  │  F8  │  F9  │ F11  │
├──────────┼──────┼──────┼──────┼──────┼──────┤   ├──────┼──────┼──────┼──────┼──────┼──────┤
│  `       │  !   │  @   │  #   │  $   │  %   │   │  /   │  7   │  8   │  9   │  0   │ F12  │
├──────────┼──────┼──────┼──────┼──────┼──────┤   ├──────┼──────┼──────┼──────┼──────┼──────┤
│          │  ^   │  &   │  *   │  (   │  )   │   │  *   │  4   │  5   │  6   │  +   │ BKSP │
├──────────┼──────┼──────┼──────┼──────┼──────┤   ├──────┼──────┼──────┼──────┼──────┼──────┤
│ UNLOCK   │      │  [   │  ]   │  {   │  }   │   │  =   │  1   │  2   │  3   │  -   │ENTER │
└──────────┴──────┴──────┴──────┼──────┼──────┤   ├──────┼──────┼──────┴──────┴──────┴──────┘
                                │      │      │   │      │ ▓▓▓  │
                                └──────┴──────┘   └──────┴──────┘
```

## Layer 3: Pine Win base

Same as Layer 0, except: **⌘ → CTRL** and **⌃ → ⌘ (Win key)** are swapped. Nav layer becomes Layer 4.

```
┌──────────┬──────┬──────┬──────┬──────┬──────┐   ┌──────┬──────┬──────┬──────┬──────┬──────┐
│ `/=      │  1   │  2   │  3   │  4   │  5   │   │  6   │  7   │  8   │  9   │  0   │  -   │
├──────────┼──────┼──────┼──────┼──────┼──────┤   ├──────┼──────┼──────┼──────┼──────┼──────┤
│ CAPS     │  Q   │  L   │  C   │  M   │  K   │   │ '/"  │  F   │  U   │  O   │  Y   │  \   │
├──────────┼──────┼──────┼──────┼──────┼──────┤   ├──────┼──────┼──────┼──────┼──────┼──────┤
│ ⇧/BKSP   │  N   │  R   │  S   │  T   │  W   │   │  P   │  H   │  E   │  A   │  I   │  ;   │
├──────────┼──────┼──────┼──────┼──────┼──────┤   ├──────┼──────┼──────┼──────┼──────┼──────┤
│ ⊞/TAB    │  J   │  X   │  Z   │  G   │  V   │   │  B   │  D   │ ,/<  │ ./>  │ //?  │ ENT  │
└──────────┴──────┴──────┴──────┼──────┼──────┤   ├──────┼──────┼──────┴──────┴──────┴──────┘
                                │⌃/ENT │⇧/TAB │   │L4/BSP│L2/SPC│
                                └──────┴──────┘   └──────┴──────┘
```

**Pine changes from QWERTY** (position -> output):

```
W -> L
E -> C
R -> M
T -> K
Y -> '
U -> F
A -> N
S -> R
D -> S
F -> T
G -> W
H -> P
J -> H
K -> E
L -> A
; -> I
' -> ;
Z -> J
C -> Z
V -> G
B -> V
N -> B
M -> D
```

## Layer 4: Win navigation

Windows equivalent of Layer 1.

```
┌──────────┬──────┬──────┬──────┬──────┬──────┐   ┌──────┬──────┬──────┬──────┬──────┬──────┐
│          │      │      │      │      │      │   │      │      │      │      │      │      │
├──────────┼──────┼──────┼──────┼──────┼──────┤   ├──────┼──────┼──────┼──────┼──────┼──────┤
│ ⊞V       │ ⊞←   │ ⊞↑   │ ⊞↓   │ ⊞→   │      │   │      │Home  │ ⌃←   │ ⌃→   │ End  │      │
├──────────┼──────┼──────┼──────┼──────┼──────┤   ├──────┼──────┼──────┼──────┼──────┼──────┤
│ ⇧        │AltTab│ MUTE │ VOL- │ VOL+ │PL/PS │   │ HOME │  ←   │  ↓   │  ↑   │  →   │ END  │
├──────────┼──────┼──────┼──────┼──────┼──────┤   ├──────┼──────┼──────┼──────┼──────┼──────┤
│ ⌃        │      │ ⊞⇧S  │      │      │      │   │ PGDN │⊞⌃←   │⊞Tab  │      │⊞⌃→   │ PGUP │
└──────────┴──────┴──────┴──────┼──────┼──────┤   ├──────┼──────┼──────┴──────┴──────┴──────┘
                                │  ⌃   │  ⇧   │   │ ▓▓▓  │      │
                                └──────┴──────┘   └──────┴──────┘
```

* `⊞V` - Clipboard history
* `⊞←` `⊞↑` `⊞↓` `⊞→` - Snap window
* `Home/End` - Jump to beginning/end of line
* `⌃←` `⌃→` - Jump word left/right
* `⊞⌃←` `⊞⌃→` - Switch virtual desktop left/right
* `⊞Tab` - Task View (like Mission Control)
* `⊞⇧S` - Snipping tool
* `Alt Tab` - App Switcher

## Layer 5: Hotkeys (hold both right thumbs, positions 50+51)

Everything reachable with the real ⌘ key, and everything duplicated on Layer 1, has been
removed. What is left is only what this layer alone can do, so the right hand is empty.

```
┌──────────┬──────┬──────┬──────┬──────┬──────┐   ┌──────┬──────┬──────┬──────┬──────┬──────┐
│          │BT0mac│BT1mac│BT2mac│BT3mac│BT4win│   │      │      │      │      │      │      │
├──────────┼──────┼──────┼──────┼──────┼──────┤   ├──────┼──────┼──────┼──────┼──────┼──────┤
│ ^1       │ ^2   │ ^3   │⌃⌘O   │⌃⌥⌘O  │⌃⌥⌘P  │   │      │      │      │      │      │      │
├──────────┼──────┼──────┼──────┼──────┼──────┤   ├──────┼──────┼──────┼──────┼──────┼──────┤
│          │ ⌃C   │      │⌥⌘V   │LOCAL │DOCS  │   │      │      │      │      │      │      │
├──────────┼──────┼──────┼──────┼──────┼──────┤   ├──────┼──────┼──────┼──────┼──────┼──────┤
│          │      │⌘⇧3   │⌘⇧4   │⌘⇧⌃4  │⌘⇧5   │   │      │      │      │      │      │      │
└──────────┴──────┴──────┴──────┼──────┼──────┤   ├──────┼──────┼──────┴──────┴──────┴──────┘
                                │BT PRV│BT NXT│   │ ▓▓▓  │ ▓▓▓  │
                                └──────┴──────┘   └──────┴──────┘
```

**Custom hotkeys:**

* `^1` `^2` `^3` - Switch Arc Browser spaces (Ctrl+1/2/3) and switch VS Code tabs
* `⌃⌘O`   - Open Liquid reusable and variable (VS Code)
* `⌃⌥⌘O`  - goer: Open in production (VS Code)
* `⌃⌥⌘P`  - goer: Open in localhost:4000 (VS Code)
* `⌥⌘V`   - Create Liquid reusable from relative path
* `LOCAL` - Macro: Copy Relative Path → convert to localhost:4000 URL
* `DOCS`  - Macro: Copy Relative Path → convert to docs.github.com URL

**System hotkeys:**

* `⌃C`    - CTRL C (quit terminal process)
* `⌘⇧3`  - Screenshot entire screen
* `⌘⇧4`  - Screenshot selection
* `⌘⇧⌃4` - Screenshot selection to clipboard
* `⌘⇧5`  - Screenshot/recording toolbar

## Combos

| Trigger | Action |
|---------|--------|
| Both right thumbs (pos 50+51) | Momentary Layer 5 (Hotkeys) |
| Q + P (pos 13+22) held | BT_CLR (clear current BT profile) |
