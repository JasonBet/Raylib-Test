#include "raylib.h"

int main()
{
    // window dimensions
    const int width=800;
    const int height=450;
    InitWindow(width,height,"Axe");

    // circle coordinates
    int circle_x=200;
    int circle_y=200;

    // axe coordinates
    int axe_x=400;
    int axe_y=0;

    // set FPS
    SetTargetFPS(60);
    while(!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(WHITE);
        
        // Game logic begins
        DrawCircle(circle_x,circle_y,25,BLUE);
        DrawRectangle(axe_x,axe_y,50,50,RED);
        
        if(IsKeyDown(KEY_D)&&circle_x<350)
        {
            circle_x+=5;
        }
        if(IsKeyDown(KEY_A)&&circle_x>0)
        {
            circle_x-=5;
        }
        if(IsKeyDown(KEY_S))
        {
            circle_y+=3;
        }
        if(IsKeyDown(KEY_W))
        {
            circle_y-=3;
        }

        EndDrawing();
    }
    return 0;
}