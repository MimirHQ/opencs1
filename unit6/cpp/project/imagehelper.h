using namespace std;

#define MAX_COLOR_VAL 255
#define CHANNELS 3
#define BLOCK_SIZE 50
#define WIDTH 200
#define HEIGHT 200

string getPixel(int r, int g, int b);
void readImage(int *pixels, string filename);
void writeImage(int *pixels, string filename);
int getPixel(int *pixels, int x, int y, int c);
void setPixel(int *pixels, int x, int y, int c, int v);
