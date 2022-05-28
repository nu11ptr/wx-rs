project(CAPI)
cmake_minimum_required(VERSION 3.0)

find_package(wxWidgets REQUIRED COMPONENTS core base)
include(${wxWidgets_USE_FILE})
add_library(wxc wx_app.cpp)
