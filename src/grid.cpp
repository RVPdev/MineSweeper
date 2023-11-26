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
    srand(time(NULL));

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

        // Place a mine (represented by 9) if the cell is empty (0)
        if (grid[randomRow][randomCol] == 0)
        {
            grid[randomRow][randomCol] = 9; // 9 represents a mine
            Surround(randomRow, randomCol);
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

void Grid::Surround(int row, int col)
{
    // Loop through the 3x3 grid centered around the mine
    for (int i = -1; i <= 1; i++) // i ranges from -1 to 1, representing rows relative to the mine
    {
        for (int j = -1; j <= 1; j++) // j ranges from -1 to 1, representing columns relative to the mine
        {
            int newRow = row + i; // Calculate the new row index
            int newCol = col + j; // Calculate the new column index

            // Check if the new row and column are within the grid boundaries
            if (newRow >= 0 && newRow < numRows && newCol >= 0 && newCol < numCols)
            {
                // Increment the adjacent cell count, but don't count the mine itself
                if (!(i == 0 && j == 0) && grid[newRow][newCol] != 9)
                {
                    grid[newRow][newCol] += 1; // Increment the count of adjacent mines
                }
            }
        }
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

// Bool method to check exixtances of mines
bool Grid::ContainsMine(int row, int col)
{
    if (grid[row][col] >= 9)
    {
        return true;
    }

    return false;
}

// Boll to check if cell is 0 or empty
bool Grid::IsCellEmpty(int row, int col)
{
    if (grid[row][col] == 0)
    {
        return true;
    }

    return false;
}

int Grid::GetCellSize(){
    return cellSize;
}
int Grid::GetCols(){
    return numCols;
}
int Grid::GetRows(){
    return numRows;
}