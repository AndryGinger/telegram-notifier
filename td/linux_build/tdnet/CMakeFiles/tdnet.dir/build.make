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
include tdnet/CMakeFiles/tdnet.dir/depend.make

# Include the progress variables for this target.
include tdnet/CMakeFiles/tdnet.dir/progress.make

# Include the compile flags for this target's objects.
include tdnet/CMakeFiles/tdnet.dir/flags.make

tdnet/CMakeFiles/tdnet.dir/td/net/GetHostByNameActor.cpp.o: tdnet/CMakeFiles/tdnet.dir/flags.make
tdnet/CMakeFiles/tdnet.dir/td/net/GetHostByNameActor.cpp.o: ../tdnet/td/net/GetHostByNameActor.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/td/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object tdnet/CMakeFiles/tdnet.dir/td/net/GetHostByNameActor.cpp.o"
	cd /td/build/tdnet && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/tdnet.dir/td/net/GetHostByNameActor.cpp.o -c /td/tdnet/td/net/GetHostByNameActor.cpp

tdnet/CMakeFiles/tdnet.dir/td/net/GetHostByNameActor.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tdnet.dir/td/net/GetHostByNameActor.cpp.i"
	cd /td/build/tdnet && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /td/tdnet/td/net/GetHostByNameActor.cpp > CMakeFiles/tdnet.dir/td/net/GetHostByNameActor.cpp.i

tdnet/CMakeFiles/tdnet.dir/td/net/GetHostByNameActor.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tdnet.dir/td/net/GetHostByNameActor.cpp.s"
	cd /td/build/tdnet && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /td/tdnet/td/net/GetHostByNameActor.cpp -o CMakeFiles/tdnet.dir/td/net/GetHostByNameActor.cpp.s

tdnet/CMakeFiles/tdnet.dir/td/net/GetHostByNameActor.cpp.o.requires:

.PHONY : tdnet/CMakeFiles/tdnet.dir/td/net/GetHostByNameActor.cpp.o.requires

tdnet/CMakeFiles/tdnet.dir/td/net/GetHostByNameActor.cpp.o.provides: tdnet/CMakeFiles/tdnet.dir/td/net/GetHostByNameActor.cpp.o.requires
	$(MAKE) -f tdnet/CMakeFiles/tdnet.dir/build.make tdnet/CMakeFiles/tdnet.dir/td/net/GetHostByNameActor.cpp.o.provides.build
.PHONY : tdnet/CMakeFiles/tdnet.dir/td/net/GetHostByNameActor.cpp.o.provides

tdnet/CMakeFiles/tdnet.dir/td/net/GetHostByNameActor.cpp.o.provides.build: tdnet/CMakeFiles/tdnet.dir/td/net/GetHostByNameActor.cpp.o


tdnet/CMakeFiles/tdnet.dir/td/net/HttpChunkedByteFlow.cpp.o: tdnet/CMakeFiles/tdnet.dir/flags.make
tdnet/CMakeFiles/tdnet.dir/td/net/HttpChunkedByteFlow.cpp.o: ../tdnet/td/net/HttpChunkedByteFlow.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/td/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object tdnet/CMakeFiles/tdnet.dir/td/net/HttpChunkedByteFlow.cpp.o"
	cd /td/build/tdnet && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/tdnet.dir/td/net/HttpChunkedByteFlow.cpp.o -c /td/tdnet/td/net/HttpChunkedByteFlow.cpp

tdnet/CMakeFiles/tdnet.dir/td/net/HttpChunkedByteFlow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tdnet.dir/td/net/HttpChunkedByteFlow.cpp.i"
	cd /td/build/tdnet && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /td/tdnet/td/net/HttpChunkedByteFlow.cpp > CMakeFiles/tdnet.dir/td/net/HttpChunkedByteFlow.cpp.i

tdnet/CMakeFiles/tdnet.dir/td/net/HttpChunkedByteFlow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tdnet.dir/td/net/HttpChunkedByteFlow.cpp.s"
	cd /td/build/tdnet && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /td/tdnet/td/net/HttpChunkedByteFlow.cpp -o CMakeFiles/tdnet.dir/td/net/HttpChunkedByteFlow.cpp.s

tdnet/CMakeFiles/tdnet.dir/td/net/HttpChunkedByteFlow.cpp.o.requires:

.PHONY : tdnet/CMakeFiles/tdnet.dir/td/net/HttpChunkedByteFlow.cpp.o.requires

tdnet/CMakeFiles/tdnet.dir/td/net/HttpChunkedByteFlow.cpp.o.provides: tdnet/CMakeFiles/tdnet.dir/td/net/HttpChunkedByteFlow.cpp.o.requires
	$(MAKE) -f tdnet/CMakeFiles/tdnet.dir/build.make tdnet/CMakeFiles/tdnet.dir/td/net/HttpChunkedByteFlow.cpp.o.provides.build
.PHONY : tdnet/CMakeFiles/tdnet.dir/td/net/HttpChunkedByteFlow.cpp.o.provides

tdnet/CMakeFiles/tdnet.dir/td/net/HttpChunkedByteFlow.cpp.o.provides.build: tdnet/CMakeFiles/tdnet.dir/td/net/HttpChunkedByteFlow.cpp.o


