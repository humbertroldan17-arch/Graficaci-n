#include "raylib.h"

int main(void) {
    const int screenWidth = 800;
    const int screenHeight = 500;

    InitWindow(screenWidth, screenHeight, "Traslacion");
    SetTargetFPS(120);

    float rectPosX = 0;
    float rectPosY = 200;
    float rectWidth = 100;
    float rectHeight = 100;
    float rectSpeedX = 150.0f;

    while (!WindowShouldClose())
    {
        float deltaTime = GetFrameTime();

        rectPosX += rectSpeedX * deltaTime;

        if (rectPosX >= screenWidth - rectWidth) {
            rectSpeedX *= -1;
        }
        else if (rectPosX < 0.0f) {
            rectSpeedX *= -1;
        }

        BeginDrawing();
        ClearBackground(WHITE);

        DrawRectangle(rectPosX, rectPosY, rectWidth, rectHeight, BLUE);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}