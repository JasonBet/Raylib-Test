#include "raylib.h"

int main()
{
    const int width=350;
    InitWindow(width,200,"Axe");
    while(!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(WHITE);

        EndDrawing();
    }
    return 0;
}