#include "Ray.h"

Ray::Ray() : origin(Vector3()), direction(Vector3()) {}

Ray::Ray(const Vector3& _origin, const Vector3& _direction) : origin(_origin), direction(_direction.normalize()) {}
