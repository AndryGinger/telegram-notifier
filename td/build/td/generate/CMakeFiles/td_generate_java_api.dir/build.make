# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.7

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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.7.1/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.7.1/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/aom/ruby/telegram/td

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/aom/ruby/telegram/td/build

# Include any dependencies generated for this target.
include td/generate/CMakeFiles/td_generate_java_api.dir/depend.make

# Include the progress variables for this target.
include td/generate/CMakeFiles/td_generate_java_api.dir/progress.make

# Include the compile flags for this target's objects.
include td/generate/CMakeFiles/td_generate_java_api.dir/flags.make

td/generate/CMakeFiles/td_generate_java_api.dir/generate_java.cpp.o: td/generate/CMakeFiles/td_generate_java_api.dir/flags.make
td/generate/CMakeFiles/td_generate_java_api.dir/generate_java.cpp.o: ../td/generate/generate_java.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/aom/ruby/telegram/td/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object td/generate/CMakeFiles/td_generate_java_api.dir/generate_java.cpp.o"
	cd /Users/aom/ruby/telegram/td/build/td/generate && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/td_generate_java_api.dir/generate_java.cpp.o -c /Users/aom/ruby/telegram/td/td/generate/generate_java.cpp

td/generate/CMakeFiles/td_generate_java_api.dir/generate_java.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/td_generate_java_api.dir/generate_java.cpp.i"
	cd /Users/aom/ruby/telegram/td/build/td/generate && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/aom/ruby/telegram/td/td/generate/generate_java.cpp > CMakeFiles/td_generate_java_api.dir/generate_java.cpp.i

td/generate/CMakeFiles/td_generate_java_api.dir/generate_java.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/td_generate_java_api.dir/generate_java.cpp.s"
	cd /Users/aom/ruby/telegram/td/build/td/generate && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/aom/ruby/telegram/td/td/generate/generate_java.cpp -o CMakeFiles/td_generate_java_api.dir/generate_java.cpp.s

td/generate/CMakeFiles/td_generate_java_api.dir/generate_java.cpp.o.requires:

.PHONY : td/generate/CMakeFiles/td_generate_java_api.dir/generate_java.cpp.o.requires

td/generate/CMakeFiles/td_generate_java_api.dir/generate_java.cpp.o.provides: td/generate/CMakeFiles/td_generate_java_api.dir/generate_java.cpp.o.requires
	$(MAKE) -f td/generate/CMakeFiles/td_generate_java_api.dir/build.make td/generate/CMakeFiles/td_generate_java_api.dir/generate_java.cpp.o.provides.build
.PHONY : td/generate/CMakeFiles/td_generate_java_api.dir/generate_java.cpp.o.provides

td/generate/CMakeFiles/td_generate_java_api.dir/generate_java.cpp.o.provides.build: td/generate/CMakeFiles/td_generate_java_api.dir/generate_java.cpp.o


td/generate/CMakeFiles/td_generate_java_api.dir/tl_writer_java.cpp.o: td/generate/CMakeFiles/td_generate_java_api.dir/flags.make
td/generate/CMakeFiles/td_generate_java_api.dir/tl_writer_java.cpp.o: ../td/generate/tl_writer_java.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/aom/ruby/telegram/td/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object td/generate/CMakeFiles/td_generate_java_api.dir/tl_writer_java.cpp.o"
	cd /Users/aom/ruby/telegram/td/build/td/generate && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/td_generate_java_api.dir/tl_writer_java.cpp.o -c /Users/aom/ruby/telegram/td/td/generate/tl_writer_java.cpp

td/generate/CMakeFiles/td_generate_java_api.dir/tl_writer_java.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/td_generate_java_api.dir/tl_writer_java.cpp.i"
	cd /Users/aom/ruby/telegram/td/build/td/generate && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/aom/ruby/telegram/td/td/generate/tl_writer_java.cpp > CMakeFiles/td_generate_java_api.dir/tl_writer_java.cpp.i

