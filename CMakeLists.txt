cmake_minimum_required(VERSION 3.5)

project(CTasks)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -std=c99 -g -O0")

add_executable(task_2 task_2.c)
add_executable(task_3 task_3.c)

add_executable(task_4 task_4.c)
target_link_libraries(task_4 m)

add_executable(task_5 task_5.c)
add_executable(task_6 task_6.c)
add_executable(task_7 task_7.c)
add_executable(task_8 task_8.c)
add_executable(task_9 task_9.c)
add_executable(task_10 task_10.c)

add_executable(task_11 task_11.c)
target_link_libraries(task_11 m)
