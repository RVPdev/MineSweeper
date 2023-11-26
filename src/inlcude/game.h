#pragma once
#include <raylib.h>
#include "grid.h"

class Game
{
public:
    Game();                                   // Class Constructor
    void HandleInput();                       // Method to handle mouse Input
    void Draw();                              // Methods to Draw components
    bool PositionIsValid(int posX, int posY); // Mehtod to check if mause is inside valid bounds
    void CellReveal(int posX, int posY);      // Mehtod to reveal the clicked cell
    Grid grid;
    bool gameOver;

private:
};
