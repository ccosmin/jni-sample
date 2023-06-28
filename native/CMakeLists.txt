cmake_minimum_required(VERSION 3.2)
project(jni-sample)
set(CMAKE_CXX_STANDARD 14)

find_package(JNI REQUIRED)
include_directories(${JNI_INCLUDE_DIRS})

file(GLOB LIB2_SRCS lib2/*.c lib2/*.cpp)

add_library(lib2 SHARED ${LIB2_SRCS})
target_link_libraries(lib2 ${JNI_LIBRARIES})
target_include_directories(lib2 PUBLIC ${CMAKE_SOURCE_DIR}/lib2)

file(GLOB LIB1_SRCS lib1/*.c lib1/*.cpp)

add_library(lib1 SHARED ${LIB1_SRCS})
target_link_libraries(lib1 ${JNI_LIBRARIES} lib2)
target_include_directories(lib1 PUBLIC ${CMAKE_SOURCE_DIR}/lib1)

file(GLOB PATHSTUB_SRCS pathstub/*.cpp)
add_library(pathstub SHARED ${PATHSTUB_SRCS})
target_link_libraries(pathstub ${JNI_LIBRARIES})
target_include_directories(pathstub PUBLIC ${CMAKE_SOURCE_DIR}/pathstub)
