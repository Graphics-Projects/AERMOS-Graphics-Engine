#ifndef AE_VEC3_HPP
#define AE_VEC3_HPP

#pragma once

#include <iostream>
#include <cmath>

namespace AERMOSS{
     class AEVector4{
     public:
          float x, y, z, t;

          AEVector4();
          
          
          AEVector4(float x = 0.0f, float y = 0.0f, float z = 0.0f, float t = 0.0f)
          : x(x), y(y), z(z), t(t) {}

          AEVector4(float x, float y, float z, float t);

          float distanceTo(const AEVector4& other) const {
               float dx = other.x - this->x;
               float dy = other.y - this->y;
               float dz = other.z - this->z;
               float dt = other.t - this->t;
               return std::sqrt(dx * dx + dy * dy + dz * dz + dt * dt);
          }

          float distanceToSquare(const AEVector4& other) const {
               float dx = other.x - this->x;
               float dy = other.y - this->y;
               float dz = other.z - this->z;
               float dt = other.t - this->t;
               return dx * dx + dy * dy + dz * dz + dt * dt;
          }

          AEVector4 operator+(const AEVector4 other) const {
               return AEVector4(this->x + other.x, this->y + other.y, this->z + other.z, this->t + other.t);
          }

          AEVector4 operator-(const AEVector4 other) const {
               return AEVector4(this->x - other.x, this->y - other.y, this->z - other.z, this->t + other.t);
          }

          float dot(const AEVector4& other) const {
               return this->x*other.x + this->y*other.y + this->z*other.z + this->t*other.t;
          }
     }
}
#endif 