#include <raylib.h>
#include "src/inlcude/grid.h"

int screenWitdh = 600;
int screenHeigth = 600;

int main()
{
    InitWindow(screenWitdh, screenHeigth, "Mine Sweeper");
    SetTargetFPS(60);

    Grid grid = Grid();
    grid.Print();

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