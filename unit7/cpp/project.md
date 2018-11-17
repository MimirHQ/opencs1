# Project: Recursion

## Summary

Implement the paint bucket fill tool using a classic recursive algorithm.

## Prerequisites

You should already be familiar with these programming concepts: conditionals, loops, and arrays.

## Learning Objectives

In this programming project you will:

- (Apply) Implement a recursive algorithm on images.
- (Create) Generate sample data to test an implementation.

## Task Description

A useful feature in image editing tools is the paint bucket tool. It generally works like this:

- The user chooses a fill color
- The user clicks on part of their image
- The application fills the color of that part of the image with the new fill color

### Flood Fill

In this project, you will implement this kind of feature using a famous recursive algorithm: flood fill.

Consider this pseudocode for the flood fill algorithm:

```
1. select a fill color
2. select a starting pixel to be the current pixel
3. save the color of the starting pixel as the match color
4. check if the color of the current pixel is the match color
    4a. if so, then color that pixel with the fill color
    4b. repeat step 4 for all pixels adjacent to the current pixel
```

You will implement two varities of the algorithm: flood fill 4 and flood fill 8. The number indicates which pixels to consider adjacent to the current pixel. In flood fill 4, only check the pixels above, below, to the left, and to the right. In flood fill 8, check the diagonally-neighboring pixels as well.

### Program Structure

In `floodfill.cpp`, implement the following recursive methods:

```cpp
int floodfill4(int x, int y);
int floodfill8(int x, int y);
```

Both methods take the x and y coordinates of a pixel as parameters and return the number of pixels filled in.

While you write your program, you can access the following macros:

```cpp
#define WIDTH 200 // The width of the image
#define HEIGHT 200 // The height of the image
#define CHANNELS 3 // The number of channels (RGB) in a pixel
#define MAX_COLOR_VAL 255 // The maximum value for any channel
```

And these global variables:

```cpp
int PIXELS[HEIGHT][WIDTH][CHANNELS]; // The 3D array of pixels, representing the image
int MATCH[CHANNELS]; // The 1D array, representing the match color
int FILL[CHANNELS]; // The 1D array, representing the fill color
```

All of these variables will be populated when your flood fill methods run.

`PIXELS` is a 3D array that stores data for `200 x 200 = 40000` pixels represented by `200 x 200 x 3 = 120000` integers.

`MATCH` and `FILL` are both 1D arrays that store data about colors represented by `3` integers.

All of the values in `PIXELS`, `MATCH`, and `FILL` should be between `0` and `255`.

Consider this example code block, setting pixel at x = 0, y = 50 to be red:

```cpp
PIXELS[50][0][0] = MAX_COLOR_VAL;
PIXELS[50][0][1] = 0;
PIXELS[50][0][2] = 0;
```

Channel 0 represents red, channel 1 represents blue, and channel 2 represents green. Any RGB color can be expressed with these three fields. For example, this code block sets the same pixel to a pink color:

```cpp
PIXELS[50][0][0] = 244;
PIXELS[50][0][1] = 66;
PIXELS[50][0][2] = 220;
```

### Test Data

The images in this project are stored in a format called PPM. [You can read more about this format here.](http://netpbm.sourceforge.net/doc/ppm.html)

Some input images are provided to you to test your program. You should also create some of your own. Use the `draw.cpp` file to create custom PPM images. You can run `draw.cpp` by running these commands in your terminal:

```bash
$ make draw # Compile and run
$ open img/custom.ppm # If no errors, view your image
```

When you are ready to implement flood fill, start working in `floodfill.cpp`. The main method is already written for you. It reads user input or test files that look like this:

```
img/basic-in.ppm
img/basic-out.ppm
4
200 200
255 0 0
```

Each line of input contains the following information:

```
input image filename
output image filename
mode: 4 or 8
starting pixel: x y
fill color: r g b
```

You can test your flood fill program by running these commands in your terminal:

```bash
$ make fill t=test/basic.txt # Compile and run, t=filename of test
$ open img/output.ppm # If no errors, view your image
```

You can also run this command in your terminal to delete any images in the `img` folder than end with `-out.ppm`:

```bash
$ make clean-img
```

## Assessment

A successful solution will:

- Provide at least three original test images that would be filled differently by flood fill 4 and flood fill 8
- Correctly fill images using flood fill 4
- Correctly fill images using flood fill 8
- Correctly count the number of filled pixels
