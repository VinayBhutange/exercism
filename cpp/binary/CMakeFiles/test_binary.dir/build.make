# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.18

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
CMAKE_COMMAND = /home/devil/cmake-3.18.0-Linux-x86_64/bin/cmake

# The command to remove a file.
RM = /home/devil/cmake-3.18.0-Linux-x86_64/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/devil/exercism/cpp/binary

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/devil/exercism/cpp/binary

# Utility rule file for test_binary.

# Include the progress variables for this target.
include CMakeFiles/test_binary.dir/progress.make

CMakeFiles/test_binary: binary
	./binary

test_binary: CMakeFiles/test_binary
test_binary: CMakeFiles/test_binary.dir/build.make

.PHONY : test_binary

# Rule to build all files generated by this target.
CMakeFiles/test_binary.dir/build: test_binary

.PHONY : CMakeFiles/test_binary.dir/build

CMakeFiles/test_binary.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/test_binary.dir/cmake_clean.cmake
.PHONY : CMakeFiles/test_binary.dir/clean

CMakeFiles/test_binary.dir/depend:
	cd /home/devil/exercism/cpp/binary && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/devil/exercism/cpp/binary /home/devil/exercism/cpp/binary /home/devil/exercism/cpp/binary /home/devil/exercism/cpp/binary /home/devil/exercism/cpp/binary/CMakeFiles/test_binary.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/test_binary.dir/depend

