cmake_minimum_required(VERSION 4.1)
project(first_library)
set(CMAKE_CXX_STANDARD 14)

add_library(my_math src/my_math.cpp)
target_include_directories(my_math PUBLIC ${PROJECT_SOURCE_DIR}/include)
add_executable(first_library app/main.cpp)

target_link_libraries(first_library PRIVATE my_math)