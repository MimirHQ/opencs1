#include <iostream>
#include "imagehelper.h"
using namespace std;

int PIXELS[HEIGHT][WIDTH][CHANNELS];

void encodeMessage(string message) {
    // TODO
}

string decodeMessage() {
    string message = "";
    // TODO
    return message;
}

int main() {
    bool encode;
    string infile;
    string outfile;
    string message;
    cout << "Do you want to decode (0) or encode (1)? ";
    cin >> encode;
    cout << "Select input image: ";
    cin >> infile;
    readImage(**PIXELS, infile);
    if (encode) {
        cout << "Select output image: ";
        cin >> outfile;
        cout << "Enter a secret sentence:" << endl;
        cin.ignore();
        getline(cin, message);
    }
    if (encode) {
        cout << "Encoding secret message in image..." << endl;
        encodeMessage(message);
        writeImage(**PIXELS, outfile);
        cout << "Wrote image to destination file: " << outfile << endl;
    } else {
        cout << "Decoding secret message from image..." << endl;
        message = decodeMessage();
        cout << "The secret message is: " << endl;
        cout << message << endl;
    }
}