project(CAPI)
cmake_minimum_required(VERSION 3.0)

find_package(wxWidgets REQUIRED COMPONENTS core)
include(${wxWidgets_USE_FILE})
add_library(wxc functions.cpp wx_app.cpp wx_frame.cpp wx_window.cpp wx_string.cpp)
