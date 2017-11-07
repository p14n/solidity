if (EMSCRIPTEN)
	set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -s FORCE_FILESYSTEM=1")
endif()

add_executable(lllc main.cpp)
target_link_libraries(lllc PRIVATE lll)

