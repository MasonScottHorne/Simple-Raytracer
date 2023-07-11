#include "Raytracer.h"
// Modify the parameters to fit your requirements.

// To see the rendered result, open the output image using an image viewer or editor
// that supports the PPM format.
int main() {
    int width = 800;
    int height = 600;
    int maxDepth = 5;
    int samplesPerPixel = 100;
    bool antiAliasing = true;

    Raytracer raytracer(width, height);

    Scene scene;

    // Add objects, materials, and lights to the scene

    raytracer.setAntiAliasing(antiAliasing);
    raytracer.setSamplesPerPixel(samplesPerPixel);

    raytracer.render(scene, maxDepth);
    raytracer.saveImage("output.ppm");

    return 0;
}
