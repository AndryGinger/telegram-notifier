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
include td/generate/CMakeFiles/generate_common.dir/depend.make

# Include the progress variables for this target.
include td/generate/CMakeFiles/generate_common.dir/progress.make

# Include the compile flags for this target's objects.
include td/generate/CMakeFiles/generate_common.dir/flags.make

td/generate/CMakeFiles/generate_common.dir/generate_common.cpp.o: td/generate/CMakeFiles/generate_common.dir/flags.make
td/generate/CMakeFiles/generate_common.dir/generate_common.cpp.o: ../td/generate/generate_common.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/td/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object td/generate/CMakeFiles/generate_common.dir/generate_common.cpp.o"
	cd /td/build/td/generate && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/generate_common.dir/generate_common.cpp.o -c /td/td/generate/generate_common.cpp

td/generate/CMakeFiles/generate_common.dir/generate_common.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/generate_common.dir/generate_common.cpp.i"
	cd /td/build/td/generate && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /td/td/generate/generate_common.cpp > CMakeFiles/generate_common.dir/generate_common.cpp.i

td/generate/CMakeFiles/generate_common.dir/generate_common.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/generate_common.dir/generate_common.cpp.s"
	cd /td/build/td/generate && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /td/td/generate/generate_common.cpp -o CMakeFiles/generate_common.dir/generate_common.cpp.s

td/generate/CMakeFiles/generate_common.dir/generate_common.cpp.o.requires:

.PHONY : td/generate/CMakeFiles/generate_common.dir/generate_common.cpp.o.requires

td/generate/CMakeFiles/generate_common.dir/generate_common.cpp.o.provides: td/generate/CMakeFiles/generate_common.dir/generate_common.cpp.o.requires
	$(MAKE) -f td/generate/CMakeFiles/generate_common.dir/build.make td/generate/CMakeFiles/generate_common.dir/generate_common.cpp.o.provides.build
.PHONY : td/generate/CMakeFiles/generate_common.dir/generate_common.cpp.o.provides

td/generate/CMakeFiles/generate_common.dir/generate_common.cpp.o.provides.build: td/generate/CMakeFiles/generate_common.dir/generate_common.cpp.o


td/generate/CMakeFiles/generate_common.dir/tl_writer_cpp.cpp.o: td/generate/CMakeFiles/generate_common.dir/flags.make
td/generate/CMakeFiles/generate_common.dir/tl_writer_cpp.cpp.o: ../td/generate/tl_writer_cpp.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/td/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object td/generate/CMakeFiles/generate_common.dir/tl_writer_cpp.cpp.o"
	cd /td/build/td/generate && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/generate_common.dir/tl_writer_cpp.cpp.o -c /td/td/generate/tl_writer_cpp.cpp

td/generate/CMakeFiles/generate_common.dir/tl_writer_cpp.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/generate_common.dir/tl_writer_cpp.cpp.i"
	cd /td/build/td/generate && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /td/td/generate/tl_writer_cpp.cpp > CMakeFiles/generate_common.dir/tl_writer_cpp.cpp.i

td/generate/CMakeFiles/generate_common.dir/tl_writer_cpp.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/generate_common.dir/tl_writer_cpp.cpp.s"
	cd /td/build/td/generate && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /td/td/generate/tl_writer_cpp.cpp -o CMakeFiles/generate_common.dir/tl_writer_cpp.cpp.s

td/generate/CMakeFiles/generate_common.dir/tl_writer_cpp.cpp.o.requires:

.PHONY : td/generate/CMakeFiles/generate_common.dir/tl_writer_cpp.cpp.o.requires

td/generate/CMakeFiles/generate_common.dir/tl_writer_cpp.cpp.o.provides: td/generate/CMakeFiles/generate_common.dir/tl_writer_cpp.cpp.o.requires
	$(MAKE) -f td/generate/CMakeFiles/generate_common.dir/build.make td/generate/CMakeFiles/generate_common.dir/tl_writer_cpp.cpp.o.provides.build
.PHONY : td/generate/CMakeFiles/generate_common.dir/tl_writer_cpp.cpp.o.provides

td/generate/CMakeFiles/generate_common.dir/tl_writer_cpp.cpp.o.provides.build: td/generate/CMakeFiles/generate_common.dir/tl_writer_cpp.cpp.o


td/generate/CMakeFiles/generate_common.dir/tl_writer_h.cpp.o: td/generate/CMakeFiles/generate_common.dir/flags.make
td/generate/CMakeFiles/generate_common.dir/tl_writer_h.cpp.o: ../td/generate/tl_writer_h.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/td/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object td/generate/CMakeFiles/generate_common.dir/tl_writer_h.cpp.o"
	cd /td/build/td/generate && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/generate_common.dir/tl_writer_h.cpp.o -c /td/td/generate/tl_writer_h.cpp

