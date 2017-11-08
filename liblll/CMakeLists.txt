file(GLOB sources "*.cpp")
file(GLOB headers "*.h")

if (EMSCRIPTEN)
	set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -s FORCE_FILESYSTEM=1")
endif()

add_library(lll ${sources} ${headers})
target_link_libraries(lll PUBLIC evmasm devcore)