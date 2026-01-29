#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_floating_point.hpp>

#include "vec3.h"

TEST_CASE( "vec3 addition test" )
{
  vec3 a(1,1,1);
  vec3 b(1,1,1);

  vec3 c = a + b;
  
  float eps = 1.0e-3; // a tolerance for how close the answer needs to be
  float actualAnswer = 2.0f;
  REQUIRE_THAT( c.x(), Catch::Matchers::WithinAbs(actualAnswer, eps));
  REQUIRE_THAT( c.y(), Catch::Matchers::WithinAbs(actualAnswer, eps));
  REQUIRE_THAT( c.z(), Catch::Matchers::WithinAbs(actualAnswer, eps));
}

TEST_CASE("also the ray") {
  std::cout << "test the ray" << std::endl;
}