td/generate/CMakeFiles/td_generate_java_api.dir/tl_writer_java.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/td_generate_java_api.dir/tl_writer_java.cpp.s"
	cd /Users/aom/ruby/telegram/td/build/td/generate && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/aom/ruby/telegram/td/td/generate/tl_writer_java.cpp -o CMakeFiles/td_generate_java_api.dir/tl_writer_java.cpp.s

td/generate/CMakeFiles/td_generate_java_api.dir/tl_writer_java.cpp.o.requires:

.PHONY : td/generate/CMakeFiles/td_generate_java_api.dir/tl_writer_java.cpp.o.requires

td/generate/CMakeFiles/td_generate_java_api.dir/tl_writer_java.cpp.o.provides: td/generate/CMakeFiles/td_generate_java_api.dir/tl_writer_java.cpp.o.requires
	$(MAKE) -f td/generate/CMakeFiles/td_generate_java_api.dir/build.make td/generate/CMakeFiles/td_generate_java_api.dir/tl_writer_java.cpp.o.provides.build
.PHONY : td/generate/CMakeFiles/td_generate_java_api.dir/tl_writer_java.cpp.o.provides

td/generate/CMakeFiles/td_generate_java_api.dir/tl_writer_java.cpp.o.provides.build: td/generate/CMakeFiles/td_generate_java_api.dir/tl_writer_java.cpp.o


# Object files for target td_generate_java_api
td_generate_java_api_OBJECTS = \
"CMakeFiles/td_generate_java_api.dir/generate_java.cpp.o" \
"CMakeFiles/td_generate_java_api.dir/tl_writer_java.cpp.o"

# External object files for target td_generate_java_api
td_generate_java_api_EXTERNAL_OBJECTS =

td/generate/td_generate_java_api: td/generate/CMakeFiles/td_generate_java_api.dir/generate_java.cpp.o
td/generate/td_generate_java_api: td/generate/CMakeFiles/td_generate_java_api.dir/tl_writer_java.cpp.o
td/generate/td_generate_java_api: td/generate/CMakeFiles/td_generate_java_api.dir/build.make
td/generate/td_generate_java_api: tdtl/libtdtl.a
td/generate/td_generate_java_api: td/generate/CMakeFiles/td_generate_java_api.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/aom/ruby/telegram/td/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable td_generate_java_api"
	cd /Users/aom/ruby/telegram/td/build/td/generate && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/td_generate_java_api.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
td/generate/CMakeFiles/td_generate_java_api.dir/build: td/generate/td_generate_java_api

.PHONY : td/generate/CMakeFiles/td_generate_java_api.dir/build

td/generate/CMakeFiles/td_generate_java_api.dir/requires: td/generate/CMakeFiles/td_generate_java_api.dir/generate_java.cpp.o.requires
td/generate/CMakeFiles/td_generate_java_api.dir/requires: td/generate/CMakeFiles/td_generate_java_api.dir/tl_writer_java.cpp.o.requires

.PHONY : td/generate/CMakeFiles/td_generate_java_api.dir/requires

td/generate/CMakeFiles/td_generate_java_api.dir/clean:
	cd /Users/aom/ruby/telegram/td/build/td/generate && $(CMAKE_COMMAND) -P CMakeFiles/td_generate_java_api.dir/cmake_clean.cmake
.PHONY : td/generate/CMakeFiles/td_generate_java_api.dir/clean

td/generate/CMakeFiles/td_generate_java_api.dir/depend:
	cd /Users/aom/ruby/telegram/td/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/aom/ruby/telegram/td /Users/aom/ruby/telegram/td/td/generate /Users/aom/ruby/telegram/td/build /Users/aom/ruby/telegram/td/build/td/generate /Users/aom/ruby/telegram/td/build/td/generate/CMakeFiles/td_generate_java_api.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : td/generate/CMakeFiles/td_generate_java_api.dir/depend

