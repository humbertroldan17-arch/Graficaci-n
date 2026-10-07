#include "raylib.h"

int main(void) {
    const int screenWidth = 800;
    const int screenHeight = 500;

    InitWindow(screenWidth, screenHeight, "Escalacion");
    SetTargetFPS(120);

    float rectPosX = 350;
    float rectPosY = 200;
    float rectWidth = 50;
    float rectHeight = 50;
    float scale = 1.0f;
    float scaleSpeed = 0.5f;

    while (!WindowShouldClose())
    {
        float deltaTime = GetFrameTime();

        scale += scaleSpeed * deltaTime;

        if (scale >= 3.0f) {
            scaleSpeed *= -1;
        }
        else if (scale <= 0.5f) {
            scaleSpeed *= -1;
        }

        BeginDrawing();
        ClearBackground(WHITE);

        DrawRectangle(
            rectPosX,
            rectPosY,
            rectWidth * scale,
            rectHeight * scale,
            PURPLE
        );

        EndDrawing();
    }

    CloseWindow();

    return 0;
}