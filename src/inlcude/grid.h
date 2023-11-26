#pragma once        // Ensures that the header file is included only once during compilation
#include <raylib.h> // Includes the Raylib library for graphics and window management

// Declares the Grid class
class Grid
{
public:                                  // Public members and methods are accessible from outside the class
    Grid();                              // Constructor for the Grid class. It's called when a new Grid object is created.
    void Draw();                         // Method to draw the grid on the screen. It defines how the grid will be visually represented.
    void Initialize();                   // Method to initialize or reset the grid to a default state.
    void Print();                        // Method for debugging purposes to print the grid's current state to the console or a log.
    void Surround(int row, int col);     // method for adding 1 to the surrounding mine
    int grid[15][15];                    // A 2D array representing the grid itself. Each element can store an integer value.
    bool ContainsMine(int row, int col); // A method to know if a cell contains a mine
    bool IsCellEmpty(int row, int col);  // A mehtod to know if cell is empty
    int GetCellSize();
    int GetCols();
    int GetRows();

private:          // Private members and methods are only accessible from within the class
    int cellSize; // Variable to store the size of each cell in the grid. This could be used for drawing.
    int numRows;  // Variable to store the number of rows in the grid.
    int numCols;  // Variable to store the number of columns in the grid.
};