tdnet/CMakeFiles/tdnet.dir/td/net/HttpConnectionBase.cpp.o: tdnet/CMakeFiles/tdnet.dir/flags.make
tdnet/CMakeFiles/tdnet.dir/td/net/HttpConnectionBase.cpp.o: ../tdnet/td/net/HttpConnectionBase.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/td/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object tdnet/CMakeFiles/tdnet.dir/td/net/HttpConnectionBase.cpp.o"
	cd /td/build/tdnet && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/tdnet.dir/td/net/HttpConnectionBase.cpp.o -c /td/tdnet/td/net/HttpConnectionBase.cpp

tdnet/CMakeFiles/tdnet.dir/td/net/HttpConnectionBase.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tdnet.dir/td/net/HttpConnectionBase.cpp.i"
	cd /td/build/tdnet && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /td/tdnet/td/net/HttpConnectionBase.cpp > CMakeFiles/tdnet.dir/td/net/HttpConnectionBase.cpp.i

tdnet/CMakeFiles/tdnet.dir/td/net/HttpConnectionBase.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tdnet.dir/td/net/HttpConnectionBase.cpp.s"
	cd /td/build/tdnet && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /td/tdnet/td/net/HttpConnectionBase.cpp -o CMakeFiles/tdnet.dir/td/net/HttpConnectionBase.cpp.s

tdnet/CMakeFiles/tdnet.dir/td/net/HttpConnectionBase.cpp.o.requires:

.PHONY : tdnet/CMakeFiles/tdnet.dir/td/net/HttpConnectionBase.cpp.o.requires

tdnet/CMakeFiles/tdnet.dir/td/net/HttpConnectionBase.cpp.o.provides: tdnet/CMakeFiles/tdnet.dir/td/net/HttpConnectionBase.cpp.o.requires
	$(MAKE) -f tdnet/CMakeFiles/tdnet.dir/build.make tdnet/CMakeFiles/tdnet.dir/td/net/HttpConnectionBase.cpp.o.provides.build
.PHONY : tdnet/CMakeFiles/tdnet.dir/td/net/HttpConnectionBase.cpp.o.provides

tdnet/CMakeFiles/tdnet.dir/td/net/HttpConnectionBase.cpp.o.provides.build: tdnet/CMakeFiles/tdnet.dir/td/net/HttpConnectionBase.cpp.o


tdnet/CMakeFiles/tdnet.dir/td/net/HttpContentLengthByteFlow.cpp.o: tdnet/CMakeFiles/tdnet.dir/flags.make
tdnet/CMakeFiles/tdnet.dir/td/net/HttpContentLengthByteFlow.cpp.o: ../tdnet/td/net/HttpContentLengthByteFlow.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/td/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object tdnet/CMakeFiles/tdnet.dir/td/net/HttpContentLengthByteFlow.cpp.o"
	cd /td/build/tdnet && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/tdnet.dir/td/net/HttpContentLengthByteFlow.cpp.o -c /td/tdnet/td/net/HttpContentLengthByteFlow.cpp

tdnet/CMakeFiles/tdnet.dir/td/net/HttpContentLengthByteFlow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tdnet.dir/td/net/HttpContentLengthByteFlow.cpp.i"
	cd /td/build/tdnet && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /td/tdnet/td/net/HttpContentLengthByteFlow.cpp > CMakeFiles/tdnet.dir/td/net/HttpContentLengthByteFlow.cpp.i

tdnet/CMakeFiles/tdnet.dir/td/net/HttpContentLengthByteFlow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tdnet.dir/td/net/HttpContentLengthByteFlow.cpp.s"
	cd /td/build/tdnet && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /td/tdnet/td/net/HttpContentLengthByteFlow.cpp -o CMakeFiles/tdnet.dir/td/net/HttpContentLengthByteFlow.cpp.s

tdnet/CMakeFiles/tdnet.dir/td/net/HttpContentLengthByteFlow.cpp.o.requires:

.PHONY : tdnet/CMakeFiles/tdnet.dir/td/net/HttpContentLengthByteFlow.cpp.o.requires

tdnet/CMakeFiles/tdnet.dir/td/net/HttpContentLengthByteFlow.cpp.o.provides: tdnet/CMakeFiles/tdnet.dir/td/net/HttpContentLengthByteFlow.cpp.o.requires
	$(MAKE) -f tdnet/CMakeFiles/tdnet.dir/build.make tdnet/CMakeFiles/tdnet.dir/td/net/HttpContentLengthByteFlow.cpp.o.provides.build
.PHONY : tdnet/CMakeFiles/tdnet.dir/td/net/HttpContentLengthByteFlow.cpp.o.provides

tdnet/CMakeFiles/tdnet.dir/td/net/HttpContentLengthByteFlow.cpp.o.provides.build: tdnet/CMakeFiles/tdnet.dir/td/net/HttpContentLengthByteFlow.cpp.o


