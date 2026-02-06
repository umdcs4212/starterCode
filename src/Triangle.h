#pragma once

#include "vec3.h"
#include "Shape.h"

class Triangle : public Shape
{
public:
    Triangle() : vertex_a(0.0,0.0,0.0), vertex_b(1.0, 0.0, 0.0), vertex_c(0.0, 1.0, 0.0) { }
    // You'll want this
    // Triangle(const vec3& v0, const vec3& v1, const vec3 &v2)

    bool intersect( const ray &r, float tmin, float &tmax ) override;
    
private:
    vec3 vertex_a, vertex_b, vertex_c;
};

    
