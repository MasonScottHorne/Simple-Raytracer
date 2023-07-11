#include "Sphere.h"

Sphere::Sphere() : center(Vector3()), radius(0), material(Material()) {}

Sphere::Sphere(const Vector3& _center, double _radius, const Material& _material)
    : center(_center), radius(_radius), material(_material) {}

bool Sphere::intersect(const Ray& ray, double& t) const {
    Vector3 oc = ray.origin - center;
    double a = ray.direction.dot(ray.direction);
    double b = 2.0 * oc.dot(ray.direction);
    double c = oc.dot(oc) - radius * radius;
    double discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        double t1 = (-b - std::sqrt(discriminant)) / (2 * a);
        double t2 = (-b + std::sqrt(discriminant)) / (2 * a);
        if (t1 > 0) {
            t = t1;
            return true;
        } else if (t2 > 0) {
            t = t2;
            return true;
        }
    }
    return false;
}
