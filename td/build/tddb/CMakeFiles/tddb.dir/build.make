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
include tddb/CMakeFiles/tddb.dir/depend.make

# Include the progress variables for this target.
include tddb/CMakeFiles/tddb.dir/progress.make

# Include the compile flags for this target's objects.
include tddb/CMakeFiles/tddb.dir/flags.make

tddb/CMakeFiles/tddb.dir/td/db/binlog/Binlog.cpp.o: tddb/CMakeFiles/tddb.dir/flags.make
tddb/CMakeFiles/tddb.dir/td/db/binlog/Binlog.cpp.o: ../tddb/td/db/binlog/Binlog.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/aom/ruby/telegram/td/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object tddb/CMakeFiles/tddb.dir/td/db/binlog/Binlog.cpp.o"
	cd /Users/aom/ruby/telegram/td/build/tddb && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/tddb.dir/td/db/binlog/Binlog.cpp.o -c /Users/aom/ruby/telegram/td/tddb/td/db/binlog/Binlog.cpp

tddb/CMakeFiles/tddb.dir/td/db/binlog/Binlog.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tddb.dir/td/db/binlog/Binlog.cpp.i"
	cd /Users/aom/ruby/telegram/td/build/tddb && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/aom/ruby/telegram/td/tddb/td/db/binlog/Binlog.cpp > CMakeFiles/tddb.dir/td/db/binlog/Binlog.cpp.i

tddb/CMakeFiles/tddb.dir/td/db/binlog/Binlog.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tddb.dir/td/db/binlog/Binlog.cpp.s"
	cd /Users/aom/ruby/telegram/td/build/tddb && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/aom/ruby/telegram/td/tddb/td/db/binlog/Binlog.cpp -o CMakeFiles/tddb.dir/td/db/binlog/Binlog.cpp.s

tddb/CMakeFiles/tddb.dir/td/db/binlog/Binlog.cpp.o.requires:

.PHONY : tddb/CMakeFiles/tddb.dir/td/db/binlog/Binlog.cpp.o.requires

tddb/CMakeFiles/tddb.dir/td/db/binlog/Binlog.cpp.o.provides: tddb/CMakeFiles/tddb.dir/td/db/binlog/Binlog.cpp.o.requires
	$(MAKE) -f tddb/CMakeFiles/tddb.dir/build.make tddb/CMakeFiles/tddb.dir/td/db/binlog/Binlog.cpp.o.provides.build
.PHONY : tddb/CMakeFiles/tddb.dir/td/db/binlog/Binlog.cpp.o.provides

tddb/CMakeFiles/tddb.dir/td/db/binlog/Binlog.cpp.o.provides.build: tddb/CMakeFiles/tddb.dir/td/db/binlog/Binlog.cpp.o


tddb/CMakeFiles/tddb.dir/td/db/binlog/BinlogEvent.cpp.o: tddb/CMakeFiles/tddb.dir/flags.make
tddb/CMakeFiles/tddb.dir/td/db/binlog/BinlogEvent.cpp.o: ../tddb/td/db/binlog/BinlogEvent.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/aom/ruby/telegram/td/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object tddb/CMakeFiles/tddb.dir/td/db/binlog/BinlogEvent.cpp.o"
	cd /Users/aom/ruby/telegram/td/build/tddb && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/tddb.dir/td/db/binlog/BinlogEvent.cpp.o -c /Users/aom/ruby/telegram/td/tddb/td/db/binlog/BinlogEvent.cpp

tddb/CMakeFiles/tddb.dir/td/db/binlog/BinlogEvent.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tddb.dir/td/db/binlog/BinlogEvent.cpp.i"
	cd /Users/aom/ruby/telegram/td/build/tddb && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/aom/ruby/telegram/td/tddb/td/db/binlog/BinlogEvent.cpp > CMakeFiles/tddb.dir/td/db/binlog/BinlogEvent.cpp.i

