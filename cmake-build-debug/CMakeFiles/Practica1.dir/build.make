# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.9

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
CMAKE_COMMAND = /home/juan/Descargas/Clion/clion-2017.3.3/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/juan/Descargas/Clion/clion-2017.3.3/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/juan/CLionProjects/Practica1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/juan/CLionProjects/Practica1/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Practica1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Practica1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Practica1.dir/flags.make

CMakeFiles/Practica1.dir/main.cpp.o: CMakeFiles/Practica1.dir/flags.make
CMakeFiles/Practica1.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/juan/CLionProjects/Practica1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Practica1.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Practica1.dir/main.cpp.o -c /home/juan/CLionProjects/Practica1/main.cpp

CMakeFiles/Practica1.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Practica1.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/juan/CLionProjects/Practica1/main.cpp > CMakeFiles/Practica1.dir/main.cpp.i

CMakeFiles/Practica1.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Practica1.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/juan/CLionProjects/Practica1/main.cpp -o CMakeFiles/Practica1.dir/main.cpp.s

CMakeFiles/Practica1.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/Practica1.dir/main.cpp.o.requires

CMakeFiles/Practica1.dir/main.cpp.o.provides: CMakeFiles/Practica1.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/Practica1.dir/build.make CMakeFiles/Practica1.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/Practica1.dir/main.cpp.o.provides

CMakeFiles/Practica1.dir/main.cpp.o.provides.build: CMakeFiles/Practica1.dir/main.cpp.o


# Object files for target Practica1
Practica1_OBJECTS = \
"CMakeFiles/Practica1.dir/main.cpp.o"

# External object files for target Practica1
Practica1_EXTERNAL_OBJECTS =

Practica1: CMakeFiles/Practica1.dir/main.cpp.o
Practica1: CMakeFiles/Practica1.dir/build.make
Practica1: CMakeFiles/Practica1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/juan/CLionProjects/Practica1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Practica1"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Practica1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Practica1.dir/build: Practica1

.PHONY : CMakeFiles/Practica1.dir/build

CMakeFiles/Practica1.dir/requires: CMakeFiles/Practica1.dir/main.cpp.o.requires

.PHONY : CMakeFiles/Practica1.dir/requires

CMakeFiles/Practica1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Practica1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Practica1.dir/clean

CMakeFiles/Practica1.dir/depend:
	cd /home/juan/CLionProjects/Practica1/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/juan/CLionProjects/Practica1 /home/juan/CLionProjects/Practica1 /home/juan/CLionProjects/Practica1/cmake-build-debug /home/juan/CLionProjects/Practica1/cmake-build-debug /home/juan/CLionProjects/Practica1/cmake-build-debug/CMakeFiles/Practica1.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Practica1.dir/depend

