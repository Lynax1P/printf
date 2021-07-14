cmake_minimum_required(VERSION 3.19)
project(gnl1 C)

set(CMAKE_C_STANDARD 99)

include_directories(./)

add_executable(ft_printf
        ft_printf.c
        ft_printf.h
        src/p_char.c
        src/p_str.c
        src/p_int.c
        src/p_unsigned.c
        src/p_hex.c
        src/p_upper_hex.c
        src/p_pointer.c
        utils/parsutils.c)