cmake_minimum_required(VERSION 3.0)
project(wxc)

find_package(wxWidgets REQUIRED COMPONENTS core)
include(${wxWidgets_USE_FILE})
add_library(
    ${PROJECT_NAME} STATIC
    functions.cpp
    wx_app.cpp
    wx_frame.cpp
    wx_status_bar.cpp
    wx_string.cpp
    wx_window.cpp
)
