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
CMAKE_SOURCE_DIR = /Users/antonglomadov/IdeaProjects/git/lab2-Parallel-

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/antonglomadov/IdeaProjects/git/lab2-Parallel-/cmake-build-release

# Include any dependencies generated for this target.
include CMakeFiles/Lab2Paralel.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Lab2Paralel.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Lab2Paralel.dir/flags.make

CMakeFiles/Lab2Paralel.dir/main.cpp.o: CMakeFiles/Lab2Paralel.dir/flags.make
CMakeFiles/Lab2Paralel.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/antonglomadov/IdeaProjects/git/lab2-Parallel-/cmake-build-release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Lab2Paralel.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Lab2Paralel.dir/main.cpp.o -c /Users/antonglomadov/IdeaProjects/git/lab2-Parallel-/main.cpp

CMakeFiles/Lab2Paralel.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Lab2Paralel.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/antonglomadov/IdeaProjects/git/lab2-Parallel-/main.cpp > CMakeFiles/Lab2Paralel.dir/main.cpp.i

CMakeFiles/Lab2Paralel.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Lab2Paralel.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/antonglomadov/IdeaProjects/git/lab2-Parallel-/main.cpp -o CMakeFiles/Lab2Paralel.dir/main.cpp.s

# Object files for target Lab2Paralel
Lab2Paralel_OBJECTS = \
"CMakeFiles/Lab2Paralel.dir/main.cpp.o"

# External object files for target Lab2Paralel
Lab2Paralel_EXTERNAL_OBJECTS =

Lab2Paralel: CMakeFiles/Lab2Paralel.dir/main.cpp.o
Lab2Paralel: CMakeFiles/Lab2Paralel.dir/build.make
Lab2Paralel: /usr/local/lib/libomp.dylib
Lab2Paralel: CMakeFiles/Lab2Paralel.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/antonglomadov/IdeaProjects/git/lab2-Parallel-/cmake-build-release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Lab2Paralel"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Lab2Paralel.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Lab2Paralel.dir/build: Lab2Paralel

.PHONY : CMakeFiles/Lab2Paralel.dir/build

CMakeFiles/Lab2Paralel.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Lab2Paralel.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Lab2Paralel.dir/clean

CMakeFiles/Lab2Paralel.dir/depend:
	cd /Users/antonglomadov/IdeaProjects/git/lab2-Parallel-/cmake-build-release && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/antonglomadov/IdeaProjects/git/lab2-Parallel- /Users/antonglomadov/IdeaProjects/git/lab2-Parallel- /Users/antonglomadov/IdeaProjects/git/lab2-Parallel-/cmake-build-release /Users/antonglomadov/IdeaProjects/git/lab2-Parallel-/cmake-build-release /Users/antonglomadov/IdeaProjects/git/lab2-Parallel-/cmake-build-release/CMakeFiles/Lab2Paralel.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Lab2Paralel.dir/depend

