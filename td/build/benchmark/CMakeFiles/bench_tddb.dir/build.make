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
include benchmark/CMakeFiles/bench_tddb.dir/depend.make

# Include the progress variables for this target.
include benchmark/CMakeFiles/bench_tddb.dir/progress.make

# Include the compile flags for this target's objects.
include benchmark/CMakeFiles/bench_tddb.dir/flags.make

benchmark/CMakeFiles/bench_tddb.dir/bench_tddb.cpp.o: benchmark/CMakeFiles/bench_tddb.dir/flags.make
benchmark/CMakeFiles/bench_tddb.dir/bench_tddb.cpp.o: ../benchmark/bench_tddb.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/aom/ruby/telegram/td/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object benchmark/CMakeFiles/bench_tddb.dir/bench_tddb.cpp.o"
	cd /Users/aom/ruby/telegram/td/build/benchmark && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/bench_tddb.dir/bench_tddb.cpp.o -c /Users/aom/ruby/telegram/td/benchmark/bench_tddb.cpp

benchmark/CMakeFiles/bench_tddb.dir/bench_tddb.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/bench_tddb.dir/bench_tddb.cpp.i"
	cd /Users/aom/ruby/telegram/td/build/benchmark && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/aom/ruby/telegram/td/benchmark/bench_tddb.cpp > CMakeFiles/bench_tddb.dir/bench_tddb.cpp.i

benchmark/CMakeFiles/bench_tddb.dir/bench_tddb.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/bench_tddb.dir/bench_tddb.cpp.s"
	cd /Users/aom/ruby/telegram/td/build/benchmark && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/aom/ruby/telegram/td/benchmark/bench_tddb.cpp -o CMakeFiles/bench_tddb.dir/bench_tddb.cpp.s

benchmark/CMakeFiles/bench_tddb.dir/bench_tddb.cpp.o.requires:

.PHONY : benchmark/CMakeFiles/bench_tddb.dir/bench_tddb.cpp.o.requires

benchmark/CMakeFiles/bench_tddb.dir/bench_tddb.cpp.o.provides: benchmark/CMakeFiles/bench_tddb.dir/bench_tddb.cpp.o.requires
	$(MAKE) -f benchmark/CMakeFiles/bench_tddb.dir/build.make benchmark/CMakeFiles/bench_tddb.dir/bench_tddb.cpp.o.provides.build
.PHONY : benchmark/CMakeFiles/bench_tddb.dir/bench_tddb.cpp.o.provides

benchmark/CMakeFiles/bench_tddb.dir/bench_tddb.cpp.o.provides.build: benchmark/CMakeFiles/bench_tddb.dir/bench_tddb.cpp.o


# Object files for target bench_tddb
bench_tddb_OBJECTS = \
"CMakeFiles/bench_tddb.dir/bench_tddb.cpp.o"

# External object files for target bench_tddb
bench_tddb_EXTERNAL_OBJECTS =

benchmark/bench_tddb: benchmark/CMakeFiles/bench_tddb.dir/bench_tddb.cpp.o
benchmark/bench_tddb: benchmark/CMakeFiles/bench_tddb.dir/build.make
benchmark/bench_tddb: libtdcore.a
benchmark/bench_tddb: tddb/libtddb.a
benchmark/bench_tddb: tdutils/libtdutils.a
benchmark/bench_tddb: sqlite/libtdsqlite.a
benchmark/bench_tddb: tdnet/libtdnet.a
benchmark/bench_tddb: tdactor/libtdactor.a
benchmark/bench_tddb: tdutils/libtdutils.a
benchmark/bench_tddb: /usr/local/opt/openssl/lib/libssl.dylib
benchmark/bench_tddb: /usr/local/opt/openssl/lib/libcrypto.dylib
benchmark/bench_tddb: /usr/lib/libz.dylib
benchmark/bench_tddb: benchmark/CMakeFiles/bench_tddb.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/aom/ruby/telegram/td/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable bench_tddb"
	cd /Users/aom/ruby/telegram/td/build/benchmark && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/bench_tddb.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
benchmark/CMakeFiles/bench_tddb.dir/build: benchmark/bench_tddb

.PHONY : benchmark/CMakeFiles/bench_tddb.dir/build

benchmark/CMakeFiles/bench_tddb.dir/requires: benchmark/CMakeFiles/bench_tddb.dir/bench_tddb.cpp.o.requires

.PHONY : benchmark/CMakeFiles/bench_tddb.dir/requires

benchmark/CMakeFiles/bench_tddb.dir/clean:
	cd /Users/aom/ruby/telegram/td/build/benchmark && $(CMAKE_COMMAND) -P CMakeFiles/bench_tddb.dir/cmake_clean.cmake
.PHONY : benchmark/CMakeFiles/bench_tddb.dir/clean

benchmark/CMakeFiles/bench_tddb.dir/depend:
	cd /Users/aom/ruby/telegram/td/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/aom/ruby/telegram/td /Users/aom/ruby/telegram/td/benchmark /Users/aom/ruby/telegram/td/build /Users/aom/ruby/telegram/td/build/benchmark /Users/aom/ruby/telegram/td/build/benchmark/CMakeFiles/bench_tddb.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : benchmark/CMakeFiles/bench_tddb.dir/depend

