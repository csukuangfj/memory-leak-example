cmake_minimum_required(VERSION 3.17)
project(example)

include(FetchContent)

FetchContent_Declare(
  pybind11
  GIT_REPOSITORY "https://github.com/pybind/pybind11"
  GIT_TAG "v2.6"
  GIT_SHALLOW ON
)
FetchContent_MakeAvailable(pybind11)


add_executable(example main.cpp)
target_link_libraries(example PRIVATE pybind11::embed)