tdnet/CMakeFiles/tdnet.dir/td/net/HttpFile.cpp.o: tdnet/CMakeFiles/tdnet.dir/flags.make
tdnet/CMakeFiles/tdnet.dir/td/net/HttpFile.cpp.o: ../tdnet/td/net/HttpFile.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/td/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object tdnet/CMakeFiles/tdnet.dir/td/net/HttpFile.cpp.o"
	cd /td/build/tdnet && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/tdnet.dir/td/net/HttpFile.cpp.o -c /td/tdnet/td/net/HttpFile.cpp

tdnet/CMakeFiles/tdnet.dir/td/net/HttpFile.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tdnet.dir/td/net/HttpFile.cpp.i"
	cd /td/build/tdnet && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /td/tdnet/td/net/HttpFile.cpp > CMakeFiles/tdnet.dir/td/net/HttpFile.cpp.i

tdnet/CMakeFiles/tdnet.dir/td/net/HttpFile.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tdnet.dir/td/net/HttpFile.cpp.s"
	cd /td/build/tdnet && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /td/tdnet/td/net/HttpFile.cpp -o CMakeFiles/tdnet.dir/td/net/HttpFile.cpp.s

tdnet/CMakeFiles/tdnet.dir/td/net/HttpFile.cpp.o.requires:

.PHONY : tdnet/CMakeFiles/tdnet.dir/td/net/HttpFile.cpp.o.requires

tdnet/CMakeFiles/tdnet.dir/td/net/HttpFile.cpp.o.provides: tdnet/CMakeFiles/tdnet.dir/td/net/HttpFile.cpp.o.requires
	$(MAKE) -f tdnet/CMakeFiles/tdnet.dir/build.make tdnet/CMakeFiles/tdnet.dir/td/net/HttpFile.cpp.o.provides.build
.PHONY : tdnet/CMakeFiles/tdnet.dir/td/net/HttpFile.cpp.o.provides

tdnet/CMakeFiles/tdnet.dir/td/net/HttpFile.cpp.o.provides.build: tdnet/CMakeFiles/tdnet.dir/td/net/HttpFile.cpp.o


tdnet/CMakeFiles/tdnet.dir/td/net/HttpInboundConnection.cpp.o: tdnet/CMakeFiles/tdnet.dir/flags.make
tdnet/CMakeFiles/tdnet.dir/td/net/HttpInboundConnection.cpp.o: ../tdnet/td/net/HttpInboundConnection.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/td/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object tdnet/CMakeFiles/tdnet.dir/td/net/HttpInboundConnection.cpp.o"
	cd /td/build/tdnet && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/tdnet.dir/td/net/HttpInboundConnection.cpp.o -c /td/tdnet/td/net/HttpInboundConnection.cpp

tdnet/CMakeFiles/tdnet.dir/td/net/HttpInboundConnection.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tdnet.dir/td/net/HttpInboundConnection.cpp.i"
	cd /td/build/tdnet && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /td/tdnet/td/net/HttpInboundConnection.cpp > CMakeFiles/tdnet.dir/td/net/HttpInboundConnection.cpp.i

tdnet/CMakeFiles/tdnet.dir/td/net/HttpInboundConnection.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tdnet.dir/td/net/HttpInboundConnection.cpp.s"
	cd /td/build/tdnet && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /td/tdnet/td/net/HttpInboundConnection.cpp -o CMakeFiles/tdnet.dir/td/net/HttpInboundConnection.cpp.s

tdnet/CMakeFiles/tdnet.dir/td/net/HttpInboundConnection.cpp.o.requires:

.PHONY : tdnet/CMakeFiles/tdnet.dir/td/net/HttpInboundConnection.cpp.o.requires

tdnet/CMakeFiles/tdnet.dir/td/net/HttpInboundConnection.cpp.o.provides: tdnet/CMakeFiles/tdnet.dir/td/net/HttpInboundConnection.cpp.o.requires
	$(MAKE) -f tdnet/CMakeFiles/tdnet.dir/build.make tdnet/CMakeFiles/tdnet.dir/td/net/HttpInboundConnection.cpp.o.provides.build
.PHONY : tdnet/CMakeFiles/tdnet.dir/td/net/HttpInboundConnection.cpp.o.provides

tdnet/CMakeFiles/tdnet.dir/td/net/HttpInboundConnection.cpp.o.provides.build: tdnet/CMakeFiles/tdnet.dir/td/net/HttpInboundConnection.cpp.o


tdnet/CMakeFiles/tdnet.dir/td/net/HttpOutboundConnection.cpp.o: tdnet/CMakeFiles/tdnet.dir/flags.make
tdnet/CMakeFiles/tdnet.dir/td/net/HttpOutboundConnection.cpp.o: ../tdnet/td/net/HttpOutboundConnection.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/td/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object tdnet/CMakeFiles/tdnet.dir/td/net/HttpOutboundConnection.cpp.o"
	cd /td/build/tdnet && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/tdnet.dir/td/net/HttpOutboundConnection.cpp.o -c /td/tdnet/td/net/HttpOutboundConnection.cpp

tdnet/CMakeFiles/tdnet.dir/td/net/HttpOutboundConnection.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tdnet.dir/td/net/HttpOutboundConnection.cpp.i"
	cd /td/build/tdnet && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /td/tdnet/td/net/HttpOutboundConnection.cpp > CMakeFiles/tdnet.dir/td/net/HttpOutboundConnection.cpp.i

