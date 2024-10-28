#include "ball.h"

Ball::Ball(int radius, Vector2 position, Vector2 speed)
    : radius(radius), position(position), speed(speed) {}

void Ball::Update() {
  if (position.x + radius >= GetScreenWidth() || position.x - radius <= 0)
    speed.x *= -1;
  if (position.y + radius >= GetScreenHeight() || position.y - radius <= 0)
    speed.y *= -1;

  position.x += speed.x;
  position.y += speed.y;
}

void Ball::Draw() { DrawCircleV(position, radius, WHITE); }