tddb/CMakeFiles/tddb.dir/td/db/binlog/BinlogEvent.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tddb.dir/td/db/binlog/BinlogEvent.cpp.s"
	cd /Users/aom/ruby/telegram/td/build/tddb && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/aom/ruby/telegram/td/tddb/td/db/binlog/BinlogEvent.cpp -o CMakeFiles/tddb.dir/td/db/binlog/BinlogEvent.cpp.s

tddb/CMakeFiles/tddb.dir/td/db/binlog/BinlogEvent.cpp.o.requires:

.PHONY : tddb/CMakeFiles/tddb.dir/td/db/binlog/BinlogEvent.cpp.o.requires

tddb/CMakeFiles/tddb.dir/td/db/binlog/BinlogEvent.cpp.o.provides: tddb/CMakeFiles/tddb.dir/td/db/binlog/BinlogEvent.cpp.o.requires
	$(MAKE) -f tddb/CMakeFiles/tddb.dir/build.make tddb/CMakeFiles/tddb.dir/td/db/binlog/BinlogEvent.cpp.o.provides.build
.PHONY : tddb/CMakeFiles/tddb.dir/td/db/binlog/BinlogEvent.cpp.o.provides

tddb/CMakeFiles/tddb.dir/td/db/binlog/BinlogEvent.cpp.o.provides.build: tddb/CMakeFiles/tddb.dir/td/db/binlog/BinlogEvent.cpp.o


tddb/CMakeFiles/tddb.dir/td/db/binlog/ConcurrentBinlog.cpp.o: tddb/CMakeFiles/tddb.dir/flags.make
tddb/CMakeFiles/tddb.dir/td/db/binlog/ConcurrentBinlog.cpp.o: ../tddb/td/db/binlog/ConcurrentBinlog.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/aom/ruby/telegram/td/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object tddb/CMakeFiles/tddb.dir/td/db/binlog/ConcurrentBinlog.cpp.o"
	cd /Users/aom/ruby/telegram/td/build/tddb && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/tddb.dir/td/db/binlog/ConcurrentBinlog.cpp.o -c /Users/aom/ruby/telegram/td/tddb/td/db/binlog/ConcurrentBinlog.cpp

tddb/CMakeFiles/tddb.dir/td/db/binlog/ConcurrentBinlog.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tddb.dir/td/db/binlog/ConcurrentBinlog.cpp.i"
	cd /Users/aom/ruby/telegram/td/build/tddb && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/aom/ruby/telegram/td/tddb/td/db/binlog/ConcurrentBinlog.cpp > CMakeFiles/tddb.dir/td/db/binlog/ConcurrentBinlog.cpp.i

tddb/CMakeFiles/tddb.dir/td/db/binlog/ConcurrentBinlog.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tddb.dir/td/db/binlog/ConcurrentBinlog.cpp.s"
	cd /Users/aom/ruby/telegram/td/build/tddb && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/aom/ruby/telegram/td/tddb/td/db/binlog/ConcurrentBinlog.cpp -o CMakeFiles/tddb.dir/td/db/binlog/ConcurrentBinlog.cpp.s

tddb/CMakeFiles/tddb.dir/td/db/binlog/ConcurrentBinlog.cpp.o.requires:

.PHONY : tddb/CMakeFiles/tddb.dir/td/db/binlog/ConcurrentBinlog.cpp.o.requires

tddb/CMakeFiles/tddb.dir/td/db/binlog/ConcurrentBinlog.cpp.o.provides: tddb/CMakeFiles/tddb.dir/td/db/binlog/ConcurrentBinlog.cpp.o.requires
	$(MAKE) -f tddb/CMakeFiles/tddb.dir/build.make tddb/CMakeFiles/tddb.dir/td/db/binlog/ConcurrentBinlog.cpp.o.provides.build
.PHONY : tddb/CMakeFiles/tddb.dir/td/db/binlog/ConcurrentBinlog.cpp.o.provides

tddb/CMakeFiles/tddb.dir/td/db/binlog/ConcurrentBinlog.cpp.o.provides.build: tddb/CMakeFiles/tddb.dir/td/db/binlog/ConcurrentBinlog.cpp.o


