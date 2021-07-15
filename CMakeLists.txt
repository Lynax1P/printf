cmake_minimum_required(VERSION 3.19)
project(gnl1 C)

set(CMAKE_C_STANDARD 99)

include_directories(./)

add_executable(ft_printf
        ft_printf.c
        ft_printf.h
        src/print_char.c
        src/print_str.c
        src/print_int.c
        src/print_unsigned.c
        src/print_hex.c
        src/print_upper_hex.c
        src/print_pointer.c)