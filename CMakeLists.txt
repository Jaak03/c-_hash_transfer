cmake_minimum_required(VERSION 3.9)
project(c___hash_transfer)

set(CMAKE_CXX_STANDARD 11)
link_libraries(crypto)
link_libraries(ssl)

link_directories(openssl)

add_executable(c___hash_transfer main.cpp Hashpipe.cpp Hashpipe.h)