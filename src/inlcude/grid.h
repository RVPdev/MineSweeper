#pragma once
#include <raylib.h>

class Grid
{  
public:
    Grid();
    void Draw();

private:

    int numRows;
    int numCols;
    int cellSize;
};
