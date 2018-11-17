import traceback


WIDTH = 200
HEIGHT = 200
CHANNELS = 3
MAX_COLOR_VAL = 255


def get_file_gen(file):
    lines = file.read().split("\n")
    for line in lines:
        yield line


def read_image(filename):
    pixels = [[[0, 0, 0] for x in range(WIDTH)] for y in range(HEIGHT)]
    try:
        with open(filename, "r") as file:
            gen = get_file_gen(file)

            def file_input():
                return next(gen)

            magic = file_input()
            dim = file_input().split("\t")
            width = int(dim[0])
            height = int(dim[1])
            max_color = int(file_input())
            for y in range(0, height):
                for x in range(0, width):
                    px = file_input().split("\t")
                    pixels[y][x][0] = int(px[0])
                    pixels[y][x][1] = int(px[1])
                    pixels[y][x][2] = int(px[2])
    except Exception as e:
        print(e)
        traceback.print_exc()
        print("Failed to open {}".format(filename))
        exit()
    return pixels


def write_image(pixels, filename):
    try:
        with open(filename, "w") as file:

            def file_write(line):
                file.write("{}\n".format(line))

            file_write("P3")
            file_write("{}\t{}".format(WIDTH, HEIGHT))
            file_write(MAX_COLOR_VAL)
            for y in range(0, HEIGHT):
                for x in range(0, WIDTH):
                    r = pixels[y][x][0]
                    g = pixels[y][x][1]
                    b = pixels[y][x][2]
                    file_write("{}\t{}\t{}".format(r, g, b))
    except Exception as e:
        print(e)
        traceback.print_exc()
        print("Failed to open {}".format(filename))
        exit()
