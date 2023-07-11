#include "Material.h"

Material::Material() : color(Vector3()), ambient(0), diffuse(0), specular(0), shininess(0) {}

Material::Material(const Vector3& _color, double _ambient, double _diffuse, double _specular, double _shininess)
    : color(_color), ambient(_ambient), diffuse(_diffuse), specular(_specular), shininess(_shininess) {}
