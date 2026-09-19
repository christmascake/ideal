cmake_minimum_required(VERSION 3.16)
project(ideal)

# set the output directory for built objects. This makes sure that the dynamic
# library goes into the build directory automatically.
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/$<CONFIGURATION>")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/$<CONFIGURATION>")

add_subdirectory(vendored/SDL_image EXCLUDE_FROM_ALL)

find_package(SDL3 REQUIRED CONFIG REQUIRED COMPONENTS SDL3-shared)
find_package(SDL3_ttf REQUIRED COMPONENTS)

add_executable(ideal)

target_sources( 
  ideal PRIVATE 
  src/eng/main.c
  src/eng/event.c
  src/eng/iterate.c
  src/eng/quit.c
  src/eng/window.c
  src/eng/renderer.c
  src/eng/geometry.c
  src/eng/camera.c
)

target_link_libraries(ideal PRIVATE SDL3_image::SDL3_image SDL3::SDL3
                                    SDL3_ttf::SDL3_ttf)

target_include_directories(ideal PRIVATE include/eng/)
