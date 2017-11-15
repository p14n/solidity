SET ( CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -s FORCE_FILESYSTEM=1" CACHE STRING "compile flags" FORCE)

add_executable(lllc llljs.cpp)
target_link_libraries(lllc PRIVATE lll)

