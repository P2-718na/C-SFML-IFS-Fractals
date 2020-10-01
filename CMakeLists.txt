cmake_minimum_required(VERSION 3.1)

project(C-SFML-IFS-Fractals)

find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)
add_executable(SFMLTest ./src/main.cpp ./src/tools.cpp ./src/maple.cpp ./src/fern.cpp ./src/sierpinski.cpp)

target_link_libraries(SFMLTest sfml-graphics sfml-audio)