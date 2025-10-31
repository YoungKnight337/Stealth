// Stealth.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "raylib.h"

int main()
{
    static constexpr int SCREEN_WIDTH = 800;
    static constexpr int SCREEN_HEIGHT = 450;
    static constexpr int FRAME_RATE = 60;


    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Breakout");
    SetTargetFPS(FRAME_RATE);


    while (WindowShouldClose() == false)
    {


        BeginDrawing();
        ClearBackground(BLACK);


        EndDrawing();
    }

    CloseWindow();
}
