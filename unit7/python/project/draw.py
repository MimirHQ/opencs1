from imagehelper import write_image


WIDTH = 200
HEIGHT = 200
CHANNELS = 3
MAX_COLOR_VAL = 255

PIXELS = [[[0, 0, 0] for x in range(WIDTH)] for y in range(HEIGHT)]


def main():
    # Initialize all pixels to black: (0, 0, 0)
    for y in range(0, HEIGHT):
        for x in range(0, WIDTH):
            PIXELS[y][x][0] = 0
            PIXELS[y][x][1] = 0
            PIXELS[y][x][2] = 0

    # TODO: Modify the pixels in anyway you like!

    # Save image data to file
    filename = "img/custom.ppm"
    write_image(PIXELS, filename)
    print("Wrote image to destination file: {}".format(filename))


if __name__ == "__main__":
    main()
