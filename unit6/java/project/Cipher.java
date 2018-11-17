import java.util.Scanner;

public class Cipher {

    public static final int WIDTH = 200;
    public static final int HEIGHT = 200;
    public static final int CHANNELS = 3;
    public static final int MAX_COLOR_VAL = 255;

    public static int[][][] PIXELS = new int[HEIGHT][WIDTH][CHANNELS];

    public static void encodeMessage(String message) {
        // TODO
    }

    public static String decodeMessage() {
        String message = "";
        // TODO
        return message;
    }

    public static void main(String[] args) {
        boolean encode;
        String infile;
        String outfile = "";
        String message = "";
        Scanner scan = new Scanner(System.in);
        System.out.print("Do you want to decode (0) or encode (1)? ");
        encode = Integer.parseInt(scan.nextLine()) == 1;
        System.out.print("Select input image: ");
        infile = scan.nextLine();
        PIXELS = ImageHelper.readImage(infile);
        if (encode) {
            System.out.print("Select output image: ");
            outfile = scan.nextLine();
            System.out.println("Enter a secret sentence:");
            message = scan.nextLine();
        }
        if (encode) {
            System.out.println("Encoding secret message in image...");
            encodeMessage(message);
            ImageHelper.writeImage(PIXELS, outfile);
            System.out.println("Wrote image to destination file: " + outfile);
        } else {
            System.out.println("Decoding secret message from image...");
            message = decodeMessage();
            System.out.println("The secret message is: ");
            System.out.println(message);
        }
    }

}