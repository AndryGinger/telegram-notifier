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
include CMakeFiles/tdjson_static.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/tdjson_static.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/tdjson_static.dir/flags.make

CMakeFiles/tdjson_static.dir/td/telegram/td_json_client.cpp.o: CMakeFiles/tdjson_static.dir/flags.make
CMakeFiles/tdjson_static.dir/td/telegram/td_json_client.cpp.o: ../td/telegram/td_json_client.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/td/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/tdjson_static.dir/td/telegram/td_json_client.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/tdjson_static.dir/td/telegram/td_json_client.cpp.o -c /td/td/telegram/td_json_client.cpp

CMakeFiles/tdjson_static.dir/td/telegram/td_json_client.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tdjson_static.dir/td/telegram/td_json_client.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /td/td/telegram/td_json_client.cpp > CMakeFiles/tdjson_static.dir/td/telegram/td_json_client.cpp.i

CMakeFiles/tdjson_static.dir/td/telegram/td_json_client.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tdjson_static.dir/td/telegram/td_json_client.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /td/td/telegram/td_json_client.cpp -o CMakeFiles/tdjson_static.dir/td/telegram/td_json_client.cpp.s

CMakeFiles/tdjson_static.dir/td/telegram/td_json_client.cpp.o.requires:

.PHONY : CMakeFiles/tdjson_static.dir/td/telegram/td_json_client.cpp.o.requires

CMakeFiles/tdjson_static.dir/td/telegram/td_json_client.cpp.o.provides: CMakeFiles/tdjson_static.dir/td/telegram/td_json_client.cpp.o.requires
	$(MAKE) -f CMakeFiles/tdjson_static.dir/build.make CMakeFiles/tdjson_static.dir/td/telegram/td_json_client.cpp.o.provides.build
.PHONY : CMakeFiles/tdjson_static.dir/td/telegram/td_json_client.cpp.o.provides

CMakeFiles/tdjson_static.dir/td/telegram/td_json_client.cpp.o.provides.build: CMakeFiles/tdjson_static.dir/td/telegram/td_json_client.cpp.o


CMakeFiles/tdjson_static.dir/td/telegram/td_log.cpp.o: CMakeFiles/tdjson_static.dir/flags.make
CMakeFiles/tdjson_static.dir/td/telegram/td_log.cpp.o: ../td/telegram/td_log.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/td/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/tdjson_static.dir/td/telegram/td_log.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/tdjson_static.dir/td/telegram/td_log.cpp.o -c /td/td/telegram/td_log.cpp

CMakeFiles/tdjson_static.dir/td/telegram/td_log.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tdjson_static.dir/td/telegram/td_log.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /td/td/telegram/td_log.cpp > CMakeFiles/tdjson_static.dir/td/telegram/td_log.cpp.i

CMakeFiles/tdjson_static.dir/td/telegram/td_log.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tdjson_static.dir/td/telegram/td_log.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /td/td/telegram/td_log.cpp -o CMakeFiles/tdjson_static.dir/td/telegram/td_log.cpp.s

CMakeFiles/tdjson_static.dir/td/telegram/td_log.cpp.o.requires:

.PHONY : CMakeFiles/tdjson_static.dir/td/telegram/td_log.cpp.o.requires

CMakeFiles/tdjson_static.dir/td/telegram/td_log.cpp.o.provides: CMakeFiles/tdjson_static.dir/td/telegram/td_log.cpp.o.requires
	$(MAKE) -f CMakeFiles/tdjson_static.dir/build.make CMakeFiles/tdjson_static.dir/td/telegram/td_log.cpp.o.provides.build
.PHONY : CMakeFiles/tdjson_static.dir/td/telegram/td_log.cpp.o.provides

CMakeFiles/tdjson_static.dir/td/telegram/td_log.cpp.o.provides.build: CMakeFiles/tdjson_static.dir/td/telegram/td_log.cpp.o


# Object files for target tdjson_static
tdjson_static_OBJECTS = \
"CMakeFiles/tdjson_static.dir/td/telegram/td_json_client.cpp.o" \
"CMakeFiles/tdjson_static.dir/td/telegram/td_log.cpp.o"

# External object files for target tdjson_static
tdjson_static_EXTERNAL_OBJECTS =

libtdjson_static.a: CMakeFiles/tdjson_static.dir/td/telegram/td_json_client.cpp.o
libtdjson_static.a: CMakeFiles/tdjson_static.dir/td/telegram/td_log.cpp.o
libtdjson_static.a: CMakeFiles/tdjson_static.dir/build.make
libtdjson_static.a: CMakeFiles/tdjson_static.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/td/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX static library libtdjson_static.a"
	$(CMAKE_COMMAND) -P CMakeFiles/tdjson_static.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/tdjson_static.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/tdjson_static.dir/build: libtdjson_static.a

.PHONY : CMakeFiles/tdjson_static.dir/build

CMakeFiles/tdjson_static.dir/requires: CMakeFiles/tdjson_static.dir/td/telegram/td_json_client.cpp.o.requires
CMakeFiles/tdjson_static.dir/requires: CMakeFiles/tdjson_static.dir/td/telegram/td_log.cpp.o.requires

.PHONY : CMakeFiles/tdjson_static.dir/requires

CMakeFiles/tdjson_static.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/tdjson_static.dir/cmake_clean.cmake
.PHONY : CMakeFiles/tdjson_static.dir/clean

CMakeFiles/tdjson_static.dir/depend:
	cd /td/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /td /td /td/build /td/build /td/build/CMakeFiles/tdjson_static.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/tdjson_static.dir/depend