tddb/CMakeFiles/tddb.dir/td/db/binlog/detail/BinlogEventsBuffer.cpp.o: tddb/CMakeFiles/tddb.dir/flags.make
tddb/CMakeFiles/tddb.dir/td/db/binlog/detail/BinlogEventsBuffer.cpp.o: ../tddb/td/db/binlog/detail/BinlogEventsBuffer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/aom/ruby/telegram/td/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object tddb/CMakeFiles/tddb.dir/td/db/binlog/detail/BinlogEventsBuffer.cpp.o"
	cd /Users/aom/ruby/telegram/td/build/tddb && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/tddb.dir/td/db/binlog/detail/BinlogEventsBuffer.cpp.o -c /Users/aom/ruby/telegram/td/tddb/td/db/binlog/detail/BinlogEventsBuffer.cpp

tddb/CMakeFiles/tddb.dir/td/db/binlog/detail/BinlogEventsBuffer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tddb.dir/td/db/binlog/detail/BinlogEventsBuffer.cpp.i"
	cd /Users/aom/ruby/telegram/td/build/tddb && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/aom/ruby/telegram/td/tddb/td/db/binlog/detail/BinlogEventsBuffer.cpp > CMakeFiles/tddb.dir/td/db/binlog/detail/BinlogEventsBuffer.cpp.i

tddb/CMakeFiles/tddb.dir/td/db/binlog/detail/BinlogEventsBuffer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tddb.dir/td/db/binlog/detail/BinlogEventsBuffer.cpp.s"
	cd /Users/aom/ruby/telegram/td/build/tddb && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/aom/ruby/telegram/td/tddb/td/db/binlog/detail/BinlogEventsBuffer.cpp -o CMakeFiles/tddb.dir/td/db/binlog/detail/BinlogEventsBuffer.cpp.s

tddb/CMakeFiles/tddb.dir/td/db/binlog/detail/BinlogEventsBuffer.cpp.o.requires:

.PHONY : tddb/CMakeFiles/tddb.dir/td/db/binlog/detail/BinlogEventsBuffer.cpp.o.requires

tddb/CMakeFiles/tddb.dir/td/db/binlog/detail/BinlogEventsBuffer.cpp.o.provides: tddb/CMakeFiles/tddb.dir/td/db/binlog/detail/BinlogEventsBuffer.cpp.o.requires
	$(MAKE) -f tddb/CMakeFiles/tddb.dir/build.make tddb/CMakeFiles/tddb.dir/td/db/binlog/detail/BinlogEventsBuffer.cpp.o.provides.build
.PHONY : tddb/CMakeFiles/tddb.dir/td/db/binlog/detail/BinlogEventsBuffer.cpp.o.provides

tddb/CMakeFiles/tddb.dir/td/db/binlog/detail/BinlogEventsBuffer.cpp.o.provides.build: tddb/CMakeFiles/tddb.dir/td/db/binlog/detail/BinlogEventsBuffer.cpp.o


tddb/CMakeFiles/tddb.dir/td/db/binlog/detail/BinlogEventsProcessor.cpp.o: tddb/CMakeFiles/tddb.dir/flags.make
tddb/CMakeFiles/tddb.dir/td/db/binlog/detail/BinlogEventsProcessor.cpp.o: ../tddb/td/db/binlog/detail/BinlogEventsProcessor.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/aom/ruby/telegram/td/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object tddb/CMakeFiles/tddb.dir/td/db/binlog/detail/BinlogEventsProcessor.cpp.o"
	cd /Users/aom/ruby/telegram/td/build/tddb && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/tddb.dir/td/db/binlog/detail/BinlogEventsProcessor.cpp.o -c /Users/aom/ruby/telegram/td/tddb/td/db/binlog/detail/BinlogEventsProcessor.cpp

