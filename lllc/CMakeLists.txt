if (EMSCRIPTEN)
	set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -s FORCE_FILESYSTEM=1")
	set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -s EXPORTED_FUNCTIONS='[\"_compileJSON\",\"_license\",\"_version\",\"_compileJSONMulti\",\"_compileJSONCallback\",\"_compileStandard\"]' -s RESERVED_FUNCTION_POINTERS=20")
	add_executable(soljson jsonCompiler.cpp)
endif()

add_executable(lllc main.cpp)
target_link_libraries(lllc PRIVATE lll)

