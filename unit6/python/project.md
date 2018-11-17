# Project: Lists

## Summary

Implement a cipher program to encode and decode secret messages in images.

## Prerequisites

You should already be familiar with these programming concepts: conditionals and loops.

## Learning Objectives

In this programming project you will:

- (Understand) Represent images as multidimensional lists.
- (Understand) Represent characters as integers.
- (Apply) Implement an algorithm that operates on images.
- (Analyze) Determine the reverse of an encoding algorithm.

## Task Description

All of the digital content around you can be represented with numbers. If you can disguise those numbers, you can hide any secret message you want.

**Encoding** is the process of converting data from one format into another. **Decoding** is the reverse of that process.

In this project, you will implement a tool that can encode and decode secret messages in images.

### Image Representations

The images in this project are stored in a format called PPM. [You can read more about this format here.](http://netpbm.sourceforge.net/doc/ppm.html)

The main method of `cipher.py` handles reading and writing image files for you, so you can focus on the cipher algorithms.

The program contains the following global variables:

```python
WIDTH = 200  # The width of the image
HEIGHT = 200  # The height of the image
CHANNELS = 3  # The number of channels (RGB) in a pixel
MAX_COLOR_VAL = 255  # The maximum value for any channel
```

The image data will be stored in a global list variable:

```python
PIXELS = [[[0, 0, 0] for x in range(WIDTH)] for y in range(HEIGHT)]  # The 3D list of pixels, representing the image
```

This list will be populated before your encoding/decoding methods run.

All of the values in `PIXELS` should be between `0` and `255`. But, if a PPM image contains a pixel channel value outside of this range, a computer displaying the image will render the closest value in this range.

You can access `PIXELS` to get image data or manipulate `PIXELS` to modify the image data. Consider this example code block, setting pixel at x = 0, y = 50 to be red:

```python
PIXELS[50][0][0] = MAX_COLOR_VAL
PIXELS[50][0][1] = 0
PIXELS[50][0][2] = 0
```

Channel 0 represents red, channel 1 represents blue, and channel 2 represents green. Any RGB color can be expressed with these three fields. For example, this code block sets the same pixel to a pink color:

```python
PIXELS[50][0][0] = 244
PIXELS[50][0][1] = 66
PIXELS[50][0][2] = 220
```

### Program Structure

In `cipher.py`, implement the following recursive methods:

```python
def encode_message(message: str) -> None
def decode_message() -> str
```

The encoding method takes the secret message as a string and the decoding method should return the message as a string.

### Secret Algorithm

To encode secret messages into a given image, implement the following algorithm:

```
1. start from the top-left pixel (x = 0, y = 0)
2. for each character in the message:
    2a. convert the character to an integer
    2b. set the red channel of the current pixel to that integer value
    2c. repeat step 2 for the next character and pixel
        (move across the width of the image before moving to the next row)
3. set the next pixel to the maximum color value
```

It is up to you to figure out how to implement the decoder!

To convert a character to an integer in this algorithm, you can perform character subtraction from `'0'`:

```python
letter = 'a'
val = ord(letter) - ord("0")
# val = 49
```

To convert an integer to a character, you can perform character addition:

```python
val = 49
letter = chr(val + ord("0"))
# letter = 'a'
```

Some values may fall outside the range of `0` to `255`. This is okay. For example, what value do you get when you encode a space (`' '`) character?

### Test Data

Some input images and tests are provided to you to determine if your program is working correctly.

The test input follows this format:

```
1
img/pony.ppm
img/pony-out.ppm
i am feeling a little horse
```

Each line of input contains the following information:

```
mode: decode (0) or encode (1)
input image fillename
output image filename (if in encode mode)
secret message (if in encode mode)
```

You can test your program by running these commands in your terminal:

```bash
$ make cipher t=test/encode1.txt # Compile and run, t=filename of test
$ open img/pony-out.ppm # If no errors in encoding, view your image
```

You can also run this command in your terminal to delete any images in the `img` folder than end with `-out.ppm`:

```bash
$ make clean-img
```

## Assessment

A successful solution will:

- Correctly implement the encoding algorithm
- Correctly implement the decoding algorithm

## Appendix A: Image Attributions

The images provided as test data are sourced from the WikiMedia commons and were labeled for reuse with modification for any purposes. Source links listed here:

- [Pony](https://upload.wikimedia.org/wikipedia/commons/6/6a/Shetland_Pony_on_Belstone_Common%2C_Dartmoor.jpg)
- [Seismometer](https://upload.wikimedia.org/wikipedia/commons/0/0f/Kinemetrics_seismograph.jpg)
- [Nicolas Cage](https://upload.wikimedia.org/wikipedia/commons/3/33/Nicolas_Cage_2011_CC.jpg)
