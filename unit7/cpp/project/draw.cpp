#include <iostream>
#include "imagehelper.h"
using namespace std;

int PIXELS[HEIGHT][WIDTH][CHANNELS];

int main() {
    // Initialize all pixels to black: (0, 0, 0)
    for (int y = 0; y < HEIGHT; y++) {
        for (int x = 0; x < WIDTH; x++) {
            PIXELS[y][x][0] = 0;
            PIXELS[y][x][1] = 0;
            PIXELS[y][x][2] = 0;
        }
    }

    // TODO: Modify the pixels in anyway you like!

    // Save image data to file
    string filename = "img/custom.ppm";
    writeImage(**PIXELS, filename);
    cout << "Wrote image to destination file: " << filename << endl;
}