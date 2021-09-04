cmake_minimum_required(VERSION 3.20)
project(CCord C)

set(CMAKE_C_STANDARD 99)

add_library(CCord src/client.c src/client.h src/intents.h src/constants.h src/utils.h)

target_include_directories(CCord PRIVATE ${PROJECT_SOURCE_DIR}/deps/http-client-c/src)