tddb/CMakeFiles/tddb.dir/td/db/binlog/detail/BinlogEventsProcessor.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tddb.dir/td/db/binlog/detail/BinlogEventsProcessor.cpp.i"
	cd /Users/aom/ruby/telegram/td/build/tddb && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/aom/ruby/telegram/td/tddb/td/db/binlog/detail/BinlogEventsProcessor.cpp > CMakeFiles/tddb.dir/td/db/binlog/detail/BinlogEventsProcessor.cpp.i

tddb/CMakeFiles/tddb.dir/td/db/binlog/detail/BinlogEventsProcessor.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tddb.dir/td/db/binlog/detail/BinlogEventsProcessor.cpp.s"
	cd /Users/aom/ruby/telegram/td/build/tddb && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/aom/ruby/telegram/td/tddb/td/db/binlog/detail/BinlogEventsProcessor.cpp -o CMakeFiles/tddb.dir/td/db/binlog/detail/BinlogEventsProcessor.cpp.s

tddb/CMakeFiles/tddb.dir/td/db/binlog/detail/BinlogEventsProcessor.cpp.o.requires:

.PHONY : tddb/CMakeFiles/tddb.dir/td/db/binlog/detail/BinlogEventsProcessor.cpp.o.requires

tddb/CMakeFiles/tddb.dir/td/db/binlog/detail/BinlogEventsProcessor.cpp.o.provides: tddb/CMakeFiles/tddb.dir/td/db/binlog/detail/BinlogEventsProcessor.cpp.o.requires
	$(MAKE) -f tddb/CMakeFiles/tddb.dir/build.make tddb/CMakeFiles/tddb.dir/td/db/binlog/detail/BinlogEventsProcessor.cpp.o.provides.build
.PHONY : tddb/CMakeFiles/tddb.dir/td/db/binlog/detail/BinlogEventsProcessor.cpp.o.provides

tddb/CMakeFiles/tddb.dir/td/db/binlog/detail/BinlogEventsProcessor.cpp.o.provides.build: tddb/CMakeFiles/tddb.dir/td/db/binlog/detail/BinlogEventsProcessor.cpp.o


tddb/CMakeFiles/tddb.dir/td/db/SqliteDb.cpp.o: tddb/CMakeFiles/tddb.dir/flags.make
tddb/CMakeFiles/tddb.dir/td/db/SqliteDb.cpp.o: ../tddb/td/db/SqliteDb.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/aom/ruby/telegram/td/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object tddb/CMakeFiles/tddb.dir/td/db/SqliteDb.cpp.o"
	cd /Users/aom/ruby/telegram/td/build/tddb && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/tddb.dir/td/db/SqliteDb.cpp.o -c /Users/aom/ruby/telegram/td/tddb/td/db/SqliteDb.cpp

tddb/CMakeFiles/tddb.dir/td/db/SqliteDb.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tddb.dir/td/db/SqliteDb.cpp.i"
	cd /Users/aom/ruby/telegram/td/build/tddb && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/aom/ruby/telegram/td/tddb/td/db/SqliteDb.cpp > CMakeFiles/tddb.dir/td/db/SqliteDb.cpp.i

tddb/CMakeFiles/tddb.dir/td/db/SqliteDb.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tddb.dir/td/db/SqliteDb.cpp.s"
	cd /Users/aom/ruby/telegram/td/build/tddb && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/aom/ruby/telegram/td/tddb/td/db/SqliteDb.cpp -o CMakeFiles/tddb.dir/td/db/SqliteDb.cpp.s

tddb/CMakeFiles/tddb.dir/td/db/SqliteDb.cpp.o.requires:

.PHONY : tddb/CMakeFiles/tddb.dir/td/db/SqliteDb.cpp.o.requires

tddb/CMakeFiles/tddb.dir/td/db/SqliteDb.cpp.o.provides: tddb/CMakeFiles/tddb.dir/td/db/SqliteDb.cpp.o.requires
	$(MAKE) -f tddb/CMakeFiles/tddb.dir/build.make tddb/CMakeFiles/tddb.dir/td/db/SqliteDb.cpp.o.provides.build
