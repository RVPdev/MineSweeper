#pragma once        // Ensures that the header file is included only once during compilation
#include <raylib.h> // Includes the Raylib library for graphics and window management

// Declares the Grid class
class Grid
{
public:                // Public members and methods are accessible from outside the class
    Grid();            // Constructor for the Grid class. It's called when a new Grid object is created.
    void Draw();       // Method to draw the grid on the screen. It defines how the grid will be visually represented.
    void Initialize(); // Method to initialize or reset the grid to a default state.
    void Print();      // Method for debugging purposes to print the grid's current state to the console or a log.
    int grid[15][15];  // A 2D array representing the grid itself. Each element can store an integer value.
    // The size of the grid is 15x15 cells.

private:          // Private members and methods are only accessible from within the class
    int numRows;  // Variable to store the number of rows in the grid.
    int numCols;  // Variable to store the number of columns in the grid.
    int cellSize; // Variable to store the size of each cell in the grid. This could be used for drawing.
};
