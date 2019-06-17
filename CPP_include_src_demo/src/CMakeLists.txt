FILE(GLOB sources *.cpp)
include_directories(${PROJECT_SOURCE_DIR}/include)
add_library(testCPP STATIC ${sources})