.PHONY : tddb/CMakeFiles/tddb.dir/td/db/SqliteDb.cpp.o.provides

tddb/CMakeFiles/tddb.dir/td/db/SqliteDb.cpp.o.provides.build: tddb/CMakeFiles/tddb.dir/td/db/SqliteDb.cpp.o


tddb/CMakeFiles/tddb.dir/td/db/SqliteStatement.cpp.o: tddb/CMakeFiles/tddb.dir/flags.make
tddb/CMakeFiles/tddb.dir/td/db/SqliteStatement.cpp.o: ../tddb/td/db/SqliteStatement.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/aom/ruby/telegram/td/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object tddb/CMakeFiles/tddb.dir/td/db/SqliteStatement.cpp.o"
	cd /Users/aom/ruby/telegram/td/build/tddb && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/tddb.dir/td/db/SqliteStatement.cpp.o -c /Users/aom/ruby/telegram/td/tddb/td/db/SqliteStatement.cpp

tddb/CMakeFiles/tddb.dir/td/db/SqliteStatement.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tddb.dir/td/db/SqliteStatement.cpp.i"
	cd /Users/aom/ruby/telegram/td/build/tddb && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/aom/ruby/telegram/td/tddb/td/db/SqliteStatement.cpp > CMakeFiles/tddb.dir/td/db/SqliteStatement.cpp.i

tddb/CMakeFiles/tddb.dir/td/db/SqliteStatement.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tddb.dir/td/db/SqliteStatement.cpp.s"
	cd /Users/aom/ruby/telegram/td/build/tddb && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/aom/ruby/telegram/td/tddb/td/db/SqliteStatement.cpp -o CMakeFiles/tddb.dir/td/db/SqliteStatement.cpp.s

tddb/CMakeFiles/tddb.dir/td/db/SqliteStatement.cpp.o.requires:

.PHONY : tddb/CMakeFiles/tddb.dir/td/db/SqliteStatement.cpp.o.requires

tddb/CMakeFiles/tddb.dir/td/db/SqliteStatement.cpp.o.provides: tddb/CMakeFiles/tddb.dir/td/db/SqliteStatement.cpp.o.requires
	$(MAKE) -f tddb/CMakeFiles/tddb.dir/build.make tddb/CMakeFiles/tddb.dir/td/db/SqliteStatement.cpp.o.provides.build
.PHONY : tddb/CMakeFiles/tddb.dir/td/db/SqliteStatement.cpp.o.provides

tddb/CMakeFiles/tddb.dir/td/db/SqliteStatement.cpp.o.provides.build: tddb/CMakeFiles/tddb.dir/td/db/SqliteStatement.cpp.o


tddb/CMakeFiles/tddb.dir/td/db/SqliteKeyValue.cpp.o: tddb/CMakeFiles/tddb.dir/flags.make
tddb/CMakeFiles/tddb.dir/td/db/SqliteKeyValue.cpp.o: ../tddb/td/db/SqliteKeyValue.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/aom/ruby/telegram/td/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object tddb/CMakeFiles/tddb.dir/td/db/SqliteKeyValue.cpp.o"
	cd /Users/aom/ruby/telegram/td/build/tddb && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/tddb.dir/td/db/SqliteKeyValue.cpp.o -c /Users/aom/ruby/telegram/td/tddb/td/db/SqliteKeyValue.cpp

tddb/CMakeFiles/tddb.dir/td/db/SqliteKeyValue.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tddb.dir/td/db/SqliteKeyValue.cpp.i"
	cd /Users/aom/ruby/telegram/td/build/tddb && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/aom/ruby/telegram/td/tddb/td/db/SqliteKeyValue.cpp > CMakeFiles/tddb.dir/td/db/SqliteKeyValue.cpp.i

