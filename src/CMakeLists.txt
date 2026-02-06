add_library (cs4212-util
  ArgumentParsing.cpp ArgumentParsing.h
  handleGraphicsArgs.cpp handleGraphicsArgs.h
  model_obj.cpp model_obj.h
  vec3.h
  Framebuffer.h Framebuffer.cpp
  ray.h
  Camera.h Camera.cpp
  PerspectiveCamera.h PerspectiveCamera.cpp
  Shape.h
  Sphere.h Sphere.cpp
  Triangle.h Triangle.cpp
)

target_compile_definitions(cs4212-util PUBLIC HAS_GLM)
target_link_libraries(cs4212-util PRIVATE Boost::program_options)
target_link_libraries(cs4212-util PUBLIC glm::glm)

add_executable(fbMain
  fbMain.cpp
)
target_link_libraries(fbMain PRIVATE cs4212-util)
target_link_libraries(fbMain PRIVATE ${Boost_PROGRAM_OPTIONS_LIBRARIES})
target_link_libraries(fbMain PRIVATE PNG::PNG)
target_link_libraries(fbMain PRIVATE ZLIB::ZLIB)
