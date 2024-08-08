# mimich_skeletyl

<p float="center">
  <img src="/other/img/img (1).jpg" width="48%" />
  <img src="/other/img/img (2).jpg" width="48%" />
  <img src="/other/img/img (4).jpg" width="48%" />
  <img src="/other/img/img (5).jpg" width="48%" />
  <img src="/other/img/img (3).jpg" width="96.5%" />
</p>


I did a hanwired [Skeletyl](https://github.com/Bastardkb/Skeletyl/tree/main), this is the qmk and vial implementation that i ended up with. 

The keymap are inspired in [Miryoku](https://github.com/manna-harbour/miryoku).

Keyboard Maintainer: [Lu](https://github.com/anothermimich)

## Hardware used

| What                    | Quantity  |  
| ----------------------- | --------- |
| Pro micro `atmega32u4`  | 2         | 
| PETG 3d printed case    | 2         |
| DSA blank keycaps       | 36        |
| Diode 1N4148            | 36        |
| Kailh hot swap sockets  | 36        |
| Gazzew bobagum 68g<sup>1</sup>     | 48        |
| Krytox 205g0            | ?         |
| 24 awg cable            | ?         |
| 4.7kΩ pull-up resistors | 2         |
| TRRS female connectors  | 2         |
| M4 X D6.0 X L5.0 brass inserts        | 12        |
| M4 8mm screws           | 12        |

><sup>1</sup> This is a secret, the Outemu silent peach V2 is better in every way compared to this switch.

## Making process

### Case

The case files are in this [repo](https://github.com/Bastardkb/Skeletyl/tree/main). I 3d printed it using PETG, i opted for this material because PLA has a poor heat resistence and ABS was to expensive.

### Layout schematic



    ,-----------------------------.                             ,-----------------------------.
    |     |     |     |     |     |                             |     |     |     |     |     |
    |-----+-----+-----+-----+-----|                             |-----+-----+-----+-----+-----|
    |     |     |     |     |     |                             |     |     |     |     |     |
    |-----+-----+-----+-----+-----|                             |-----+-----+-----+-----+-----|
    |     |     |     |     |     |                             |     |     |     |     |     |
    |-----+-----+-----+-----+-----|                             |-----+-----+-----+-----+-----|
    |     |     |     |     |     |                             |     |     |     |     |     |
    `-----------------------------'                             `-----------------------------'   
                            ,-----------------.     ,-----------------.
                            |     |     |     |     |     |     |     |
                            `-----------------'     `-----------------'

### Connecting the halves

I used I2C to connect the halves, using `GND, VCC, 2, 3` on both pro micros. Between `VCC` and `2` and `VCC` and `3` i used 4.7kΩ pull-up resistors.

## Flashing

As this board is not merged in the official [qmk](https://qmk.fm/) or [vial](https://get.vial.today/) repository you will need to move the files to `keyboards/handwired/mimich_skeletyl` to compile and flash it. If you decide to use **vial** the same path exist inside the vial folder.

### Vial  

Make example for this keyboard (after setting up your build environment):

    make handwired/mimich_skeletyl:vial

Flashing example for this keyboard:

    make handwired/mimich_skeletyl:vial:flash

In the **other** folder, i left a vial keymap that is quite adequate do use.

### Default

Make example for this keyboard (after setting up your build environment):

    make handwired/mimich_skeletyl:default

Flashing example for this keyboard:

    make handwired/mimich_skeletyl:default:flash

## Keymap

I'm using a simplified keymap based on [Miryoku keymap](https://github.com/manna-harbour/miryoku). My take on the keymap still lacks some functions, if you decide to use it do it with the limitations in mind.

  <img src="/other/keymap draw/keymap.svg" width="70%"/>
