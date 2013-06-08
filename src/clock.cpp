#include "clock.h"

Clock::Clock() {
  value = 0.0f;
  speed = 0.001f;
}

void Clock::tick() {
  value += speed;
}

float Clock::from(float time) {
  return value - time;
}