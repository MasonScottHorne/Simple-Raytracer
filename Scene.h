#ifndef SCENE_H
#define SCENE_H

#include "Sphere.h"
#include "Light.h"
#include <vector>

// Represents the scene containing objects, lights, and other scene-specific settings
class Scene {
public:
    std::vector<Sphere> spheres;
    std::vector<Light> lights;

    Scene();
};

#endif // SCENE
