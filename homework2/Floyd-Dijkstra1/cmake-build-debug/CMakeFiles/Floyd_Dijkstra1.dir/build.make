# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/niuniu/Desktop/Algorithm analysis and design/homework2/Floyd-Dijkstra1"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/niuniu/Desktop/Algorithm analysis and design/homework2/Floyd-Dijkstra1/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Floyd_Dijkstra1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Floyd_Dijkstra1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Floyd_Dijkstra1.dir/flags.make

CMakeFiles/Floyd_Dijkstra1.dir/main.cpp.o: CMakeFiles/Floyd_Dijkstra1.dir/flags.make
CMakeFiles/Floyd_Dijkstra1.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/niuniu/Desktop/Algorithm analysis and design/homework2/Floyd-Dijkstra1/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Floyd_Dijkstra1.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Floyd_Dijkstra1.dir/main.cpp.o -c "/Users/niuniu/Desktop/Algorithm analysis and design/homework2/Floyd-Dijkstra1/main.cpp"

CMakeFiles/Floyd_Dijkstra1.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Floyd_Dijkstra1.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/niuniu/Desktop/Algorithm analysis and design/homework2/Floyd-Dijkstra1/main.cpp" > CMakeFiles/Floyd_Dijkstra1.dir/main.cpp.i

CMakeFiles/Floyd_Dijkstra1.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Floyd_Dijkstra1.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/niuniu/Desktop/Algorithm analysis and design/homework2/Floyd-Dijkstra1/main.cpp" -o CMakeFiles/Floyd_Dijkstra1.dir/main.cpp.s

# Object files for target Floyd_Dijkstra1
Floyd_Dijkstra1_OBJECTS = \
"CMakeFiles/Floyd_Dijkstra1.dir/main.cpp.o"

# External object files for target Floyd_Dijkstra1
Floyd_Dijkstra1_EXTERNAL_OBJECTS =

Floyd_Dijkstra1: CMakeFiles/Floyd_Dijkstra1.dir/main.cpp.o
Floyd_Dijkstra1: CMakeFiles/Floyd_Dijkstra1.dir/build.make
Floyd_Dijkstra1: CMakeFiles/Floyd_Dijkstra1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/niuniu/Desktop/Algorithm analysis and design/homework2/Floyd-Dijkstra1/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Floyd_Dijkstra1"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Floyd_Dijkstra1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Floyd_Dijkstra1.dir/build: Floyd_Dijkstra1

.PHONY : CMakeFiles/Floyd_Dijkstra1.dir/build

CMakeFiles/Floyd_Dijkstra1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Floyd_Dijkstra1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Floyd_Dijkstra1.dir/clean

CMakeFiles/Floyd_Dijkstra1.dir/depend:
	cd "/Users/niuniu/Desktop/Algorithm analysis and design/homework2/Floyd-Dijkstra1/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/niuniu/Desktop/Algorithm analysis and design/homework2/Floyd-Dijkstra1" "/Users/niuniu/Desktop/Algorithm analysis and design/homework2/Floyd-Dijkstra1" "/Users/niuniu/Desktop/Algorithm analysis and design/homework2/Floyd-Dijkstra1/cmake-build-debug" "/Users/niuniu/Desktop/Algorithm analysis and design/homework2/Floyd-Dijkstra1/cmake-build-debug" "/Users/niuniu/Desktop/Algorithm analysis and design/homework2/Floyd-Dijkstra1/cmake-build-debug/CMakeFiles/Floyd_Dijkstra1.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Floyd_Dijkstra1.dir/depend

