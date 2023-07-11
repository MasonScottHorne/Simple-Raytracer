#include "Light.h"

Light::Light() : position(Vector3()), color(Vector3()), intensity(0) {}

Light::Light(const Vector3& _position, const Vector3& _color, double _intensity)
    : position(_position), color(_color), intensity(_intensity) {}