tddb/CMakeFiles/tddb.dir/td/db/SqliteKeyValue.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tddb.dir/td/db/SqliteKeyValue.cpp.s"
	cd /Users/aom/ruby/telegram/td/build/tddb && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/aom/ruby/telegram/td/tddb/td/db/SqliteKeyValue.cpp -o CMakeFiles/tddb.dir/td/db/SqliteKeyValue.cpp.s

tddb/CMakeFiles/tddb.dir/td/db/SqliteKeyValue.cpp.o.requires:

.PHONY : tddb/CMakeFiles/tddb.dir/td/db/SqliteKeyValue.cpp.o.requires

tddb/CMakeFiles/tddb.dir/td/db/SqliteKeyValue.cpp.o.provides: tddb/CMakeFiles/tddb.dir/td/db/SqliteKeyValue.cpp.o.requires
	$(MAKE) -f tddb/CMakeFiles/tddb.dir/build.make tddb/CMakeFiles/tddb.dir/td/db/SqliteKeyValue.cpp.o.provides.build
.PHONY : tddb/CMakeFiles/tddb.dir/td/db/SqliteKeyValue.cpp.o.provides

tddb/CMakeFiles/tddb.dir/td/db/SqliteKeyValue.cpp.o.provides.build: tddb/CMakeFiles/tddb.dir/td/db/SqliteKeyValue.cpp.o


tddb/CMakeFiles/tddb.dir/td/db/SqliteKeyValueAsync.cpp.o: tddb/CMakeFiles/tddb.dir/flags.make
tddb/CMakeFiles/tddb.dir/td/db/SqliteKeyValueAsync.cpp.o: ../tddb/td/db/SqliteKeyValueAsync.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/aom/ruby/telegram/td/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object tddb/CMakeFiles/tddb.dir/td/db/SqliteKeyValueAsync.cpp.o"
	cd /Users/aom/ruby/telegram/td/build/tddb && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/tddb.dir/td/db/SqliteKeyValueAsync.cpp.o -c /Users/aom/ruby/telegram/td/tddb/td/db/SqliteKeyValueAsync.cpp

tddb/CMakeFiles/tddb.dir/td/db/SqliteKeyValueAsync.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tddb.dir/td/db/SqliteKeyValueAsync.cpp.i"
	cd /Users/aom/ruby/telegram/td/build/tddb && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/aom/ruby/telegram/td/tddb/td/db/SqliteKeyValueAsync.cpp > CMakeFiles/tddb.dir/td/db/SqliteKeyValueAsync.cpp.i

tddb/CMakeFiles/tddb.dir/td/db/SqliteKeyValueAsync.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tddb.dir/td/db/SqliteKeyValueAsync.cpp.s"
	cd /Users/aom/ruby/telegram/td/build/tddb && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/aom/ruby/telegram/td/tddb/td/db/SqliteKeyValueAsync.cpp -o CMakeFiles/tddb.dir/td/db/SqliteKeyValueAsync.cpp.s

tddb/CMakeFiles/tddb.dir/td/db/SqliteKeyValueAsync.cpp.o.requires:

.PHONY : tddb/CMakeFiles/tddb.dir/td/db/SqliteKeyValueAsync.cpp.o.requires

tddb/CMakeFiles/tddb.dir/td/db/SqliteKeyValueAsync.cpp.o.provides: tddb/CMakeFiles/tddb.dir/td/db/SqliteKeyValueAsync.cpp.o.requires
	$(MAKE) -f tddb/CMakeFiles/tddb.dir/build.make tddb/CMakeFiles/tddb.dir/td/db/SqliteKeyValueAsync.cpp.o.provides.build
.PHONY : tddb/CMakeFiles/tddb.dir/td/db/SqliteKeyValueAsync.cpp.o.provides

tddb/CMakeFiles/tddb.dir/td/db/SqliteKeyValueAsync.cpp.o.provides.build: tddb/CMakeFiles/tddb.dir/td/db/SqliteKeyValueAsync.cpp.o


