cmake_minimum_required(VERSION 3.17)
project(ft_printf)

set(CMAKE_C_STANDARD 99)
#set(CMAKE_C_FLAGS "-Lmlx -lmlx -framework OpenGL -framework AppKit")
set(CMAKE_C_FLAGS "-Wall -Wextra -Werror")
#set(CMAKE_C_FLAGS "-Wall -Wextra -Werror -Wno-unused -Wno-unused-variable -Wno-unused-parameter")

include_directories(./)
link_directories(./)
add_executable(ft_printf
        ft_printf.c
        ft_printf.h
        ./src/p_char.c)