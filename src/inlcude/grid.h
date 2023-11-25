#pragma once
#include <raylib.h>

class Grid
{  
public:
    Grid();
    void Draw();
    void Initialize();
    void Print();
    int grid[15][15];

private:

    int numRows;
    int numCols;
    int cellSize;
};
