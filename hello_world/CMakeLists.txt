project(HelloWorld)
cmake_minimum_required(VERSION 3.0)


find_package(wxWidgets REQUIRED COMPONENTS core base)
include(${wxWidgets_USE_FILE})
add_executable(hello hello.cpp)
target_link_libraries(hello ${wxWidgets_LIBRARIES})
