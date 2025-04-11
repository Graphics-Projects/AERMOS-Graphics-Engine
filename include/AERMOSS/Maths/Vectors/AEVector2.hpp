#ifndef AE_VEC2_HPP
#define AE_VEC2_HPP

#pragma once

#include <iostream>
#include <cmath>

namespace AERMOSS{
     class AEVector2{
     public:
          float x, y;

          AEVector2();
          
          
          AEVector2(float x = 0.0f, float y = 0.0f)
          : x(x), y(y) {}

          AEVector2(float x, float y);

          float distanceTo(const AEVector2& other) const {
               float dx = other.x - this->x;
               float dy = other.y - this->y;
               return std::sqrt(dx * dx + dy * dy);
          }

          float distanceToSquare(const AEVector2& other) const {
               float dx = other.x - this->x;
               float dy = other.y - this->y;
               return dx * dx + dy * dy;
          }

          AEVector2 operator+(const AEVector2 other) const {
               return Vector2D(this->x + other.x, this->y + other.y);
          }

          AEVector2 operator-(const AEVector2 other) const {
               return Vector2D(this->x - other.x, this->y - other.y);
          }

          float dot(const AEVector2& other) const {
               return this->x * other.x + this->y * other.y;
          }

          float cross(const AEVector2& other) const {
               return this->x * other.y - this->y * other.x;
          }
     }
}
#endif 