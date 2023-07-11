#ifndef SPHERE_H
#define SPHERE_H

#include "Vector3.h"
#include "Material.h"
#include "Ray.h"

// Represents a sphere object in the scene
class Sphere {
public:
    Vector3 center;
    double radius;
    Material material;

    Sphere();
    Sphere(const Vector3& _center, double _radius, const Material& _material);

    bool intersect(const Ray& ray, double& t) const;
};

#endif // SPHERE_H
