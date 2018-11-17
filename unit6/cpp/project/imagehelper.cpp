#include <iostream>
#include <fstream>
#include "imagehelper.h"
using namespace std;

string getPixel(int r, int g, int b) {
    return to_string(r) + "\t" + to_string(g) + "\t" + to_string(b);
}

void readImage(int *pixels, string filename) {
    ifstream file;
    file.open(filename);
    if (!file) {
        cerr << "Failed to open " << filename << endl;
        exit(1);
    }
    int width = WIDTH;
    int height = HEIGHT;
    string imgMagic;
    int imgWidth;
    int imgHeight;
    int imgMaxColor;
    file >> imgMagic;
    file >> imgWidth;
    file >> imgHeight;
    file >> imgMaxColor;
    int i = 0;
    for (int y = 0; y < height; y++) {
        for (int x = 0; x < width; x++) {
            int r, g, b;
            file >> r;
            file >> g;
            file >> b;
            pixels[i + 0] = r;
            pixels[i + 1] = g;
            pixels[i + 2] = b;
            i += CHANNELS;
        }
    }
}

void writeImage(int *pixels, string filename) {
    ofstream file;
    file.open(filename);
    if (!file) {
        cerr << "Failed to open " << filename << endl;
        exit(1);
    }
    file << "P3" << endl;
    file << WIDTH << "\t" << HEIGHT << endl;
    file << MAX_COLOR_VAL << endl;
    int i = 0;
    for (int y = 0; y < HEIGHT; y++) {
        for (int x = 0; x < WIDTH; x++) {
            int r = pixels[i + 0];
            int g = pixels[i + 1];
            int b = pixels[i + 2];
            string pixel = getPixel(r, g, b);
            file << pixel << endl;
            i += CHANNELS;
        }
    }
}

int getPixel(int *pixels, int x, int y, int c) {
    int i = (y * WIDTH * CHANNELS) + (x * CHANNELS) + c;
    return pixels[i];
}

void setPixel(int *pixels, int x, int y, int c, int v) {
    int i = (y * WIDTH * CHANNELS) + (x * CHANNELS) + c;
    pixels[i] = v;
}
