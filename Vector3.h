#ifndef VECTOR3_H
#define VECTOR3_H

// Represents a 3D vector
class Vector3 {
public:
    double x, y, z;

    Vector3();
    Vector3(double _x, double _y, double _z);

    Vector3 operator+(const Vector3& other) const;
    Vector3 operator-(const Vector3& other) const;
    Vector3 operator*(double scalar) const;
    Vector3 operator/(double scalar) const;

    double dot(const Vector3& other) const;
    Vector3 cross(const Vector3& other) const;
    Vector3 normalize() const;
};

#endif // VECTOR3_H
