#ifndef MATERIAL_H
#define MATERIAL_H

#include "Vector3.h"

// Represents the material properties of objects
class Material {
public:
    Vector3 color;
    double ambient;
    double diffuse;
    double specular;
    double shininess;

    Material();
    Material(const Vector3& _color, double _ambient, double _diffuse, double _specular, double _shininess);
};

#endif // MATERIAL_H