tdnet/CMakeFiles/tdnet.dir/td/net/HttpOutboundConnection.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tdnet.dir/td/net/HttpOutboundConnection.cpp.s"
	cd /td/build/tdnet && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /td/tdnet/td/net/HttpOutboundConnection.cpp -o CMakeFiles/tdnet.dir/td/net/HttpOutboundConnection.cpp.s

tdnet/CMakeFiles/tdnet.dir/td/net/HttpOutboundConnection.cpp.o.requires:

.PHONY : tdnet/CMakeFiles/tdnet.dir/td/net/HttpOutboundConnection.cpp.o.requires

tdnet/CMakeFiles/tdnet.dir/td/net/HttpOutboundConnection.cpp.o.provides: tdnet/CMakeFiles/tdnet.dir/td/net/HttpOutboundConnection.cpp.o.requires
	$(MAKE) -f tdnet/CMakeFiles/tdnet.dir/build.make tdnet/CMakeFiles/tdnet.dir/td/net/HttpOutboundConnection.cpp.o.provides.build
.PHONY : tdnet/CMakeFiles/tdnet.dir/td/net/HttpOutboundConnection.cpp.o.provides

tdnet/CMakeFiles/tdnet.dir/td/net/HttpOutboundConnection.cpp.o.provides.build: tdnet/CMakeFiles/tdnet.dir/td/net/HttpOutboundConnection.cpp.o


tdnet/CMakeFiles/tdnet.dir/td/net/HttpProxy.cpp.o: tdnet/CMakeFiles/tdnet.dir/flags.make
tdnet/CMakeFiles/tdnet.dir/td/net/HttpProxy.cpp.o: ../tdnet/td/net/HttpProxy.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/td/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object tdnet/CMakeFiles/tdnet.dir/td/net/HttpProxy.cpp.o"
	cd /td/build/tdnet && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/tdnet.dir/td/net/HttpProxy.cpp.o -c /td/tdnet/td/net/HttpProxy.cpp

tdnet/CMakeFiles/tdnet.dir/td/net/HttpProxy.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tdnet.dir/td/net/HttpProxy.cpp.i"
	cd /td/build/tdnet && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /td/tdnet/td/net/HttpProxy.cpp > CMakeFiles/tdnet.dir/td/net/HttpProxy.cpp.i

tdnet/CMakeFiles/tdnet.dir/td/net/HttpProxy.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tdnet.dir/td/net/HttpProxy.cpp.s"
	cd /td/build/tdnet && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /td/tdnet/td/net/HttpProxy.cpp -o CMakeFiles/tdnet.dir/td/net/HttpProxy.cpp.s

tdnet/CMakeFiles/tdnet.dir/td/net/HttpProxy.cpp.o.requires:

.PHONY : tdnet/CMakeFiles/tdnet.dir/td/net/HttpProxy.cpp.o.requires

tdnet/CMakeFiles/tdnet.dir/td/net/HttpProxy.cpp.o.provides: tdnet/CMakeFiles/tdnet.dir/td/net/HttpProxy.cpp.o.requires
	$(MAKE) -f tdnet/CMakeFiles/tdnet.dir/build.make tdnet/CMakeFiles/tdnet.dir/td/net/HttpProxy.cpp.o.provides.build
.PHONY : tdnet/CMakeFiles/tdnet.dir/td/net/HttpProxy.cpp.o.provides

tdnet/CMakeFiles/tdnet.dir/td/net/HttpProxy.cpp.o.provides.build: tdnet/CMakeFiles/tdnet.dir/td/net/HttpProxy.cpp.o


tdnet/CMakeFiles/tdnet.dir/td/net/HttpQuery.cpp.o: tdnet/CMakeFiles/tdnet.dir/flags.make
tdnet/CMakeFiles/tdnet.dir/td/net/HttpQuery.cpp.o: ../tdnet/td/net/HttpQuery.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/td/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object tdnet/CMakeFiles/tdnet.dir/td/net/HttpQuery.cpp.o"
	cd /td/build/tdnet && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/tdnet.dir/td/net/HttpQuery.cpp.o -c /td/tdnet/td/net/HttpQuery.cpp

tdnet/CMakeFiles/tdnet.dir/td/net/HttpQuery.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tdnet.dir/td/net/HttpQuery.cpp.i"
	cd /td/build/tdnet && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /td/tdnet/td/net/HttpQuery.cpp > CMakeFiles/tdnet.dir/td/net/HttpQuery.cpp.i

tdnet/CMakeFiles/tdnet.dir/td/net/HttpQuery.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tdnet.dir/td/net/HttpQuery.cpp.s"
	cd /td/build/tdnet && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /td/tdnet/td/net/HttpQuery.cpp -o CMakeFiles/tdnet.dir/td/net/HttpQuery.cpp.s

tdnet/CMakeFiles/tdnet.dir/td/net/HttpQuery.cpp.o.requires:

.PHONY : tdnet/CMakeFiles/tdnet.dir/td/net/HttpQuery.cpp.o.requires

