# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.19

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/csherill/Documents/clone/printf

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/csherill/Documents/clone/printf/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ft_printf.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ft_printf.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ft_printf.dir/flags.make

CMakeFiles/ft_printf.dir/ft_printf.c.o: CMakeFiles/ft_printf.dir/flags.make
CMakeFiles/ft_printf.dir/ft_printf.c.o: ../ft_printf.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/csherill/Documents/clone/printf/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/ft_printf.dir/ft_printf.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ft_printf.dir/ft_printf.c.o -c /Users/csherill/Documents/clone/printf/ft_printf.c

CMakeFiles/ft_printf.dir/ft_printf.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ft_printf.dir/ft_printf.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/csherill/Documents/clone/printf/ft_printf.c > CMakeFiles/ft_printf.dir/ft_printf.c.i

CMakeFiles/ft_printf.dir/ft_printf.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ft_printf.dir/ft_printf.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/csherill/Documents/clone/printf/ft_printf.c -o CMakeFiles/ft_printf.dir/ft_printf.c.s

CMakeFiles/ft_printf.dir/src/p_char.c.o: CMakeFiles/ft_printf.dir/flags.make
CMakeFiles/ft_printf.dir/src/p_char.c.o: ../src/p_char.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/csherill/Documents/clone/printf/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/ft_printf.dir/src/p_char.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ft_printf.dir/src/p_char.c.o -c /Users/csherill/Documents/clone/printf/src/p_char.c

CMakeFiles/ft_printf.dir/src/p_char.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ft_printf.dir/src/p_char.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/csherill/Documents/clone/printf/src/p_char.c > CMakeFiles/ft_printf.dir/src/p_char.c.i

CMakeFiles/ft_printf.dir/src/p_char.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ft_printf.dir/src/p_char.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/csherill/Documents/clone/printf/src/p_char.c -o CMakeFiles/ft_printf.dir/src/p_char.c.s

CMakeFiles/ft_printf.dir/src/p_str.c.o: CMakeFiles/ft_printf.dir/flags.make
CMakeFiles/ft_printf.dir/src/p_str.c.o: ../src/p_str.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/csherill/Documents/clone/printf/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/ft_printf.dir/src/p_str.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ft_printf.dir/src/p_str.c.o -c /Users/csherill/Documents/clone/printf/src/p_str.c

CMakeFiles/ft_printf.dir/src/p_str.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ft_printf.dir/src/p_str.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/csherill/Documents/clone/printf/src/p_str.c > CMakeFiles/ft_printf.dir/src/p_str.c.i

CMakeFiles/ft_printf.dir/src/p_str.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ft_printf.dir/src/p_str.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/csherill/Documents/clone/printf/src/p_str.c -o CMakeFiles/ft_printf.dir/src/p_str.c.s

CMakeFiles/ft_printf.dir/src/p_int.c.o: CMakeFiles/ft_printf.dir/flags.make
CMakeFiles/ft_printf.dir/src/p_int.c.o: ../src/p_int.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/csherill/Documents/clone/printf/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/ft_printf.dir/src/p_int.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ft_printf.dir/src/p_int.c.o -c /Users/csherill/Documents/clone/printf/src/p_int.c

CMakeFiles/ft_printf.dir/src/p_int.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ft_printf.dir/src/p_int.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/csherill/Documents/clone/printf/src/p_int.c > CMakeFiles/ft_printf.dir/src/p_int.c.i

CMakeFiles/ft_printf.dir/src/p_int.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ft_printf.dir/src/p_int.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/csherill/Documents/clone/printf/src/p_int.c -o CMakeFiles/ft_printf.dir/src/p_int.c.s

CMakeFiles/ft_printf.dir/src/p_unsigned.c.o: CMakeFiles/ft_printf.dir/flags.make
CMakeFiles/ft_printf.dir/src/p_unsigned.c.o: ../src/p_unsigned.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/csherill/Documents/clone/printf/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/ft_printf.dir/src/p_unsigned.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ft_printf.dir/src/p_unsigned.c.o -c /Users/csherill/Documents/clone/printf/src/p_unsigned.c

CMakeFiles/ft_printf.dir/src/p_unsigned.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ft_printf.dir/src/p_unsigned.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/csherill/Documents/clone/printf/src/p_unsigned.c > CMakeFiles/ft_printf.dir/src/p_unsigned.c.i

