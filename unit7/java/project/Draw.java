public class Draw {

    public static final int WIDTH = 200;
    public static final int HEIGHT = 200;
    public static final int CHANNELS = 3;
    public static final int MAX_COLOR_VAL = 255;

    public static int[][][] PIXELS;

    public static void main(String[] args) {
        // Initialize all pixels to black: (0, 0, 0)
        PIXELS = new int[HEIGHT][WIDTH][CHANNELS];
        for (int y = 0; y < HEIGHT; y++) {
            for (int x = 0; x < WIDTH; x++) {
                PIXELS[y][x][0] = 0;
                PIXELS[y][x][1] = 0;
                PIXELS[y][x][2] = 0;
            }
        }

        // TODO: Modify the pixels in anyway you like!

        // Save image data to file
        String filename = "img/custom.ppm";
        ImageHelper.writeImage(PIXELS, filename);
        System.out.println("Wrote image to destination file: " + filename);
    }

}