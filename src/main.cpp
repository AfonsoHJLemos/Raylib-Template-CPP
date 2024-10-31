#include <raylib.h>

#include "ball.h"

int main() {
  // Initialization
  const int windowWidth = 800;
  const int windowHeight = 450;

  InitWindow(windowWidth, windowHeight, "game");
  SetTargetFPS(60);

  Ball ball(10, {windowWidth / 2, windowHeight / 2}, {5, 5});

  // Main game loop
  while (!WindowShouldClose()) {
    // Update
    ball.Update();

    // Draw
    BeginDrawing();

    ClearBackground(BLACK);
    ball.Draw();
    DrawFPS(10, 10);

    EndDrawing();
  }

  // De-Initialization
  CloseWindow();
}