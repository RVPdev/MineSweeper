#include <raylib.h>
#include "src/inlcude/game.h"

int screenWitdh = 600;
int screenHeigth = 600;

int main()
{
    InitWindow(screenWitdh, screenHeigth, "Mine Sweeper");
    SetTargetFPS(60);

    Game game = Game();

    game.grid.Print();

    while (!WindowShouldClose())
    {

        BeginDrawing();
        ClearBackground(WHITE);

        game.Draw();
        
        EndDrawing();
    }
    
    CloseWindow();
    return 0;
}