tddb/CMakeFiles/tddb.dir/td/db/detail/RawSqliteDb.cpp.o: tddb/CMakeFiles/tddb.dir/flags.make
tddb/CMakeFiles/tddb.dir/td/db/detail/RawSqliteDb.cpp.o: ../tddb/td/db/detail/RawSqliteDb.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/aom/ruby/telegram/td/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object tddb/CMakeFiles/tddb.dir/td/db/detail/RawSqliteDb.cpp.o"
	cd /Users/aom/ruby/telegram/td/build/tddb && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/tddb.dir/td/db/detail/RawSqliteDb.cpp.o -c /Users/aom/ruby/telegram/td/tddb/td/db/detail/RawSqliteDb.cpp

tddb/CMakeFiles/tddb.dir/td/db/detail/RawSqliteDb.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tddb.dir/td/db/detail/RawSqliteDb.cpp.i"
	cd /Users/aom/ruby/telegram/td/build/tddb && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/aom/ruby/telegram/td/tddb/td/db/detail/RawSqliteDb.cpp > CMakeFiles/tddb.dir/td/db/detail/RawSqliteDb.cpp.i

tddb/CMakeFiles/tddb.dir/td/db/detail/RawSqliteDb.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tddb.dir/td/db/detail/RawSqliteDb.cpp.s"
	cd /Users/aom/ruby/telegram/td/build/tddb && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/aom/ruby/telegram/td/tddb/td/db/detail/RawSqliteDb.cpp -o CMakeFiles/tddb.dir/td/db/detail/RawSqliteDb.cpp.s

tddb/CMakeFiles/tddb.dir/td/db/detail/RawSqliteDb.cpp.o.requires:

.PHONY : tddb/CMakeFiles/tddb.dir/td/db/detail/RawSqliteDb.cpp.o.requires

tddb/CMakeFiles/tddb.dir/td/db/detail/RawSqliteDb.cpp.o.provides: tddb/CMakeFiles/tddb.dir/td/db/detail/RawSqliteDb.cpp.o.requires
	$(MAKE) -f tddb/CMakeFiles/tddb.dir/build.make tddb/CMakeFiles/tddb.dir/td/db/detail/RawSqliteDb.cpp.o.provides.build
.PHONY : tddb/CMakeFiles/tddb.dir/td/db/detail/RawSqliteDb.cpp.o.provides

tddb/CMakeFiles/tddb.dir/td/db/detail/RawSqliteDb.cpp.o.provides.build: tddb/CMakeFiles/tddb.dir/td/db/detail/RawSqliteDb.cpp.o


# Object files for target tddb
tddb_OBJECTS = \
"CMakeFiles/tddb.dir/td/db/binlog/Binlog.cpp.o" \
"CMakeFiles/tddb.dir/td/db/binlog/BinlogEvent.cpp.o" \
"CMakeFiles/tddb.dir/td/db/binlog/ConcurrentBinlog.cpp.o" \
"CMakeFiles/tddb.dir/td/db/binlog/detail/BinlogEventsBuffer.cpp.o" \
"CMakeFiles/tddb.dir/td/db/binlog/detail/BinlogEventsProcessor.cpp.o" \
"CMakeFiles/tddb.dir/td/db/SqliteDb.cpp.o" \
"CMakeFiles/tddb.dir/td/db/SqliteStatement.cpp.o" \
"CMakeFiles/tddb.dir/td/db/SqliteKeyValue.cpp.o" \
"CMakeFiles/tddb.dir/td/db/SqliteKeyValueAsync.cpp.o" \
"CMakeFiles/tddb.dir/td/db/detail/RawSqliteDb.cpp.o"

# External object files for target tddb
tddb_EXTERNAL_OBJECTS =