td/generate/CMakeFiles/generate_common.dir/tl_writer_h.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/generate_common.dir/tl_writer_h.cpp.i"
	cd /td/build/td/generate && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /td/td/generate/tl_writer_h.cpp > CMakeFiles/generate_common.dir/tl_writer_h.cpp.i

td/generate/CMakeFiles/generate_common.dir/tl_writer_h.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/generate_common.dir/tl_writer_h.cpp.s"
	cd /td/build/td/generate && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /td/td/generate/tl_writer_h.cpp -o CMakeFiles/generate_common.dir/tl_writer_h.cpp.s

td/generate/CMakeFiles/generate_common.dir/tl_writer_h.cpp.o.requires:

.PHONY : td/generate/CMakeFiles/generate_common.dir/tl_writer_h.cpp.o.requires

td/generate/CMakeFiles/generate_common.dir/tl_writer_h.cpp.o.provides: td/generate/CMakeFiles/generate_common.dir/tl_writer_h.cpp.o.requires
	$(MAKE) -f td/generate/CMakeFiles/generate_common.dir/build.make td/generate/CMakeFiles/generate_common.dir/tl_writer_h.cpp.o.provides.build
.PHONY : td/generate/CMakeFiles/generate_common.dir/tl_writer_h.cpp.o.provides

td/generate/CMakeFiles/generate_common.dir/tl_writer_h.cpp.o.provides.build: td/generate/CMakeFiles/generate_common.dir/tl_writer_h.cpp.o


td/generate/CMakeFiles/generate_common.dir/tl_writer_hpp.cpp.o: td/generate/CMakeFiles/generate_common.dir/flags.make
td/generate/CMakeFiles/generate_common.dir/tl_writer_hpp.cpp.o: ../td/generate/tl_writer_hpp.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/td/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object td/generate/CMakeFiles/generate_common.dir/tl_writer_hpp.cpp.o"
	cd /td/build/td/generate && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/generate_common.dir/tl_writer_hpp.cpp.o -c /td/td/generate/tl_writer_hpp.cpp

td/generate/CMakeFiles/generate_common.dir/tl_writer_hpp.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/generate_common.dir/tl_writer_hpp.cpp.i"
	cd /td/build/td/generate && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /td/td/generate/tl_writer_hpp.cpp > CMakeFiles/generate_common.dir/tl_writer_hpp.cpp.i

td/generate/CMakeFiles/generate_common.dir/tl_writer_hpp.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/generate_common.dir/tl_writer_hpp.cpp.s"
	cd /td/build/td/generate && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /td/td/generate/tl_writer_hpp.cpp -o CMakeFiles/generate_common.dir/tl_writer_hpp.cpp.s

td/generate/CMakeFiles/generate_common.dir/tl_writer_hpp.cpp.o.requires:

.PHONY : td/generate/CMakeFiles/generate_common.dir/tl_writer_hpp.cpp.o.requires

td/generate/CMakeFiles/generate_common.dir/tl_writer_hpp.cpp.o.provides: td/generate/CMakeFiles/generate_common.dir/tl_writer_hpp.cpp.o.requires
	$(MAKE) -f td/generate/CMakeFiles/generate_common.dir/build.make td/generate/CMakeFiles/generate_common.dir/tl_writer_hpp.cpp.o.provides.build
.PHONY : td/generate/CMakeFiles/generate_common.dir/tl_writer_hpp.cpp.o.provides

td/generate/CMakeFiles/generate_common.dir/tl_writer_hpp.cpp.o.provides.build: td/generate/CMakeFiles/generate_common.dir/tl_writer_hpp.cpp.o


td/generate/CMakeFiles/generate_common.dir/tl_writer_jni_cpp.cpp.o: td/generate/CMakeFiles/generate_common.dir/flags.make
td/generate/CMakeFiles/generate_common.dir/tl_writer_jni_cpp.cpp.o: ../td/generate/tl_writer_jni_cpp.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/td/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object td/generate/CMakeFiles/generate_common.dir/tl_writer_jni_cpp.cpp.o"
	cd /td/build/td/generate && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/generate_common.dir/tl_writer_jni_cpp.cpp.o -c /td/td/generate/tl_writer_jni_cpp.cpp

td/generate/CMakeFiles/generate_common.dir/tl_writer_jni_cpp.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/generate_common.dir/tl_writer_jni_cpp.cpp.i"
	cd /td/build/td/generate && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /td/td/generate/tl_writer_jni_cpp.cpp > CMakeFiles/generate_common.dir/tl_writer_jni_cpp.cpp.i

