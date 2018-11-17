from imagehelper import read_image, write_image
import sys


WIDTH = 200
HEIGHT = 200
CHANNELS = 3
MAX_COLOR_VAL = 255

PIXELS = [[[0, 0, 0] for x in range(WIDTH)] for y in range(HEIGHT)]
MATCH = [0, 0, 0]
FILL = [0, 0, 0]


def floodfill4(x: int, y: int) -> int:
    global PIXELS
    filled = 0
    # TODO
    return filled


def floodfill8(x: int, y: int) -> int:
    global PIXELS
    filled = 0
    # TODO
    return filled


def main():
    global PIXELS
    sys.setrecursionlimit(6000)
    infile = input("Select input image: ")
    outfile = input("Select output image: ")
    method = int(input("Select a floodfill method (4 or 8): "))
    if method != 4 and method != 8:
        print("Invalid floodfill method.")
        exit()
    PIXELS = read_image(infile)

    print("Choose a pixel to floodfill:")
    print("x = ", end=" ")
    print("y = ", end=" ")
    coords = input().split(" ")
    x_start = int(coords[0])
    y_start = int(coords[1])
    in_x = x_start >= 0 and x_start < WIDTH
    in_y = y_start >= 0 and y_start < HEIGHT
    if not in_x or not in_y:
        print("Invalid pixel.")
        exit()
    MATCH[0] = PIXELS[y_start][x_start][0]
    MATCH[1] = PIXELS[y_start][x_start][1]
    MATCH[2] = PIXELS[y_start][x_start][2]

    print("Enter a color to fill:")
    print("r = ", end=" ")
    print("g = ", end=" ")
    print("b = ", end=" ")
    color = input().split(" ")
    r_fill = int(color[0])
    g_fill = int(color[1])
    b_fill = int(color[2])
    r_valid = r_fill >= 0 and r_fill <= MAX_COLOR_VAL
    g_valid = g_fill >= 0 and g_fill <= MAX_COLOR_VAL
    b_valid = b_fill >= 0 and b_fill <= MAX_COLOR_VAL
    if not r_valid or not g_valid or not b_valid:
        print("Invalid fill color.")
        exit()
    FILL[0] = r_fill
    FILL[1] = g_fill
    FILL[2] = b_fill

    print("Running floodfill {}...".format(method))
    print("Start: ({}, {})".format(x_start, y_start))
    print("Fill: ({}, {}, {})".format(r_fill, g_fill, b_fill))
    filled = 0
    if method == 4:
        filled = floodfill4(x_start, y_start)
    elif method == 8:
        filled = floodfill8(x_start, y_start)
    print("Completed floodfill {}.".format(method))
    print("Filled in {} out of {} pixels.".format(filled, HEIGHT * WIDTH))
    write_image(PIXELS, outfile)
    print("Wrote image to destination file: {}".format(outfile))


if __name__ == "__main__":
    main()