tdnet/CMakeFiles/tdnet.dir/td/net/HttpQuery.cpp.o.provides: tdnet/CMakeFiles/tdnet.dir/td/net/HttpQuery.cpp.o.requires
	$(MAKE) -f tdnet/CMakeFiles/tdnet.dir/build.make tdnet/CMakeFiles/tdnet.dir/td/net/HttpQuery.cpp.o.provides.build
.PHONY : tdnet/CMakeFiles/tdnet.dir/td/net/HttpQuery.cpp.o.provides

tdnet/CMakeFiles/tdnet.dir/td/net/HttpQuery.cpp.o.provides.build: tdnet/CMakeFiles/tdnet.dir/td/net/HttpQuery.cpp.o


tdnet/CMakeFiles/tdnet.dir/td/net/HttpReader.cpp.o: tdnet/CMakeFiles/tdnet.dir/flags.make
tdnet/CMakeFiles/tdnet.dir/td/net/HttpReader.cpp.o: ../tdnet/td/net/HttpReader.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/td/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object tdnet/CMakeFiles/tdnet.dir/td/net/HttpReader.cpp.o"
	cd /td/build/tdnet && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/tdnet.dir/td/net/HttpReader.cpp.o -c /td/tdnet/td/net/HttpReader.cpp

tdnet/CMakeFiles/tdnet.dir/td/net/HttpReader.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tdnet.dir/td/net/HttpReader.cpp.i"
	cd /td/build/tdnet && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /td/tdnet/td/net/HttpReader.cpp > CMakeFiles/tdnet.dir/td/net/HttpReader.cpp.i

tdnet/CMakeFiles/tdnet.dir/td/net/HttpReader.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tdnet.dir/td/net/HttpReader.cpp.s"
	cd /td/build/tdnet && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /td/tdnet/td/net/HttpReader.cpp -o CMakeFiles/tdnet.dir/td/net/HttpReader.cpp.s

tdnet/CMakeFiles/tdnet.dir/td/net/HttpReader.cpp.o.requires:

.PHONY : tdnet/CMakeFiles/tdnet.dir/td/net/HttpReader.cpp.o.requires

tdnet/CMakeFiles/tdnet.dir/td/net/HttpReader.cpp.o.provides: tdnet/CMakeFiles/tdnet.dir/td/net/HttpReader.cpp.o.requires
	$(MAKE) -f tdnet/CMakeFiles/tdnet.dir/build.make tdnet/CMakeFiles/tdnet.dir/td/net/HttpReader.cpp.o.provides.build
.PHONY : tdnet/CMakeFiles/tdnet.dir/td/net/HttpReader.cpp.o.provides

tdnet/CMakeFiles/tdnet.dir/td/net/HttpReader.cpp.o.provides.build: tdnet/CMakeFiles/tdnet.dir/td/net/HttpReader.cpp.o


tdnet/CMakeFiles/tdnet.dir/td/net/Socks5.cpp.o: tdnet/CMakeFiles/tdnet.dir/flags.make
tdnet/CMakeFiles/tdnet.dir/td/net/Socks5.cpp.o: ../tdnet/td/net/Socks5.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/td/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object tdnet/CMakeFiles/tdnet.dir/td/net/Socks5.cpp.o"
	cd /td/build/tdnet && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/tdnet.dir/td/net/Socks5.cpp.o -c /td/tdnet/td/net/Socks5.cpp

tdnet/CMakeFiles/tdnet.dir/td/net/Socks5.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tdnet.dir/td/net/Socks5.cpp.i"
	cd /td/build/tdnet && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /td/tdnet/td/net/Socks5.cpp > CMakeFiles/tdnet.dir/td/net/Socks5.cpp.i

tdnet/CMakeFiles/tdnet.dir/td/net/Socks5.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tdnet.dir/td/net/Socks5.cpp.s"
	cd /td/build/tdnet && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /td/tdnet/td/net/Socks5.cpp -o CMakeFiles/tdnet.dir/td/net/Socks5.cpp.s

tdnet/CMakeFiles/tdnet.dir/td/net/Socks5.cpp.o.requires:

.PHONY : tdnet/CMakeFiles/tdnet.dir/td/net/Socks5.cpp.o.requires

tdnet/CMakeFiles/tdnet.dir/td/net/Socks5.cpp.o.provides: tdnet/CMakeFiles/tdnet.dir/td/net/Socks5.cpp.o.requires
	$(MAKE) -f tdnet/CMakeFiles/tdnet.dir/build.make tdnet/CMakeFiles/tdnet.dir/td/net/Socks5.cpp.o.provides.build
.PHONY : tdnet/CMakeFiles/tdnet.dir/td/net/Socks5.cpp.o.provides

tdnet/CMakeFiles/tdnet.dir/td/net/Socks5.cpp.o.provides.build: tdnet/CMakeFiles/tdnet.dir/td/net/Socks5.cpp.o


