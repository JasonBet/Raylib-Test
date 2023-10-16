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
    int circle_radius=25;
    // circle edges
    int l_circle_x=circle_x-circle_radius;
    int r_circle_x=circle_x+circle_radius;
    int u_circle_y=circle_y-circle_radius;
    int b_circle_y=circle_y+circle_radius;

    // axe coordinates
    int axe_x=400;
    int axe_y=0;
    int axe_length=50;
    int direction=7;
    // axe edges
    int l_axe_x=axe_x;
    int r_axe_x=axe_x+axe_length;
    int u_axe_y=axe_y;
    int b_axe_y=axe_y+axe_length;

    // set FPS
    SetTargetFPS(60);
    while(!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(WHITE);
        
        // Game logic begins
        DrawCircle(circle_x,circle_y,circle_radius,BLUE);
        DrawRectangle(axe_x,axe_y,axe_length,axe_length,RED);

        // moving axe
        axe_y+=direction;
        if(axe_y>450||axe_y<0)
        {
            direction=-direction;
        }
        
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