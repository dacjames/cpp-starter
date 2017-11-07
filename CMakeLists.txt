project(cpp_starter)
cmake_minimum_required (VERSION 3.8)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1y -fPIC")

include_directories(
  inc/
  "${CMAKE_CURRENT_SOURCE_DIR}/dep/catch/include"
  "${CMAKE_CURRENT_SOURCE_DIR}/dep/spdlog/include"
)

add_executable(starter 
  src/Main.cpp
)

# make it a bit easier to add tests
enable_testing()
macro(define_test name source)
  add_executable(${name} ${source})
  add_test(NAME ${name} COMMAND ${name})
endmacro()

define_test(test1 test/test1.cpp)
