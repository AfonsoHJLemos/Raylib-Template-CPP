#ifndef BALL_H
#define BALL_H

#include <raylib.h>

class Ball {
  int radius;
  Vector2 position;
  Vector2 speed;

 public:
  Ball(int radius, Vector2 position, Vector2 speed);
  void Update();
  void Draw();
};

#endif  // BALL_H