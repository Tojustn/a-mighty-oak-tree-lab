cmake_minimum_required(VERSION 3.24)

project(a_mighty_oak_tree)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

Include(FetchContent)

FetchContent_Declare(
  Catch2
  GIT_REPOSITORY https://github.com/catchorg/Catch2.git
  GIT_TAG        v3.8.1
)

FetchContent_MakeAvailable(Catch2)

add_executable(binary_tree_test tests/binary_tree_test.cpp src/squirrel.cpp src/binary_tree.cpp)
add_executable(main main.cpp src/squirrel.cpp src/binary_tree.cpp)

target_link_libraries(binary_tree_test PRIVATE Catch2::Catch2WithMain)
