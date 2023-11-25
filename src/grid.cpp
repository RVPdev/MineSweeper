#include "src/inlcude/grid.h"
#include <iostream>

Grid::Grid()
{
    numCols = 15;
    numRows = 15;
    cellSize = 40;
    Initialize();
}

void Grid::Initialize()
{
    for (int row = 0; row < numRows; row++)
    {
        for (int col = 0; col < numCols; col++)
        {
            grid[row][col] = 0;
        }
    }
}

void Grid::Print()
{
    for (int row = 0; row < numRows; row++)
    {
        for (int col = 0; col < numCols; col++)
        {
            std::cout << grid[row][col] << " ";
        }
        std::cout << std::endl;
    }
}

void Grid::Draw()
{
    for (int row = 0; row < numRows; row++)
    {
        for (int col = 0; col < numCols; col++)
        {
            DrawRectangleLines(col * cellSize, row * cellSize, cellSize, cellSize, BLACK);
        }
    }
}