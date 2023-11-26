#include "src/inlcude/grid.h"
#include <iostream>
#include <cstdLib>
#include <ctime>

// Constructor for the Grid class
Grid::Grid()
{
    numCols = 15;  // Set the number of columns in the grid to 15
    numRows = 15;  // Set the number of rows in the grid to 15
    cellSize = 40; // Set the size of each cell in the grid to 40 pixels
    Initialize();  // Call the Initialize method to set up the grid
}

// Initialize method to set up the grid
void Grid::Initialize()
{
    for (int row = 0; row < numRows; row++) // Loop through each row
    {
        for (int col = 0; col < numCols; col++) // Loop through each column
        {
            grid[row][col] = 0; // Set the value of each cell in the grid to 0
        }
    }

    // Now randomly place 15 asterisks in the grid
    int count = 0;
    while (count < 15)
    {
        int randomRow = rand() % numRows; // Generate a random row index
        int randomCol = rand() % numCols; // Generate a random column index

        // Place an asterisk (represented by 1) if the cell is empty (0)
        if (grid[randomRow][randomCol] == 0)
        {
            grid[randomRow][randomCol] = 9; // 1 represents an asterisk
            count++;
        }
    }
}

// Print method to output the grid to the console
void Grid::Print()
{
    for (int row = 0; row < numRows; row++) // Loop through each row
    {
        for (int col = 0; col < numCols; col++) // Loop through each column
        {
            std::cout << grid[row][col] << " "; // Print the value of each cell followed by a space
        }
        std::cout << std::endl; // Print a newline at the end of each row
    }
}

// Draw method to render the grid on the screen
void Grid::Draw()
{
    for (int row = 0; row < numRows; row++) // Loop through each row
    {
        for (int col = 0; col < numCols; col++) // Loop through each column
        {
            // Draw a rectangle for each cell of the grid
            DrawRectangleLines(col * cellSize, row * cellSize, cellSize, cellSize, BLACK);
        }
    }
}