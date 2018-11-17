#include <iostream>
#include "imagehelper.h"
using namespace std;

int PIXELS[HEIGHT][WIDTH][CHANNELS];
int MATCH[CHANNELS];
int FILL[CHANNELS];

int floodfill4(int x, int y) {
    int filled = 0;
    // TODO
    return filled;
}

int floodfill8(int x, int y) {
    int filled = 0;
    // TODO
    return filled;
}

int main() {
    string infile;
    string outfile;
    int method;
    cout << "Select input image: ";
    cin >> infile;
    cout << "Select output image: ";
    cin >> outfile;
    cout << "Select a floodfill method (4 or 8): ";
    cin >> method;
    if (method != 4 && method != 8) {
        cerr << "Invalid floodfill method." << endl;
        exit(1);
    }
    readImage(**PIXELS, infile);
    
    int xStart;
    int yStart;
    int rFill;
    int gFill;
    int bFill;
    cout << endl << "Choose a pixel to floodfill:" << endl;
    cout << "x = ";
    cin >> xStart;
    cout << "y = ";
    cin >> yStart;
    bool inX = xStart >= 0 && xStart < WIDTH;
    bool inY = yStart >= 0 && yStart < HEIGHT;
    if (!inX || !inY) {
        cerr << "Invalid pixel." << endl;
        exit(1);
    }
    MATCH[0] = PIXELS[yStart][xStart][0];
    MATCH[1] = PIXELS[yStart][xStart][1];
    MATCH[2] = PIXELS[yStart][xStart][2];

    cout << endl << "Enter a color to fill:" << endl;
    cout << "r = ";
    cin >> rFill;
    cout << "g = ";
    cin >> gFill;
    cout << "b = ";
    cin >> bFill;
    bool rValid = rFill >= 0 && rFill <= MAX_COLOR_VAL;
    bool gValid = gFill >= 0 && gFill <= MAX_COLOR_VAL;
    bool bValid = bFill >= 0 && bFill <= MAX_COLOR_VAL;
    if (!rValid || !gValid || !bValid) {
        cerr << "Invalid fill color." << endl;
        exit(1);
    }
    FILL[0] = rFill;
    FILL[1] = gFill;
    FILL[2] = bFill;

    cout << endl << "Running floodfill" << method << "..." << endl;
    cout << "Start: (" << xStart << ", " << yStart << ")" << endl;
    cout << "Match: (" << MATCH[0] << ", " << MATCH[1] << ", " << MATCH[2] << ")" << endl;
    cout << "Fill: (" << FILL[0] << ", " << FILL[1] << ", " << FILL[2] << ")" << endl;
    int filled = 0;
    if (method == 4) {
        filled = floodfill4(xStart, yStart);
    } else if (method == 8) {
        filled = floodfill8(xStart, yStart);
    }
    cout << "Completed floodfill" << method << "." << endl;
    cout << "Filled in " << filled << " out of " << (HEIGHT * WIDTH) << " pixels." << endl;
    writeImage(**PIXELS, outfile);
    cout << "Wrote image to destination file: " << outfile << endl;
}