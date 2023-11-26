#include "src/inlcude/game.h"
#include "game.h"

Game::Game()
{
    grid = Grid();
    gameOver = false;
}

void Game::Draw()
{
    grid.Draw();
}

void Game::HandleInput(){
    if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
    {
        Vector2 mPosition = GetMousePosition();
        int posX = mPosition.x / grid.GetCellSize();
        int posY = mPosition.y / grid.GetCellSize();

        if(PositionIsValid(posX, posY))
        {

        }
    }
}

bool Game::PositionIsValid(int posX, int posY)
{
    return posX >= 0 && posX < grid.GetCols() && posY >=0 && posY < grid.GetRows();
}

void Game::CellReveal(int posX, int posY)
{
    grid.grid[posX][posY];
    if(grid.ContainsMine(posX,posY))
    {
        // Lose
    }
    else
    {
        // Do something else
    }
}