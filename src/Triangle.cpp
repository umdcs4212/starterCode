#include "Triangle.h"

bool Triangle::intersect( const ray &r, float tmin, float &tmax )
{
    // compute code from slides here
    // return true if hit...

    double a = vertex_a[0] - vertex_b[0];
  double b = vertex_a[1] - vertex_b[1];
  double c = vertex_a[2] - vertex_b[2];

  double d = vertex_a[0] - vertex_c[0];
  double e = vertex_a[1] - vertex_c[1];
  double f = vertex_a[2] - vertex_c[2];
  
  double g = r.direction()[0];
  double h = r.direction()[1];
  double i = r.direction()[2];

  double j = vertex_a[0] - r.origin()[0];
  double k = vertex_a[1] - r.origin()[1];
  double l = vertex_a[2] - r.origin()[2];

  double ei_minus_hf = e*i - h*f;
  double gf_minus_di = g*f - d*i;
  double dh_minus_eg = d*h - e*g;

  double M = a * ei_minus_hf + b * gf_minus_di + c * (dh_minus_eg);

  // need to compute t, gamma, and beta.... see slides
  double t = -1.0, gamma = -1.0, beta = -1.0;

  // fill in rest...

  return false;
}
