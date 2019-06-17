include_directories(${PROJECT_SOURCE_DIR}/include)

include_directories(/Library/Frameworks/R.framework/Resources/include)
include_directories(/Library/Frameworks/R.framework/Versions/3.5/Resources/library/Rcpp/include)

SET(GCC_COVERAGE_COMPILE_FLAGS "-DNDEBUG -fPIC  -Wall -O2")
SET(GCC_COVERAGE_LINK_FLAGS    "-Wl,-headerpad_max_install_names -undefined dynamic_lookup
-single_module -multiply_defined suppress -framework R -Wl,-framework -Wl,CoreFoundation")



add_library(myRcppFun SHARED myRcppFun.cpp)

target_link_libraries(myRcppFun myRcpp)



