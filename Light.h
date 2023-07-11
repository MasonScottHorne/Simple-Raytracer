#ifndef LIGHT_H
#define LIGHT_H

#include "Vector3.h"

// Represents a light source in the scene
class Light {
public:
    Vector3 position;
    Vector3 color;
    double intensity;

    Light();
    Light(const Vector3& _position, const Vector3& _color, double _intensity);
};

#endif // LIGHT_H
