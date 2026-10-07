#include "raylib.h"

int main(void) {
    const int screenWidth = 800;
    const int screenHeight = 500;

    InitWindow(screenWidth, screenHeight, "Rotacion");
    SetTargetFPS(120);

    Vector2 rectPosition = {400, 250};
    Vector2 rectSize = {150, 100};

    float rotation = 0.0f;
    float rotationSpeed = 100.0f;

    while (!WindowShouldClose())
    {
        float deltaTime = GetFrameTime();

        rotation += rotationSpeed * deltaTime;

        if (rotation >= 360.0f) {
            rotation = 0.0f;
        }

        BeginDrawing();
        ClearBackground(WHITE);

        DrawRectanglePro(
            (Rectangle){
                rectPosition.x,
                rectPosition.y,
                rectSize.x,
                rectSize.y
            },
            (Vector2){rectSize.x / 2, rectSize.y / 2},
            rotation,
            ORANGE
        );

        EndDrawing();
    }

    CloseWindow();

    return 0;
}