tdnet/CMakeFiles/tdnet.dir/td/net/SslStream.cpp.o: tdnet/CMakeFiles/tdnet.dir/flags.make
tdnet/CMakeFiles/tdnet.dir/td/net/SslStream.cpp.o: ../tdnet/td/net/SslStream.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/td/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object tdnet/CMakeFiles/tdnet.dir/td/net/SslStream.cpp.o"
	cd /td/build/tdnet && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/tdnet.dir/td/net/SslStream.cpp.o -c /td/tdnet/td/net/SslStream.cpp

tdnet/CMakeFiles/tdnet.dir/td/net/SslStream.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tdnet.dir/td/net/SslStream.cpp.i"
	cd /td/build/tdnet && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /td/tdnet/td/net/SslStream.cpp > CMakeFiles/tdnet.dir/td/net/SslStream.cpp.i

tdnet/CMakeFiles/tdnet.dir/td/net/SslStream.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tdnet.dir/td/net/SslStream.cpp.s"
	cd /td/build/tdnet && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /td/tdnet/td/net/SslStream.cpp -o CMakeFiles/tdnet.dir/td/net/SslStream.cpp.s

tdnet/CMakeFiles/tdnet.dir/td/net/SslStream.cpp.o.requires:

.PHONY : tdnet/CMakeFiles/tdnet.dir/td/net/SslStream.cpp.o.requires

tdnet/CMakeFiles/tdnet.dir/td/net/SslStream.cpp.o.provides: tdnet/CMakeFiles/tdnet.dir/td/net/SslStream.cpp.o.requires
	$(MAKE) -f tdnet/CMakeFiles/tdnet.dir/build.make tdnet/CMakeFiles/tdnet.dir/td/net/SslStream.cpp.o.provides.build
.PHONY : tdnet/CMakeFiles/tdnet.dir/td/net/SslStream.cpp.o.provides

tdnet/CMakeFiles/tdnet.dir/td/net/SslStream.cpp.o.provides.build: tdnet/CMakeFiles/tdnet.dir/td/net/SslStream.cpp.o


tdnet/CMakeFiles/tdnet.dir/td/net/TcpListener.cpp.o: tdnet/CMakeFiles/tdnet.dir/flags.make
tdnet/CMakeFiles/tdnet.dir/td/net/TcpListener.cpp.o: ../tdnet/td/net/TcpListener.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/td/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object tdnet/CMakeFiles/tdnet.dir/td/net/TcpListener.cpp.o"
	cd /td/build/tdnet && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/tdnet.dir/td/net/TcpListener.cpp.o -c /td/tdnet/td/net/TcpListener.cpp

tdnet/CMakeFiles/tdnet.dir/td/net/TcpListener.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tdnet.dir/td/net/TcpListener.cpp.i"
	cd /td/build/tdnet && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /td/tdnet/td/net/TcpListener.cpp > CMakeFiles/tdnet.dir/td/net/TcpListener.cpp.i

tdnet/CMakeFiles/tdnet.dir/td/net/TcpListener.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tdnet.dir/td/net/TcpListener.cpp.s"
	cd /td/build/tdnet && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /td/tdnet/td/net/TcpListener.cpp -o CMakeFiles/tdnet.dir/td/net/TcpListener.cpp.s

tdnet/CMakeFiles/tdnet.dir/td/net/TcpListener.cpp.o.requires:

.PHONY : tdnet/CMakeFiles/tdnet.dir/td/net/TcpListener.cpp.o.requires

tdnet/CMakeFiles/tdnet.dir/td/net/TcpListener.cpp.o.provides: tdnet/CMakeFiles/tdnet.dir/td/net/TcpListener.cpp.o.requires
	$(MAKE) -f tdnet/CMakeFiles/tdnet.dir/build.make tdnet/CMakeFiles/tdnet.dir/td/net/TcpListener.cpp.o.provides.build
.PHONY : tdnet/CMakeFiles/tdnet.dir/td/net/TcpListener.cpp.o.provides

tdnet/CMakeFiles/tdnet.dir/td/net/TcpListener.cpp.o.provides.build: tdnet/CMakeFiles/tdnet.dir/td/net/TcpListener.cpp.o


tdnet/CMakeFiles/tdnet.dir/td/net/TransparentProxy.cpp.o: tdnet/CMakeFiles/tdnet.dir/flags.make
tdnet/CMakeFiles/tdnet.dir/td/net/TransparentProxy.cpp.o: ../tdnet/td/net/TransparentProxy.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/td/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building CXX object tdnet/CMakeFiles/tdnet.dir/td/net/TransparentProxy.cpp.o"
	cd /td/build/tdnet && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/tdnet.dir/td/net/TransparentProxy.cpp.o -c /td/tdnet/td/net/TransparentProxy.cpp

tdnet/CMakeFiles/tdnet.dir/td/net/TransparentProxy.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tdnet.dir/td/net/TransparentProxy.cpp.i"
	cd /td/build/tdnet && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /td/tdnet/td/net/TransparentProxy.cpp > CMakeFiles/tdnet.dir/td/net/TransparentProxy.cpp.i

tdnet/CMakeFiles/tdnet.dir/td/net/TransparentProxy.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tdnet.dir/td/net/TransparentProxy.cpp.s"
	cd /td/build/tdnet && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /td/tdnet/td/net/TransparentProxy.cpp -o CMakeFiles/tdnet.dir/td/net/TransparentProxy.cpp.s

