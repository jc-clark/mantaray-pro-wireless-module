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
│ ⌃/TAB    │  J   │  X   │  Z   │  G   │  V   │   │  B   │  D   │ ,/<  │ ./>  │ //?  │L3/ENT│
└──────────┴──────┴──────┴──────┼──────┼──────┤   ├──────┼──────┼──────┴──────┴──────┴──────┘
                                │L1/ENT│⇧/ESC │   │ BKSP │L2/SPC│
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

## Layer 1: Mouse/navigation (hold left inner thumb)

```
┌──────────┬──────┬──────┬──────┬──────┬──────┐   ┌──────┬──────┬──────┬──────┬──────┬──────┐
│          │ ⌘F   │ ⌘A   │ ⌘T   │ ⌘⇧T  │      │   │      │  ←   │  ↓   │  ↑   │  →   │      │
├──────────┼──────┼──────┼──────┼──────┼──────┤   ├──────┼──────┼──────┼──────┼──────┼──────┤
│          │ ⌘←   │ ⌥←   │ ⌥→   │ ⌘→   │      │   │SC ←  │SC ↓  │ M↑   │SC ↑  │SC →  │      │
├──────────┼──────┼──────┼──────┼──────┼──────┤   ├──────┼──────┼──────┼──────┼──────┼──────┤
│ ⌥⌘C      │  ⌘S  │LCLK  │MCLK  │RCLK  │      │   │  ⌘   │ M←   │ M↓   │ M→   │      │      │
├──────────┼──────┼──────┼──────┼──────┼──────┤   ├──────┼──────┼──────┼──────┼──────┼──────┤
│ ⌘Tab     │ ⌘Z   │ ⌘X   │ ⌘C   │ ⌘V   │      │   │      │ ⌃←   │ ⌃↓   │ ⌃↑   │ ⌃→   │      │
└──────────┴──────┴──────┴──────┼──────┼──────┤   ├──────┼──────┼──────┴──────┴──────┴──────┘
                                │ ▓▓▓  │      │   │LCLK  │RCLK  │
                                └──────┴──────┘   └──────┴──────┘
```

* `⌘F` - Find
* `⌘T` - New tab
* `⌘⇧T` - Reopen closed tab
* `⌘←` `⌘→` - Jump to beginning/end of line
* `⌥←` `⌥→` - Jump word left/right
* `⌘A` - Select all
* `⌃←` `⌃→` - Switch desktop space left/right
* `⌃↓` - App Exposé (show current app windows)`
* `⌥⌘C` - Clipboard history (Alfred)
* `⌘Tab` - App Switcher
* `⌘Z` `⌘X` `⌘C` `⌘V` - Undo/Cut/Copy/Paste

## Layer 2: Symbols & Numpad (hold right outer thumb)

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

## Layer 3: Hotkeys (hold ENT key, bottom-right of row 4, on Layer 0 or Layer 4)

```
┌──────────┬──────┬──────┬──────┬──────┬──────┐   ┌──────┬──────┬──────┬──────┬──────┬──────┐
│          │BT0mac│BT1mac│BT2mac│BT3mac│BT4win│   │      │      │      │      │      │      │
├──────────┼──────┼──────┼──────┼──────┼──────┤   ├──────┼──────┼──────┼──────┼──────┼──────┤
│ ^1       │ ^2   │ ^3   │⌃⌘O   │⌃⌥⌘O  │⌃⌥⌘P  │   │      │ MUTE │ VOL- │ VOL+ │PL/PS │      │
├──────────┼──────┼──────┼──────┼──────┼──────┤   ├──────┼──────┼──────┼──────┼──────┼──────┤
│          │ ⌃C   │⌥⌘C   │⌥⌘V   │LOCAL │DOCS  │   │  ↑   │ ⌘K   │ ⌘W   │ ⌘T   │⌘⇧T   │ ⌘F   │
├──────────┼──────┼──────┼──────┼──────┼──────┤   ├──────┼──────┼──────┼──────┼──────┼──────┤
│          │      │⌘⇧3   │⌘⇧4   │⌘⇧⌃4  │⌘⇧5   │   │  ↓   │⌃⌥←   │⌃⌥↩   │⌃⌥C   │⌃⌥→   │ ▓▓▓  │
└──────────┴──────┴──────┴──────┼──────┼──────┤   ├──────┼──────┼──────┴──────┴──────┴──────┘
                                │BT PRV│BT NXT│   │      │      │
                                └──────┴──────┘   └──────┴──────┘
