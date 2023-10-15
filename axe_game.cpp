#include "raylib.h"

int main()
{
    // window dimensions
    const int width=350;
    const int height=200;
    InitWindow(width,height,"Axe");

    // circle coordinates
    int circle_x=175;
    int circle_y=100;

    // set FPS
    SetTargetFPS(60);
    while(!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(WHITE);
        
        // Game logic begins
        DrawCircle(circle_x,circle_y,25,BLUE);
        DrawRectangle(300,0,50,50,RED);
        
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