tdnet/CMakeFiles/tdnet.dir/td/net/TransparentProxy.cpp.o.requires:

.PHONY : tdnet/CMakeFiles/tdnet.dir/td/net/TransparentProxy.cpp.o.requires

tdnet/CMakeFiles/tdnet.dir/td/net/TransparentProxy.cpp.o.provides: tdnet/CMakeFiles/tdnet.dir/td/net/TransparentProxy.cpp.o.requires
	$(MAKE) -f tdnet/CMakeFiles/tdnet.dir/build.make tdnet/CMakeFiles/tdnet.dir/td/net/TransparentProxy.cpp.o.provides.build
.PHONY : tdnet/CMakeFiles/tdnet.dir/td/net/TransparentProxy.cpp.o.provides

tdnet/CMakeFiles/tdnet.dir/td/net/TransparentProxy.cpp.o.provides.build: tdnet/CMakeFiles/tdnet.dir/td/net/TransparentProxy.cpp.o


tdnet/CMakeFiles/tdnet.dir/td/net/Wget.cpp.o: tdnet/CMakeFiles/tdnet.dir/flags.make
tdnet/CMakeFiles/tdnet.dir/td/net/Wget.cpp.o: ../tdnet/td/net/Wget.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/td/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Building CXX object tdnet/CMakeFiles/tdnet.dir/td/net/Wget.cpp.o"
	cd /td/build/tdnet && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/tdnet.dir/td/net/Wget.cpp.o -c /td/tdnet/td/net/Wget.cpp

tdnet/CMakeFiles/tdnet.dir/td/net/Wget.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tdnet.dir/td/net/Wget.cpp.i"
	cd /td/build/tdnet && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /td/tdnet/td/net/Wget.cpp > CMakeFiles/tdnet.dir/td/net/Wget.cpp.i

tdnet/CMakeFiles/tdnet.dir/td/net/Wget.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tdnet.dir/td/net/Wget.cpp.s"
	cd /td/build/tdnet && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /td/tdnet/td/net/Wget.cpp -o CMakeFiles/tdnet.dir/td/net/Wget.cpp.s

tdnet/CMakeFiles/tdnet.dir/td/net/Wget.cpp.o.requires:

.PHONY : tdnet/CMakeFiles/tdnet.dir/td/net/Wget.cpp.o.requires

tdnet/CMakeFiles/tdnet.dir/td/net/Wget.cpp.o.provides: tdnet/CMakeFiles/tdnet.dir/td/net/Wget.cpp.o.requires
	$(MAKE) -f tdnet/CMakeFiles/tdnet.dir/build.make tdnet/CMakeFiles/tdnet.dir/td/net/Wget.cpp.o.provides.build
.PHONY : tdnet/CMakeFiles/tdnet.dir/td/net/Wget.cpp.o.provides

tdnet/CMakeFiles/tdnet.dir/td/net/Wget.cpp.o.provides.build: tdnet/CMakeFiles/tdnet.dir/td/net/Wget.cpp.o


# Object files for target tdnet
tdnet_OBJECTS = \
"CMakeFiles/tdnet.dir/td/net/GetHostByNameActor.cpp.o" \
"CMakeFiles/tdnet.dir/td/net/HttpChunkedByteFlow.cpp.o" \
"CMakeFiles/tdnet.dir/td/net/HttpConnectionBase.cpp.o" \
"CMakeFiles/tdnet.dir/td/net/HttpContentLengthByteFlow.cpp.o" \
"CMakeFiles/tdnet.dir/td/net/HttpFile.cpp.o" \
"CMakeFiles/tdnet.dir/td/net/HttpInboundConnection.cpp.o" \
"CMakeFiles/tdnet.dir/td/net/HttpOutboundConnection.cpp.o" \
"CMakeFiles/tdnet.dir/td/net/HttpProxy.cpp.o" \
"CMakeFiles/tdnet.dir/td/net/HttpQuery.cpp.o" \
"CMakeFiles/tdnet.dir/td/net/HttpReader.cpp.o" \
"CMakeFiles/tdnet.dir/td/net/Socks5.cpp.o" \
"CMakeFiles/tdnet.dir/td/net/SslStream.cpp.o" \
"CMakeFiles/tdnet.dir/td/net/TcpListener.cpp.o" \
"CMakeFiles/tdnet.dir/td/net/TransparentProxy.cpp.o" \
"CMakeFiles/tdnet.dir/td/net/Wget.cpp.o"

# External object files for target tdnet
tdnet_EXTERNAL_OBJECTS =

