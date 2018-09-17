#include <iostream>
#include <vector>
using namespace std;

vector<vector<int> > GRID;

void loadCropData() {
    int rows;
    int columns;
    cin >> rows;
    cin >> columns;
    //int grid[rows][columns];
    vector<vector<int> > grid;
    for (int r = 0; r < rows; r++) {
        vector<int> row;
        for (int c = 0; c < columns; c++) {
            int val;
            cin >> val;
            //grid[r][c] = val;
            row.push_back(val);
        }
        grid.push_back(row);
    }
    GRID = grid;
    // for (int r = 0; r < rows; r++) {
    //     for (int c = 0; c < columns; c++) {
    //         printf("Row %d, Column %d = %d\n", r, c, GRID[r][c]);
    //     }
    // }
}

int getRowCount() {
    return GRID.size();
}

int getRowLength() {
    return GRID[0].size();
}

int getCropCount(int row, int plot) {
    return GRID[row][plot];
}