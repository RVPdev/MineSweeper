#pragma once
#include <raylib.h>
#include "grid.h"

class Game
{
public:
    Game(); // Class Constructor
    void HandleInput();  // Method to handle mouse Input
    void Draw();  // Methods to Draw components
    Grid grid;
    bool gameOver;
private:

};