```

**Custom hotkeys:**

* `^1` `^2` `^3` - Switch Arc Browser spaces (Ctrl+1/2/3) and switch VS Code tabs
* `⌃⌘O`   - Open Liquid reusable and variable (VS Code)
* `⌃⌥⌘O`  - goer: Open in production (VS Code)
* `⌃⌥⌘P`  - goer: Open in localhost:4000 (VS Code)
* `⌥⌘C`   - Clipboard history (Alfred)
* `⌥⌘V`   - Create Liquid reusable from relative path
* `LOCAL` - Macro: Copy Relative Path → convert to localhost:4000 URL
* `DOCS`  - Macro: Copy Relative Path → convert to docs.github.com URL

**System hotkeys:**

* `⌃C`    - CTRL C (quit terminal process)
* `⌘⇧3`  - Screenshot entire screen
* `⌘⇧4`  - Screenshot selection
* `⌘⇧⌃4` - Screenshot selection to clipboard
* `⌘⇧5`  - Screenshot/recording toolbar
* `MUTE` `VOL-` `VOL+` `PL/PS` - Media controls
* `⌘W` - Close tab
* `⌘T` - New tab
* `⌘⇧T` - Reopen closed tab
* `⌘F` - Find
* `↑` `↓` - Arrow keys (for menu/autocomplete navigation)
* `⌃⌥←` `⌃⌥→` - Rectangle: left/right half
* `⌃⌥↩` - Rectangle: maximize
* `⌃⌥C` - Rectangle: center

## Layer 4: Pine Win base

Same as Layer 0, except: **⌘ → CTRL** and **⌃ → ⌘ (Win key)** are swapped. Mouse layer becomes Layer 5.

```
┌──────────┬──────┬──────┬──────┬──────┬──────┐   ┌──────┬──────┬──────┬──────┬──────┬──────┐
│ `/=      │  1   │  2   │  3   │  4   │  5   │   │  6   │  7   │  8   │  9   │  0   │  -   │
├──────────┼──────┼──────┼──────┼──────┼──────┤   ├──────┼──────┼──────┼──────┼──────┼──────┤
│ CAPS     │  Q   │  L   │  C   │  M   │  K   │   │ '/"  │  F   │  U   │  O   │  Y   │  \   │
├──────────┼──────┼──────┼──────┼──────┼──────┤   ├──────┼──────┼──────┼──────┼──────┼──────┤
│ ⇧/BKSP   │  N   │  R   │  S   │  T   │  W   │   │  P   │  H   │  E   │  A   │  I   │  ;   │
├──────────┼──────┼──────┼──────┼──────┼──────┤   ├──────┼──────┼──────┼──────┼──────┼──────┤
│ CTRL     │  J   │  X   │  Z   │  G   │  V   │   │  B   │  D   │ ,/<  │ ./>  │ //?  │L3/ENT│
└──────────┴──────┴──────┴──────┼──────┼──────┤   ├──────┼──────┼──────┴──────┴──────┴──────┘
                                │L5/ENT│⇧/TAB │   │ BKSP │L2/SPC│
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

## Layer 5: Win mouse/navigation

Windows equivalent of Layer 1 with Windows gesture shortcuts.

```
┌──────────┬──────┬──────┬──────┬──────┬──────┐   ┌──────┬──────┬──────┬──────┬──────┬──────┐
│          │ ⌃F   │ ⌃A   │ ⌃T   │⌃⇧T  │      │   │      │  ←   │  ↓   │  ↑   │  →   │      │
├──────────┼──────┼──────┼──────┼──────┼──────┤   ├──────┼──────┼──────┼──────┼──────┼──────┤
│          │Home  │ ⌃←   │ ⌃→   │ End  │      │   │SC ←  │SC ↓  │ M↑   │SC ↑  │SC →  │      │
├──────────┼──────┼──────┼──────┼──────┼──────┤   ├──────┼──────┼──────┼──────┼──────┼──────┤
│ ⊞V       │ ⌃S   │LCLK  │MCLK  │RCLK  │      │   │ CTRL │ M←   │ M↓   │ M→   │      │      │
├──────────┼──────┼──────┼──────┼──────┼──────┤   ├──────┼──────┼──────┼──────┼──────┼──────┤
│ AltTab   │ ⌃Z   │ ⌃X   │ ⌃C   │ ⌃V   │      │   │      │⊞⌃←   │⊞Tab  │      │⊞⌃→   │      │
└──────────┴──────┴──────┴──────┼──────┼──────┤   ├──────┼──────┼──────┴──────┴──────┴──────┘
                                │ ▓▓▓  │      │   │LCLK  │RCLK  │
                                └──────┴──────┘   └──────┴──────┘
```

* `⌃F` - Find
* `⌃T` - New tab
* `⌃⇧T` - Reopen closed tab
* `⊞V` - Clipboard history
* `Home/End` - Jump to beginning/end of line
* `⌃←` `⌃→` - Jump word left/right
* `⌃A` - Select all
* `⌃X` `⌃C` `⌃V` - Cut/Copy/Paste
* `⊞⌃←` `⊞⌃→` - Switch virtual desktop left/right
* `⊞Tab` - Task View (like Mission Control)
* `Alt←` `Alt→` - Navigate back/forward (browser)
* `Alt Tab` - App Switcher

## Combos

| Trigger | Action |
|---------|--------|
| Q + P (pos 13+22) held | BT_CLR (clear current BT profile) |
