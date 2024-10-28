#include <raylib.h>

int main() {
  // Initialization
  const int windowWidth = 800;
  const int windowHeight = 450;

  InitWindow(windowWidth, windowHeight, "game");
  SetTargetFPS(60);

  // Main game loop
  while (!WindowShouldClose()) {
    BeginDrawing();

    ClearBackground(BLACK);
    DrawFPS(10, 10);

    EndDrawing();
  }

  // De-Initialization
  CloseWindow();
}