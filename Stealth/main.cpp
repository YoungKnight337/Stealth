// Stealth.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "raylib.h"
#include "Game.h"


int main()
{
    static constexpr int SCREEN_WIDTH = 800;
    static constexpr int SCREEN_HEIGHT = 450;
    static constexpr int FRAME_RATE = 60;

    Game game;

    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Stealth");
    SetTargetFPS(FRAME_RATE);

    game.Initialize();

    while (WindowShouldClose() == false)
    {
        BeginDrawing();
        ClearBackground(BLACK);
        game.Draw();
        game.Update(FRAME_RATE);

        EndDrawing();
    }

    CloseWindow();
}
