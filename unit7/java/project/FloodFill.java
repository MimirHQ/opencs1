import java.util.Scanner;

public class FloodFill {

    public static final int WIDTH = 200;
    public static final int HEIGHT = 200;
    public static final int CHANNELS = 3;
    public static final int MAX_COLOR_VAL = 255;

    public static int[][][] PIXELS = new int[HEIGHT][WIDTH][CHANNELS];
    public static int[] MATCH = new int[CHANNELS];
    public static int[] FILL = new int[CHANNELS];

    public static int floodfill4(int x, int y) {
        int filled = 0;
        // TODO
        return filled;
    }
    
    public static int floodfill8(int x, int y) {
        int filled = 0;
        // TODO
        return filled;
    }

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String infile;
        String outfile;
        int method;
        System.out.print("Select input image: ");
        infile = scan.nextLine();
        System.out.print("Select output image: ");
        outfile = scan.nextLine();
        System.out.print("Select floodfill method (4 or 8: ");
        method = scan.nextInt();
        if (method != 4 && method != 8) {
            throw new Error("Invalid floodfill method.");
        }
        PIXELS = ImageHelper.readImage(infile);

        int xStart;
        int yStart;
        int rFill;
        int gFill;
        int bFill;
        System.out.println("Choose a pixel to floodfill:");
        System.out.print("x = ");
        xStart = scan.nextInt();
        System.out.print("y = ");
        yStart = scan.nextInt();
        boolean inX = xStart >= 0 && xStart < WIDTH;
        boolean inY = yStart >= 0 && yStart < HEIGHT;
        if (!inX || !inY) {
            throw new Error("Invalid pixel.");
        }
        MATCH[0] = PIXELS[yStart][xStart][0];
        MATCH[1] = PIXELS[yStart][xStart][1];
        MATCH[2] = PIXELS[yStart][xStart][2];

        System.out.println("Enter a color to fill:");
        System.out.print("r = ");
        rFill = scan.nextInt();
        System.out.print("g = ");
        gFill = scan.nextInt();
        System.out.print("b = ");
        bFill = scan.nextInt();
        boolean rValid = rFill >= 0 && rFill <= MAX_COLOR_VAL;
        boolean gValid = gFill >= 0 && gFill <= MAX_COLOR_VAL;
        boolean bValid = bFill >= 0 && bFill <= MAX_COLOR_VAL;
        if (!rValid || !gValid || !bValid) {
            throw new Error("Invalid fill color.");
        }
        FILL[0] = rFill;
        FILL[1] = gFill;
        FILL[2] = bFill;

        System.out.println("Running floodfill " + method + "...");
        System.out.println(String.format("Start: (%d, %d)", xStart, yStart));
        System.out.println(String.format("Match: (%d, %d, %d)", MATCH[0], MATCH[1], MATCH[2]));
        System.out.println(String.format("Fill: (%d, %d, %d)", FILL[0], FILL[1], FILL[2]));
        int filled = 0;
        if (method == 4) {
            filled = floodfill4(xStart, yStart);
        } else if (method == 8) {
            filled = floodfill8(xStart, yStart);
        }
        System.out.println("Completed floodfill" + method + ".");
        System.out.println(String.format("Filled in %d out of %d pixels.", filled, (HEIGHT * WIDTH)));
        ImageHelper.writeImage(PIXELS, outfile);
        System.out.println("Wrote image to destination file: " + outfile);
    }

}