CMakeFiles/ft_printf.dir/src/p_unsigned.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ft_printf.dir/src/p_unsigned.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/csherill/Documents/clone/printf/src/p_unsigned.c -o CMakeFiles/ft_printf.dir/src/p_unsigned.c.s

CMakeFiles/ft_printf.dir/src/p_hex.c.o: CMakeFiles/ft_printf.dir/flags.make
CMakeFiles/ft_printf.dir/src/p_hex.c.o: ../src/p_hex.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/csherill/Documents/clone/printf/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object CMakeFiles/ft_printf.dir/src/p_hex.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ft_printf.dir/src/p_hex.c.o -c /Users/csherill/Documents/clone/printf/src/p_hex.c

CMakeFiles/ft_printf.dir/src/p_hex.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ft_printf.dir/src/p_hex.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/csherill/Documents/clone/printf/src/p_hex.c > CMakeFiles/ft_printf.dir/src/p_hex.c.i

CMakeFiles/ft_printf.dir/src/p_hex.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ft_printf.dir/src/p_hex.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/csherill/Documents/clone/printf/src/p_hex.c -o CMakeFiles/ft_printf.dir/src/p_hex.c.s

CMakeFiles/ft_printf.dir/utils/parsutils.c.o: CMakeFiles/ft_printf.dir/flags.make
CMakeFiles/ft_printf.dir/utils/parsutils.c.o: ../utils/parsutils.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/csherill/Documents/clone/printf/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building C object CMakeFiles/ft_printf.dir/utils/parsutils.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ft_printf.dir/utils/parsutils.c.o -c /Users/csherill/Documents/clone/printf/utils/parsutils.c

CMakeFiles/ft_printf.dir/utils/parsutils.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ft_printf.dir/utils/parsutils.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/csherill/Documents/clone/printf/utils/parsutils.c > CMakeFiles/ft_printf.dir/utils/parsutils.c.i

CMakeFiles/ft_printf.dir/utils/parsutils.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ft_printf.dir/utils/parsutils.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/csherill/Documents/clone/printf/utils/parsutils.c -o CMakeFiles/ft_printf.dir/utils/parsutils.c.s

# Object files for target ft_printf
ft_printf_OBJECTS = \
"CMakeFiles/ft_printf.dir/ft_printf.c.o" \
"CMakeFiles/ft_printf.dir/src/p_char.c.o" \
"CMakeFiles/ft_printf.dir/src/p_str.c.o" \
"CMakeFiles/ft_printf.dir/src/p_int.c.o" \
"CMakeFiles/ft_printf.dir/src/p_unsigned.c.o" \
"CMakeFiles/ft_printf.dir/src/p_hex.c.o" \
"CMakeFiles/ft_printf.dir/utils/parsutils.c.o"

# External object files for target ft_printf
ft_printf_EXTERNAL_OBJECTS =

ft_printf: CMakeFiles/ft_printf.dir/ft_printf.c.o
ft_printf: CMakeFiles/ft_printf.dir/src/p_char.c.o
ft_printf: CMakeFiles/ft_printf.dir/src/p_str.c.o
ft_printf: CMakeFiles/ft_printf.dir/src/p_int.c.o
ft_printf: CMakeFiles/ft_printf.dir/src/p_unsigned.c.o
ft_printf: CMakeFiles/ft_printf.dir/src/p_hex.c.o
ft_printf: CMakeFiles/ft_printf.dir/utils/parsutils.c.o
ft_printf: CMakeFiles/ft_printf.dir/build.make
ft_printf: CMakeFiles/ft_printf.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/csherill/Documents/clone/printf/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking C executable ft_printf"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ft_printf.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ft_printf.dir/build: ft_printf

.PHONY : CMakeFiles/ft_printf.dir/build

CMakeFiles/ft_printf.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ft_printf.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ft_printf.dir/clean

CMakeFiles/ft_printf.dir/depend:
	cd /Users/csherill/Documents/clone/printf/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/csherill/Documents/clone/printf /Users/csherill/Documents/clone/printf /Users/csherill/Documents/clone/printf/cmake-build-debug /Users/csherill/Documents/clone/printf/cmake-build-debug /Users/csherill/Documents/clone/printf/cmake-build-debug/CMakeFiles/ft_printf.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ft_printf.dir/depend

