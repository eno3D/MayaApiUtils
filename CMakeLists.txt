cmake_minimum_required(VERSION 3.15)
project(MayaApiUtils)

set(CMAKE_CXX_STANDARD 14)

add_library(MayaApiUtils MayaApiUtils.cpp MayaApiUtils.h)
target_link_libraries(MayaApiUtils $ENV{DEVKIT_LOCATION}/lib/OpenMaya.lib $ENV{DEVKIT_LOCATION}/lib/Foundation.lib)

include_directories($ENV{DEVKIT_LOCATION}/include)
link_libraries($ENV{DEVKIT_LOCATION}/lib)