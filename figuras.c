#include "raylib.h"

int main(void) {
    const int screenWidth = 800;
    const int screenHeight = 500;

    InitWindow(screenWidth, screenHeight, "Figuras geometricas");
    SetTargetFPS(120);

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(WHITE);

        DrawRectangle(100, 100, 150, 100, RED);
        DrawCircle(400, 150, 60, BLUE);
        DrawTriangle(
            (Vector2){550, 200},
            (Vector2){650, 200},
            (Vector2){600, 100},
            GREEN
        );
        DrawLine(100, 350, 650, 350, BLACK);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}