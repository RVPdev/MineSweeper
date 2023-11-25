#include <raylib.h>
#include "src/inlcude/grid.h"

int screenWitdh = 400;
int screenHeigth = 400;

int main()
{
    InitWindow(screenWitdh, screenHeigth, "Mine Sweeper");
    SetTargetFPS(60);

    Grid grid = Grid();

    while (!WindowShouldClose())
    {

        BeginDrawing();
        ClearBackground(WHITE);

        grid.Draw();
        
        EndDrawing();
    }
    
    CloseWindow();
    return 0;
}