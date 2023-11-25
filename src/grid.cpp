#include "src/inlcude/grid.h"

Grid::Grid()
{
    numCols = 10;
    numRows = 10;
    cellSize = 40;
}

void Grid::Draw()
{
    for (int row = 0; row < numRows; row++)
    {
        for (int col = 0; col < numCols; col++)
        {
            DrawRectangleLines(col * cellSize, row * cellSize, cellSize, cellSize,BLACK);
        }
    }
}