# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.23

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
CMAKE_COMMAND = /opt/homebrew/Cellar/cmake/3.23.1/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/Cellar/cmake/3.23.1/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/moynstain/CLionProjects/1.HelloWorld

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/moynstain/CLionProjects/1.HelloWorld/build

# Include any dependencies generated for this target.
include CMakeFiles/3_MathFunctionCalling.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/3_MathFunctionCalling.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/3_MathFunctionCalling.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/3_MathFunctionCalling.dir/flags.make

CMakeFiles/3_MathFunctionCalling.dir/3_MathFunctionCalling.cpp.o: CMakeFiles/3_MathFunctionCalling.dir/flags.make
CMakeFiles/3_MathFunctionCalling.dir/3_MathFunctionCalling.cpp.o: ../3_MathFunctionCalling.cpp
CMakeFiles/3_MathFunctionCalling.dir/3_MathFunctionCalling.cpp.o: CMakeFiles/3_MathFunctionCalling.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/moynstain/CLionProjects/1.HelloWorld/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/3_MathFunctionCalling.dir/3_MathFunctionCalling.cpp.o"
	/opt/homebrew/bin/aarch64-apple-darwin21-g++-11 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/3_MathFunctionCalling.dir/3_MathFunctionCalling.cpp.o -MF CMakeFiles/3_MathFunctionCalling.dir/3_MathFunctionCalling.cpp.o.d -o CMakeFiles/3_MathFunctionCalling.dir/3_MathFunctionCalling.cpp.o -c /Users/moynstain/CLionProjects/1.HelloWorld/3_MathFunctionCalling.cpp

CMakeFiles/3_MathFunctionCalling.dir/3_MathFunctionCalling.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/3_MathFunctionCalling.dir/3_MathFunctionCalling.cpp.i"
	/opt/homebrew/bin/aarch64-apple-darwin21-g++-11 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/moynstain/CLionProjects/1.HelloWorld/3_MathFunctionCalling.cpp > CMakeFiles/3_MathFunctionCalling.dir/3_MathFunctionCalling.cpp.i

CMakeFiles/3_MathFunctionCalling.dir/3_MathFunctionCalling.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/3_MathFunctionCalling.dir/3_MathFunctionCalling.cpp.s"
	/opt/homebrew/bin/aarch64-apple-darwin21-g++-11 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/moynstain/CLionProjects/1.HelloWorld/3_MathFunctionCalling.cpp -o CMakeFiles/3_MathFunctionCalling.dir/3_MathFunctionCalling.cpp.s

# Object files for target 3_MathFunctionCalling
3_MathFunctionCalling_OBJECTS = \
"CMakeFiles/3_MathFunctionCalling.dir/3_MathFunctionCalling.cpp.o"

# External object files for target 3_MathFunctionCalling
3_MathFunctionCalling_EXTERNAL_OBJECTS =

3_MathFunctionCalling: CMakeFiles/3_MathFunctionCalling.dir/3_MathFunctionCalling.cpp.o
3_MathFunctionCalling: CMakeFiles/3_MathFunctionCalling.dir/build.make
3_MathFunctionCalling: CMakeFiles/3_MathFunctionCalling.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/moynstain/CLionProjects/1.HelloWorld/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 3_MathFunctionCalling"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/3_MathFunctionCalling.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/3_MathFunctionCalling.dir/build: 3_MathFunctionCalling
.PHONY : CMakeFiles/3_MathFunctionCalling.dir/build

CMakeFiles/3_MathFunctionCalling.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/3_MathFunctionCalling.dir/cmake_clean.cmake
.PHONY : CMakeFiles/3_MathFunctionCalling.dir/clean

CMakeFiles/3_MathFunctionCalling.dir/depend:
	cd /Users/moynstain/CLionProjects/1.HelloWorld/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/moynstain/CLionProjects/1.HelloWorld /Users/moynstain/CLionProjects/1.HelloWorld /Users/moynstain/CLionProjects/1.HelloWorld/build /Users/moynstain/CLionProjects/1.HelloWorld/build /Users/moynstain/CLionProjects/1.HelloWorld/build/CMakeFiles/3_MathFunctionCalling.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/3_MathFunctionCalling.dir/depend
