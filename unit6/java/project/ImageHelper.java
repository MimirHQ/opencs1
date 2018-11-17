import java.io.File;
import java.io.FileWriter;
import java.io.PrintWriter;
import java.util.Scanner;

public class ImageHelper {

    public static final int WIDTH = 200;
    public static final int HEIGHT = 200;
    public static final int CHANNELS = 3;
    public static final int MAX_COLOR_VAL = 255;

    public static int[][][] readImage(String filename) {
        int[][][] pixels = new int[HEIGHT][WIDTH][CHANNELS];
        try {
            File file = new File(filename);
            Scanner scan = new Scanner(file);
            String magic;
            int width;
            int height;
            int maxColor;
            magic = scan.nextLine();
            width = scan.nextInt();
            height = scan.nextInt();
            maxColor = scan.nextInt();
            for (int y = 0; y < HEIGHT; y++) {
                for (int x = 0; x < WIDTH; x++) {
                    int r, g, b;
                    r = scan.nextInt();
                    g = scan.nextInt();
                    b = scan.nextInt();
                    pixels[y][x][0] = r;
                    pixels[y][x][1] = g;
                    pixels[y][x][2] = b;
                }
            }
        } catch (Exception e) {
            e.printStackTrace();
            throw new Error("Failed to open: " + filename);
        }
        return pixels;
    }

    public static void writeImage(int[][][] pixels, String filename) {
        try {
            FileWriter fw = new FileWriter(filename);
            PrintWriter pw = new PrintWriter(fw);
            pw.print("P3\n");
            pw.printf("%d\t%d\n", WIDTH, HEIGHT);
            pw.print(MAX_COLOR_VAL + "\n");
            for (int y = 0; y < HEIGHT; y++) {
                for (int x = 0; x < WIDTH; x++) {
                    int r = pixels[y][x][0];
                    int g = pixels[y][x][1];
                    int b = pixels[y][x][2];
                    pw.printf("%d\t%d\t%d\n", r, g, b);
                }
            }
            pw.close();
        } catch (Exception e) {
            e.printStackTrace();
            throw new Error("Failed to open: " + filename);
        }
    }

}