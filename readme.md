# mimich_skeletyl

I did a hanwired skeletyl, this is the qmk and vial implementation that i ended up with. 

The keymap are inspired in *??? sadly i forget the name of the original author*. 

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

The case was 3d printed using PETG, i opted for this material because PLA has a poor heat resistence and ABS was to expensive.

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

As this board is not merged in the official [qmk](https://qmk.fm/) or [vial](https://get.vial.today/) repository you will need to move the files to `keyboards/handwired/lets_mimich` to compile and flash it. If you decide to use **vial** the same path exist inside the vial folder.

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
