#ifndef AE_VEC3_HPP
#define AE_VEC3_HPP

#pragma once

#include <iostream>
#include <cmath>

namespace AERMOSS{
     class AEVector3{
     public:
          float x, y, z;

          AEVector3();
          
          
          AEVector3(float x = 0.0f, float y = 0.0f, float z = 0.0f)
          : x(x), y(y), z(z) {}

          AEVector3(float x, float y, float z);

          float distanceTo(const AEVector3& other) const {
               float dx = other.x - this->x;
               float dy = other.y - this->y;
               float dy = other.z - this->z;
               return std::sqrt(dx * dx + dy * dy + dz * dz);
          }

          float distanceToSquare(const AEVector3& other) const {
               float dx = other.x - this->x;
               float dy = other.y - this->y;
               float dz = other.z - this->z;
               return dx * dx + dy * dy + dz * dz;
          }

          AEVector3 operator+(const AEVector3 other) const {
               return AEVector3(this->x + other.x, this->y + other.y, this->z + other.z);
          }

          AEVector3 operator-(const AEVector3 other) const {
               return AEVector3(this->x - other.x, this->y - other.y, this->z - other.z);
          }

          float dot(const AEVector3& other) const {
               return this->x*other.x + this->y*other.y + this->z*other.z;
          }

          float cross(const AEVector3& other) const {
               return AEVector3(
                    y * other.z - z * other.y,
                    z * other.x - x * other.z,
                    x * other.y - y * other.x
                );
          }
     }
}
#endif 