td/generate/CMakeFiles/generate_common.dir/tl_writer_jni_cpp.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/generate_common.dir/tl_writer_jni_cpp.cpp.s"
	cd /td/build/td/generate && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /td/td/generate/tl_writer_jni_cpp.cpp -o CMakeFiles/generate_common.dir/tl_writer_jni_cpp.cpp.s

td/generate/CMakeFiles/generate_common.dir/tl_writer_jni_cpp.cpp.o.requires:

.PHONY : td/generate/CMakeFiles/generate_common.dir/tl_writer_jni_cpp.cpp.o.requires

td/generate/CMakeFiles/generate_common.dir/tl_writer_jni_cpp.cpp.o.provides: td/generate/CMakeFiles/generate_common.dir/tl_writer_jni_cpp.cpp.o.requires
	$(MAKE) -f td/generate/CMakeFiles/generate_common.dir/build.make td/generate/CMakeFiles/generate_common.dir/tl_writer_jni_cpp.cpp.o.provides.build
.PHONY : td/generate/CMakeFiles/generate_common.dir/tl_writer_jni_cpp.cpp.o.provides

td/generate/CMakeFiles/generate_common.dir/tl_writer_jni_cpp.cpp.o.provides.build: td/generate/CMakeFiles/generate_common.dir/tl_writer_jni_cpp.cpp.o


td/generate/CMakeFiles/generate_common.dir/tl_writer_jni_h.cpp.o: td/generate/CMakeFiles/generate_common.dir/flags.make
td/generate/CMakeFiles/generate_common.dir/tl_writer_jni_h.cpp.o: ../td/generate/tl_writer_jni_h.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/td/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object td/generate/CMakeFiles/generate_common.dir/tl_writer_jni_h.cpp.o"
	cd /td/build/td/generate && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/generate_common.dir/tl_writer_jni_h.cpp.o -c /td/td/generate/tl_writer_jni_h.cpp

td/generate/CMakeFiles/generate_common.dir/tl_writer_jni_h.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/generate_common.dir/tl_writer_jni_h.cpp.i"
	cd /td/build/td/generate && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /td/td/generate/tl_writer_jni_h.cpp > CMakeFiles/generate_common.dir/tl_writer_jni_h.cpp.i

td/generate/CMakeFiles/generate_common.dir/tl_writer_jni_h.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/generate_common.dir/tl_writer_jni_h.cpp.s"
	cd /td/build/td/generate && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /td/td/generate/tl_writer_jni_h.cpp -o CMakeFiles/generate_common.dir/tl_writer_jni_h.cpp.s

td/generate/CMakeFiles/generate_common.dir/tl_writer_jni_h.cpp.o.requires:

.PHONY : td/generate/CMakeFiles/generate_common.dir/tl_writer_jni_h.cpp.o.requires

td/generate/CMakeFiles/generate_common.dir/tl_writer_jni_h.cpp.o.provides: td/generate/CMakeFiles/generate_common.dir/tl_writer_jni_h.cpp.o.requires
	$(MAKE) -f td/generate/CMakeFiles/generate_common.dir/build.make td/generate/CMakeFiles/generate_common.dir/tl_writer_jni_h.cpp.o.provides.build
.PHONY : td/generate/CMakeFiles/generate_common.dir/tl_writer_jni_h.cpp.o.provides

td/generate/CMakeFiles/generate_common.dir/tl_writer_jni_h.cpp.o.provides.build: td/generate/CMakeFiles/generate_common.dir/tl_writer_jni_h.cpp.o


td/generate/CMakeFiles/generate_common.dir/tl_writer_td.cpp.o: td/generate/CMakeFiles/generate_common.dir/flags.make
td/generate/CMakeFiles/generate_common.dir/tl_writer_td.cpp.o: ../td/generate/tl_writer_td.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/td/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object td/generate/CMakeFiles/generate_common.dir/tl_writer_td.cpp.o"
	cd /td/build/td/generate && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/generate_common.dir/tl_writer_td.cpp.o -c /td/td/generate/tl_writer_td.cpp

td/generate/CMakeFiles/generate_common.dir/tl_writer_td.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/generate_common.dir/tl_writer_td.cpp.i"
	cd /td/build/td/generate && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /td/td/generate/tl_writer_td.cpp > CMakeFiles/generate_common.dir/tl_writer_td.cpp.i

td/generate/CMakeFiles/generate_common.dir/tl_writer_td.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/generate_common.dir/tl_writer_td.cpp.s"
	cd /td/build/td/generate && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /td/td/generate/tl_writer_td.cpp -o CMakeFiles/generate_common.dir/tl_writer_td.cpp.s

