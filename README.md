# Extension Numpad
4x4 numpad to connect to your PC if you don't have one. The rotary encoder can be used to control the PC volume.
Future additions could include a way to switch between different keymaps to use it as a real macro pad.

## Render
<img src=assets/numpad_render.jpg alt="Render of the numpad" width="500"/>

## PCB
### Schematic
<img src=assets/PCB-Schematic.png alt="PCB Schematic" width="500"/>

### PCB Layout
<img src=assets/PCB-Layout.png alt="PCB Layout" width="500"/>

### PCB 3D Model
<img src=assets/PCB-3DModel.png alt="PCB 3D model" width="500"/>

## Case
I use a sandwich-mount case design, which consists of a base and a top part. It is angled at 7 degrees for a more comfortable typing experience. The switches clip into the top plate, which is screwed to the base with the help of the heatset inserts.
Here are the OnShape Links to all parts: [Base](https://cad.onshape.com/documents/cdbf6aaf84bb518f5fc41afd/w/d72aa09dfed84ea584997cdd/e/9ded30b820c111a83a06e4c5?renderMode=0&uiState=69bbe44e727f4382826753fb), [Top](https://cad.onshape.com/documents/91b94f091c2e068ec862f6d8/w/81d355463357e8b4683d0840/e/7dc39a251bbec8b067ebc565?renderMode=0&uiState=69bbe5f7b81b2961b12313cf), [Rotarydial](https://cad.onshape.com/documents/0cc47eeeedf213fb4d3bd97f/w/859b01936aa7040036e683de/e/ecc9304a4732aee6efb41bf1), [Assembled](https://cad.onshape.com/documents/20f1bbdb32b406f80a62ae18)

<img src=assets/Case.png alt="Render of the case" width="500"/>

## Firmware
This numpad uses the [QMK](https://qmk.fm/) firmware, with a basic numpad layout.

<img src=assets/Keymap-Layout.png alt="Keymap-Layout" width="300"/>

## BOM
| Qty | Part                                  |
|-----|---------------------------------------|
| 1   | 3D Printed Case (1x Base, 1x Top)     |
| 1   | EC11 (Switch) Rotary Encoder          |
| 1   | PCB                                   |
| 1   | Rotary Encoder Knob                   |
| 1   | Seeed Studio XIAO RP2040              |
| 2   | M3x16mm screws                        |
| 2   | M3x8mm screws                         |
| 4   | M3x5mx4mm heatset inserts             |
| 16  | Diodes (1N4148)                       |
| 16  | MX Keycaps                            |
| 16  | MX Style Switches                     |