tdnet/libtdnet.a: tdnet/CMakeFiles/tdnet.dir/td/net/GetHostByNameActor.cpp.o
tdnet/libtdnet.a: tdnet/CMakeFiles/tdnet.dir/td/net/HttpChunkedByteFlow.cpp.o
tdnet/libtdnet.a: tdnet/CMakeFiles/tdnet.dir/td/net/HttpConnectionBase.cpp.o
tdnet/libtdnet.a: tdnet/CMakeFiles/tdnet.dir/td/net/HttpContentLengthByteFlow.cpp.o
tdnet/libtdnet.a: tdnet/CMakeFiles/tdnet.dir/td/net/HttpFile.cpp.o
tdnet/libtdnet.a: tdnet/CMakeFiles/tdnet.dir/td/net/HttpInboundConnection.cpp.o
tdnet/libtdnet.a: tdnet/CMakeFiles/tdnet.dir/td/net/HttpOutboundConnection.cpp.o
tdnet/libtdnet.a: tdnet/CMakeFiles/tdnet.dir/td/net/HttpProxy.cpp.o
tdnet/libtdnet.a: tdnet/CMakeFiles/tdnet.dir/td/net/HttpQuery.cpp.o
tdnet/libtdnet.a: tdnet/CMakeFiles/tdnet.dir/td/net/HttpReader.cpp.o
tdnet/libtdnet.a: tdnet/CMakeFiles/tdnet.dir/td/net/Socks5.cpp.o
tdnet/libtdnet.a: tdnet/CMakeFiles/tdnet.dir/td/net/SslStream.cpp.o
tdnet/libtdnet.a: tdnet/CMakeFiles/tdnet.dir/td/net/TcpListener.cpp.o
tdnet/libtdnet.a: tdnet/CMakeFiles/tdnet.dir/td/net/TransparentProxy.cpp.o
tdnet/libtdnet.a: tdnet/CMakeFiles/tdnet.dir/td/net/Wget.cpp.o
tdnet/libtdnet.a: tdnet/CMakeFiles/tdnet.dir/build.make
tdnet/libtdnet.a: tdnet/CMakeFiles/tdnet.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/td/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_16) "Linking CXX static library libtdnet.a"
	cd /td/build/tdnet && $(CMAKE_COMMAND) -P CMakeFiles/tdnet.dir/cmake_clean_target.cmake
	cd /td/build/tdnet && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/tdnet.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tdnet/CMakeFiles/tdnet.dir/build: tdnet/libtdnet.a

.PHONY : tdnet/CMakeFiles/tdnet.dir/build

tdnet/CMakeFiles/tdnet.dir/requires: tdnet/CMakeFiles/tdnet.dir/td/net/GetHostByNameActor.cpp.o.requires
tdnet/CMakeFiles/tdnet.dir/requires: tdnet/CMakeFiles/tdnet.dir/td/net/HttpChunkedByteFlow.cpp.o.requires
tdnet/CMakeFiles/tdnet.dir/requires: tdnet/CMakeFiles/tdnet.dir/td/net/HttpConnectionBase.cpp.o.requires
tdnet/CMakeFiles/tdnet.dir/requires: tdnet/CMakeFiles/tdnet.dir/td/net/HttpContentLengthByteFlow.cpp.o.requires
tdnet/CMakeFiles/tdnet.dir/requires: tdnet/CMakeFiles/tdnet.dir/td/net/HttpFile.cpp.o.requires
tdnet/CMakeFiles/tdnet.dir/requires: tdnet/CMakeFiles/tdnet.dir/td/net/HttpInboundConnection.cpp.o.requires
tdnet/CMakeFiles/tdnet.dir/requires: tdnet/CMakeFiles/tdnet.dir/td/net/HttpOutboundConnection.cpp.o.requires
tdnet/CMakeFiles/tdnet.dir/requires: tdnet/CMakeFiles/tdnet.dir/td/net/HttpProxy.cpp.o.requires
tdnet/CMakeFiles/tdnet.dir/requires: tdnet/CMakeFiles/tdnet.dir/td/net/HttpQuery.cpp.o.requires
tdnet/CMakeFiles/tdnet.dir/requires: tdnet/CMakeFiles/tdnet.dir/td/net/HttpReader.cpp.o.requires
tdnet/CMakeFiles/tdnet.dir/requires: tdnet/CMakeFiles/tdnet.dir/td/net/Socks5.cpp.o.requires
tdnet/CMakeFiles/tdnet.dir/requires: tdnet/CMakeFiles/tdnet.dir/td/net/SslStream.cpp.o.requires
tdnet/CMakeFiles/tdnet.dir/requires: tdnet/CMakeFiles/tdnet.dir/td/net/TcpListener.cpp.o.requires
tdnet/CMakeFiles/tdnet.dir/requires: tdnet/CMakeFiles/tdnet.dir/td/net/TransparentProxy.cpp.o.requires
tdnet/CMakeFiles/tdnet.dir/requires: tdnet/CMakeFiles/tdnet.dir/td/net/Wget.cpp.o.requires

.PHONY : tdnet/CMakeFiles/tdnet.dir/requires

tdnet/CMakeFiles/tdnet.dir/clean:
	cd /td/build/tdnet && $(CMAKE_COMMAND) -P CMakeFiles/tdnet.dir/cmake_clean.cmake
.PHONY : tdnet/CMakeFiles/tdnet.dir/clean

tdnet/CMakeFiles/tdnet.dir/depend:
	cd /td/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /td /td/tdnet /td/build /td/build/tdnet /td/build/tdnet/CMakeFiles/tdnet.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tdnet/CMakeFiles/tdnet.dir/depend

