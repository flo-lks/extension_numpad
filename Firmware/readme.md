# flo_4x4_numpad

<img src=assets/numpad_render.jpg alt="Render of the numpad" width="500"/>

4x4 numpad to connect to your PC if you don't have one. The rotary encoder can be used to control the PC volume.

* Keyboard Maintainer: [flo-lks](https://github.com/flo-lks)
* Hardware Supported: Seeed Studio RP2040
* Hardware Availability: [Seeed Studio RP2040](https://wiki.seeedstudio.com/XIAO-RP2040/)

Make example for this keyboard (QMK MSYS and after setting up your build environment):

    qmk compile -kb flo_4x4_numpad -km default

Flashing example for this keyboard (QMK MSYS):

    qmk flash -kb flo_4x4_numpad -km default

    or drag the compiled .uf2 file to the RP2040 when it's in bootloader mode

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 2 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix or the 7 key and plug in the keyboard
* **Physical bootloader button**: Hold the Bootloader button (bottom right corner, labeled "B") on the PCB
