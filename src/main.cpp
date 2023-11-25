#include <raylib.h>

int screenWitdh = 400;
int screenHeigth = 400;

int main()
{
    InitWindow(screenWitdh, screenHeigth, "Mine Sweeper");

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(WHITE);
        
        EndDrawing();
    }
    
    CloseWindow();
    return 0;
}