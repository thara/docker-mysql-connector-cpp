cmake_minimum_required(VERSION 3.7)
project(hello_world)

set(CMAKE_CXX_STANDARD 14)

add_executable(hello_world main.cpp)

include_directories(/usr/include)
find_library(mysqlconnectorcpp_lib
      NAMES mysqlcppconn mysqlcppconn-static
      HINTS
          /usr/lib/x86_64-linux-gnu
      PATH_SUFFIXES
      lib64 lib)

set(LIBRARIES ${mysqlconnectorcpp_lib})

target_link_libraries(hello_world ${LIBRARIES} pthread)
