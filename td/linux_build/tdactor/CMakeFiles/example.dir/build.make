# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /td

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /td/build

# Include any dependencies generated for this target.
include tdactor/CMakeFiles/example.dir/depend.make

# Include the progress variables for this target.
include tdactor/CMakeFiles/example.dir/progress.make

# Include the compile flags for this target's objects.
include tdactor/CMakeFiles/example.dir/flags.make

tdactor/CMakeFiles/example.dir/example/example.cpp.o: tdactor/CMakeFiles/example.dir/flags.make
tdactor/CMakeFiles/example.dir/example/example.cpp.o: ../tdactor/example/example.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/td/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object tdactor/CMakeFiles/example.dir/example/example.cpp.o"
	cd /td/build/tdactor && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/example.dir/example/example.cpp.o -c /td/tdactor/example/example.cpp

tdactor/CMakeFiles/example.dir/example/example.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/example.dir/example/example.cpp.i"
	cd /td/build/tdactor && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /td/tdactor/example/example.cpp > CMakeFiles/example.dir/example/example.cpp.i

tdactor/CMakeFiles/example.dir/example/example.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/example.dir/example/example.cpp.s"
	cd /td/build/tdactor && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /td/tdactor/example/example.cpp -o CMakeFiles/example.dir/example/example.cpp.s

tdactor/CMakeFiles/example.dir/example/example.cpp.o.requires:

.PHONY : tdactor/CMakeFiles/example.dir/example/example.cpp.o.requires

tdactor/CMakeFiles/example.dir/example/example.cpp.o.provides: tdactor/CMakeFiles/example.dir/example/example.cpp.o.requires
	$(MAKE) -f tdactor/CMakeFiles/example.dir/build.make tdactor/CMakeFiles/example.dir/example/example.cpp.o.provides.build
.PHONY : tdactor/CMakeFiles/example.dir/example/example.cpp.o.provides

tdactor/CMakeFiles/example.dir/example/example.cpp.o.provides.build: tdactor/CMakeFiles/example.dir/example/example.cpp.o


# Object files for target example
example_OBJECTS = \
"CMakeFiles/example.dir/example/example.cpp.o"

# External object files for target example
example_EXTERNAL_OBJECTS =

tdactor/example: tdactor/CMakeFiles/example.dir/example/example.cpp.o
tdactor/example: tdactor/CMakeFiles/example.dir/build.make
tdactor/example: tdactor/libtdactor.a
tdactor/example: tdutils/libtdutils.a
tdactor/example: /usr/lib/x86_64-linux-gnu/libcrypto.so
tdactor/example: /usr/lib/x86_64-linux-gnu/libz.so
tdactor/example: tdactor/CMakeFiles/example.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/td/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable example"
	cd /td/build/tdactor && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/example.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tdactor/CMakeFiles/example.dir/build: tdactor/example

.PHONY : tdactor/CMakeFiles/example.dir/build

tdactor/CMakeFiles/example.dir/requires: tdactor/CMakeFiles/example.dir/example/example.cpp.o.requires

.PHONY : tdactor/CMakeFiles/example.dir/requires

tdactor/CMakeFiles/example.dir/clean:
	cd /td/build/tdactor && $(CMAKE_COMMAND) -P CMakeFiles/example.dir/cmake_clean.cmake
.PHONY : tdactor/CMakeFiles/example.dir/clean

tdactor/CMakeFiles/example.dir/depend:
	cd /td/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /td /td/tdactor /td/build /td/build/tdactor /td/build/tdactor/CMakeFiles/example.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tdactor/CMakeFiles/example.dir/depend
