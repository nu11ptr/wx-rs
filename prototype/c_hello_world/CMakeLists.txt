cmake_minimum_required(VERSION 3.1)
project(hello)

add_compile_options(-std=c11)

add_executable(${PROJECT_NAME} hello.c)
target_include_directories(${PROJECT_NAME} PUBLIC ../c_api)
target_link_libraries(
    ${PROJECT_NAME} PUBLIC 
    wxc 
    stdc++ 
    wx_baseu-3.0
    wx_gtk3u_core-3.0
)