td/generate/CMakeFiles/generate_common.dir/tl_writer_td.cpp.o.requires:

.PHONY : td/generate/CMakeFiles/generate_common.dir/tl_writer_td.cpp.o.requires

td/generate/CMakeFiles/generate_common.dir/tl_writer_td.cpp.o.provides: td/generate/CMakeFiles/generate_common.dir/tl_writer_td.cpp.o.requires
	$(MAKE) -f td/generate/CMakeFiles/generate_common.dir/build.make td/generate/CMakeFiles/generate_common.dir/tl_writer_td.cpp.o.provides.build
.PHONY : td/generate/CMakeFiles/generate_common.dir/tl_writer_td.cpp.o.provides

td/generate/CMakeFiles/generate_common.dir/tl_writer_td.cpp.o.provides.build: td/generate/CMakeFiles/generate_common.dir/tl_writer_td.cpp.o


# Object files for target generate_common
generate_common_OBJECTS = \
"CMakeFiles/generate_common.dir/generate_common.cpp.o" \
"CMakeFiles/generate_common.dir/tl_writer_cpp.cpp.o" \
"CMakeFiles/generate_common.dir/tl_writer_h.cpp.o" \
"CMakeFiles/generate_common.dir/tl_writer_hpp.cpp.o" \
"CMakeFiles/generate_common.dir/tl_writer_jni_cpp.cpp.o" \
"CMakeFiles/generate_common.dir/tl_writer_jni_h.cpp.o" \
"CMakeFiles/generate_common.dir/tl_writer_td.cpp.o"

# External object files for target generate_common
generate_common_EXTERNAL_OBJECTS =

td/generate/generate_common: td/generate/CMakeFiles/generate_common.dir/generate_common.cpp.o
td/generate/generate_common: td/generate/CMakeFiles/generate_common.dir/tl_writer_cpp.cpp.o
td/generate/generate_common: td/generate/CMakeFiles/generate_common.dir/tl_writer_h.cpp.o
td/generate/generate_common: td/generate/CMakeFiles/generate_common.dir/tl_writer_hpp.cpp.o
td/generate/generate_common: td/generate/CMakeFiles/generate_common.dir/tl_writer_jni_cpp.cpp.o
td/generate/generate_common: td/generate/CMakeFiles/generate_common.dir/tl_writer_jni_h.cpp.o
td/generate/generate_common: td/generate/CMakeFiles/generate_common.dir/tl_writer_td.cpp.o
td/generate/generate_common: td/generate/CMakeFiles/generate_common.dir/build.make
td/generate/generate_common: tdtl/libtdtl.a
td/generate/generate_common: td/generate/CMakeFiles/generate_common.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/td/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX executable generate_common"
	cd /td/build/td/generate && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/generate_common.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
td/generate/CMakeFiles/generate_common.dir/build: td/generate/generate_common

.PHONY : td/generate/CMakeFiles/generate_common.dir/build

td/generate/CMakeFiles/generate_common.dir/requires: td/generate/CMakeFiles/generate_common.dir/generate_common.cpp.o.requires
td/generate/CMakeFiles/generate_common.dir/requires: td/generate/CMakeFiles/generate_common.dir/tl_writer_cpp.cpp.o.requires
td/generate/CMakeFiles/generate_common.dir/requires: td/generate/CMakeFiles/generate_common.dir/tl_writer_h.cpp.o.requires
td/generate/CMakeFiles/generate_common.dir/requires: td/generate/CMakeFiles/generate_common.dir/tl_writer_hpp.cpp.o.requires
td/generate/CMakeFiles/generate_common.dir/requires: td/generate/CMakeFiles/generate_common.dir/tl_writer_jni_cpp.cpp.o.requires
td/generate/CMakeFiles/generate_common.dir/requires: td/generate/CMakeFiles/generate_common.dir/tl_writer_jni_h.cpp.o.requires
td/generate/CMakeFiles/generate_common.dir/requires: td/generate/CMakeFiles/generate_common.dir/tl_writer_td.cpp.o.requires

.PHONY : td/generate/CMakeFiles/generate_common.dir/requires

td/generate/CMakeFiles/generate_common.dir/clean:
	cd /td/build/td/generate && $(CMAKE_COMMAND) -P CMakeFiles/generate_common.dir/cmake_clean.cmake
.PHONY : td/generate/CMakeFiles/generate_common.dir/clean

td/generate/CMakeFiles/generate_common.dir/depend:
	cd /td/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /td /td/td/generate /td/build /td/build/td/generate /td/build/td/generate/CMakeFiles/generate_common.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : td/generate/CMakeFiles/generate_common.dir/depend
