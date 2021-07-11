cmake_minimum_required(VERSION 3.10)

project(tutorial)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_EXTENSIONS Off)
set(CMAKE_CXX_STANDARD_REQUIRED True)

#for boost
find_package(Boost 1.76.0 )

add_subdirectory(boost_features)

add_executable(tutorial tutorial.cxx)
target_link_libraries(tutorial PUBLIC boostfun)

target_include_directories(tutorial PUBLIC
	"${PROJECT_BINARY_DIR}"
	)
