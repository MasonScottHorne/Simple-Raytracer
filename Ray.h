#ifndef RAY_H
#define RAY_H

#include "Vector3.h"

// Represents a ray in 3D space
class Ray {
public:
    Vector3 origin;
    Vector3 direction;

    Ray();
    Ray(const Vector3& _origin, const Vector3& _direction);
};

#endif // RAY_H
