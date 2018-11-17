from imagehelper import read_image, write_image


WIDTH = 200
HEIGHT = 200
CHANNELS = 3
MAX_COLOR_VAL = 255

PIXELS = [[[0, 0, 0] for x in range(WIDTH)] for y in range(HEIGHT)]


def encode_message(message: str) -> None:
    global PIXELS
    # TODO
    pass


def decode_message() -> str:
    global PIXELS
    message = ""
    # TODO
    return message


def main():
    global PIXELS
    encode = int(input("Do you want to decode (0) or encode (1)? ")) == 1
    infile = input("Select input image: ")
    outfile = None
    message = None
    PIXELS = read_image(infile)
    if encode:
        outfile = input("Select output image: ")
        message = input("Enter a secret sentence:\n")
    if encode:
        print("Encoding secret message in image...")
        encode_message(message)
        write_image(PIXELS, outfile)
        print("Wrote image to destination file: {}".format(outfile))
    else:
        print("Decoding secret message from image...")
        message = decode_message()
        print("The secret message is: ")
        print(message)


if __name__ == "__main__":
    main()
