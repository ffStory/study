# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.14.3/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.14.3/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/fingerdance/Desktop/study/gitStudy/tools/glfw-3.3.2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/fingerdance/Desktop/study/gitStudy/tools/glfw-3.3.2/build

# Include any dependencies generated for this target.
include tests/CMakeFiles/triangle-vulkan.dir/depend.make

# Include the progress variables for this target.
include tests/CMakeFiles/triangle-vulkan.dir/progress.make

# Include the compile flags for this target's objects.
include tests/CMakeFiles/triangle-vulkan.dir/flags.make

tests/CMakeFiles/triangle-vulkan.dir/triangle-vulkan.c.o: tests/CMakeFiles/triangle-vulkan.dir/flags.make
tests/CMakeFiles/triangle-vulkan.dir/triangle-vulkan.c.o: ../tests/triangle-vulkan.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/fingerdance/Desktop/study/gitStudy/tools/glfw-3.3.2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object tests/CMakeFiles/triangle-vulkan.dir/triangle-vulkan.c.o"
	cd /Users/fingerdance/Desktop/study/gitStudy/tools/glfw-3.3.2/build/tests && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/triangle-vulkan.dir/triangle-vulkan.c.o   -c /Users/fingerdance/Desktop/study/gitStudy/tools/glfw-3.3.2/tests/triangle-vulkan.c

tests/CMakeFiles/triangle-vulkan.dir/triangle-vulkan.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/triangle-vulkan.dir/triangle-vulkan.c.i"
	cd /Users/fingerdance/Desktop/study/gitStudy/tools/glfw-3.3.2/build/tests && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/fingerdance/Desktop/study/gitStudy/tools/glfw-3.3.2/tests/triangle-vulkan.c > CMakeFiles/triangle-vulkan.dir/triangle-vulkan.c.i

tests/CMakeFiles/triangle-vulkan.dir/triangle-vulkan.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/triangle-vulkan.dir/triangle-vulkan.c.s"
	cd /Users/fingerdance/Desktop/study/gitStudy/tools/glfw-3.3.2/build/tests && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/fingerdance/Desktop/study/gitStudy/tools/glfw-3.3.2/tests/triangle-vulkan.c -o CMakeFiles/triangle-vulkan.dir/triangle-vulkan.c.s

tests/CMakeFiles/triangle-vulkan.dir/__/deps/glad_vulkan.c.o: tests/CMakeFiles/triangle-vulkan.dir/flags.make
tests/CMakeFiles/triangle-vulkan.dir/__/deps/glad_vulkan.c.o: ../deps/glad_vulkan.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/fingerdance/Desktop/study/gitStudy/tools/glfw-3.3.2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object tests/CMakeFiles/triangle-vulkan.dir/__/deps/glad_vulkan.c.o"
	cd /Users/fingerdance/Desktop/study/gitStudy/tools/glfw-3.3.2/build/tests && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/triangle-vulkan.dir/__/deps/glad_vulkan.c.o   -c /Users/fingerdance/Desktop/study/gitStudy/tools/glfw-3.3.2/deps/glad_vulkan.c

tests/CMakeFiles/triangle-vulkan.dir/__/deps/glad_vulkan.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/triangle-vulkan.dir/__/deps/glad_vulkan.c.i"
	cd /Users/fingerdance/Desktop/study/gitStudy/tools/glfw-3.3.2/build/tests && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/fingerdance/Desktop/study/gitStudy/tools/glfw-3.3.2/deps/glad_vulkan.c > CMakeFiles/triangle-vulkan.dir/__/deps/glad_vulkan.c.i

tests/CMakeFiles/triangle-vulkan.dir/__/deps/glad_vulkan.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/triangle-vulkan.dir/__/deps/glad_vulkan.c.s"
	cd /Users/fingerdance/Desktop/study/gitStudy/tools/glfw-3.3.2/build/tests && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/fingerdance/Desktop/study/gitStudy/tools/glfw-3.3.2/deps/glad_vulkan.c -o CMakeFiles/triangle-vulkan.dir/__/deps/glad_vulkan.c.s

# Object files for target triangle-vulkan
triangle__vulkan_OBJECTS = \
"CMakeFiles/triangle-vulkan.dir/triangle-vulkan.c.o" \
"CMakeFiles/triangle-vulkan.dir/__/deps/glad_vulkan.c.o"

# External object files for target triangle-vulkan
triangle__vulkan_EXTERNAL_OBJECTS =

tests/triangle-vulkan: tests/CMakeFiles/triangle-vulkan.dir/triangle-vulkan.c.o
tests/triangle-vulkan: tests/CMakeFiles/triangle-vulkan.dir/__/deps/glad_vulkan.c.o
tests/triangle-vulkan: tests/CMakeFiles/triangle-vulkan.dir/build.make
tests/triangle-vulkan: src/libglfw3.a
tests/triangle-vulkan: tests/CMakeFiles/triangle-vulkan.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/fingerdance/Desktop/study/gitStudy/tools/glfw-3.3.2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable triangle-vulkan"
	cd /Users/fingerdance/Desktop/study/gitStudy/tools/glfw-3.3.2/build/tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/triangle-vulkan.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tests/CMakeFiles/triangle-vulkan.dir/build: tests/triangle-vulkan

.PHONY : tests/CMakeFiles/triangle-vulkan.dir/build

tests/CMakeFiles/triangle-vulkan.dir/clean:
	cd /Users/fingerdance/Desktop/study/gitStudy/tools/glfw-3.3.2/build/tests && $(CMAKE_COMMAND) -P CMakeFiles/triangle-vulkan.dir/cmake_clean.cmake
.PHONY : tests/CMakeFiles/triangle-vulkan.dir/clean

tests/CMakeFiles/triangle-vulkan.dir/depend:
	cd /Users/fingerdance/Desktop/study/gitStudy/tools/glfw-3.3.2/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/fingerdance/Desktop/study/gitStudy/tools/glfw-3.3.2 /Users/fingerdance/Desktop/study/gitStudy/tools/glfw-3.3.2/tests /Users/fingerdance/Desktop/study/gitStudy/tools/glfw-3.3.2/build /Users/fingerdance/Desktop/study/gitStudy/tools/glfw-3.3.2/build/tests /Users/fingerdance/Desktop/study/gitStudy/tools/glfw-3.3.2/build/tests/CMakeFiles/triangle-vulkan.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tests/CMakeFiles/triangle-vulkan.dir/depend