tddb/libtddb.a: tddb/CMakeFiles/tddb.dir/td/db/binlog/Binlog.cpp.o
tddb/libtddb.a: tddb/CMakeFiles/tddb.dir/td/db/binlog/BinlogEvent.cpp.o
tddb/libtddb.a: tddb/CMakeFiles/tddb.dir/td/db/binlog/ConcurrentBinlog.cpp.o
tddb/libtddb.a: tddb/CMakeFiles/tddb.dir/td/db/binlog/detail/BinlogEventsBuffer.cpp.o
tddb/libtddb.a: tddb/CMakeFiles/tddb.dir/td/db/binlog/detail/BinlogEventsProcessor.cpp.o
tddb/libtddb.a: tddb/CMakeFiles/tddb.dir/td/db/SqliteDb.cpp.o
tddb/libtddb.a: tddb/CMakeFiles/tddb.dir/td/db/SqliteStatement.cpp.o
tddb/libtddb.a: tddb/CMakeFiles/tddb.dir/td/db/SqliteKeyValue.cpp.o
tddb/libtddb.a: tddb/CMakeFiles/tddb.dir/td/db/SqliteKeyValueAsync.cpp.o
tddb/libtddb.a: tddb/CMakeFiles/tddb.dir/td/db/detail/RawSqliteDb.cpp.o
tddb/libtddb.a: tddb/CMakeFiles/tddb.dir/build.make
tddb/libtddb.a: tddb/CMakeFiles/tddb.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/aom/ruby/telegram/td/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Linking CXX static library libtddb.a"
	cd /Users/aom/ruby/telegram/td/build/tddb && $(CMAKE_COMMAND) -P CMakeFiles/tddb.dir/cmake_clean_target.cmake
	cd /Users/aom/ruby/telegram/td/build/tddb && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/tddb.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tddb/CMakeFiles/tddb.dir/build: tddb/libtddb.a

.PHONY : tddb/CMakeFiles/tddb.dir/build

tddb/CMakeFiles/tddb.dir/requires: tddb/CMakeFiles/tddb.dir/td/db/binlog/Binlog.cpp.o.requires
tddb/CMakeFiles/tddb.dir/requires: tddb/CMakeFiles/tddb.dir/td/db/binlog/BinlogEvent.cpp.o.requires
tddb/CMakeFiles/tddb.dir/requires: tddb/CMakeFiles/tddb.dir/td/db/binlog/ConcurrentBinlog.cpp.o.requires
tddb/CMakeFiles/tddb.dir/requires: tddb/CMakeFiles/tddb.dir/td/db/binlog/detail/BinlogEventsBuffer.cpp.o.requires
tddb/CMakeFiles/tddb.dir/requires: tddb/CMakeFiles/tddb.dir/td/db/binlog/detail/BinlogEventsProcessor.cpp.o.requires
tddb/CMakeFiles/tddb.dir/requires: tddb/CMakeFiles/tddb.dir/td/db/SqliteDb.cpp.o.requires
tddb/CMakeFiles/tddb.dir/requires: tddb/CMakeFiles/tddb.dir/td/db/SqliteStatement.cpp.o.requires
tddb/CMakeFiles/tddb.dir/requires: tddb/CMakeFiles/tddb.dir/td/db/SqliteKeyValue.cpp.o.requires
tddb/CMakeFiles/tddb.dir/requires: tddb/CMakeFiles/tddb.dir/td/db/SqliteKeyValueAsync.cpp.o.requires
tddb/CMakeFiles/tddb.dir/requires: tddb/CMakeFiles/tddb.dir/td/db/detail/RawSqliteDb.cpp.o.requires

.PHONY : tddb/CMakeFiles/tddb.dir/requires

tddb/CMakeFiles/tddb.dir/clean:
	cd /Users/aom/ruby/telegram/td/build/tddb && $(CMAKE_COMMAND) -P CMakeFiles/tddb.dir/cmake_clean.cmake
.PHONY : tddb/CMakeFiles/tddb.dir/clean

tddb/CMakeFiles/tddb.dir/depend:
	cd /Users/aom/ruby/telegram/td/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/aom/ruby/telegram/td /Users/aom/ruby/telegram/td/tddb /Users/aom/ruby/telegram/td/build /Users/aom/ruby/telegram/td/build/tddb /Users/aom/ruby/telegram/td/build/tddb/CMakeFiles/tddb.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tddb/CMakeFiles/tddb.dir/depend

