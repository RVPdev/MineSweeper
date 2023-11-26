#include "src/inlcude/game.h"

Game::Game()
{
    grid = Grid();
    gameOver = false;
}

void Game::Draw()
{
    grid.Draw();
}