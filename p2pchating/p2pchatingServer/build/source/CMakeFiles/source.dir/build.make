# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

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
CMAKE_SOURCE_DIR = /home/bblack/workspace/testqt/p2pchatingServer

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/bblack/workspace/testqt/p2pchatingServer/build

# Include any dependencies generated for this target.
include source/CMakeFiles/source.dir/depend.make

# Include the progress variables for this target.
include source/CMakeFiles/source.dir/progress.make

# Include the compile flags for this target's objects.
include source/CMakeFiles/source.dir/flags.make

source/CMakeFiles/source.dir/Strecho.cc.o: source/CMakeFiles/source.dir/flags.make
source/CMakeFiles/source.dir/Strecho.cc.o: ../source/Strecho.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/bblack/workspace/testqt/p2pchatingServer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object source/CMakeFiles/source.dir/Strecho.cc.o"
	cd /home/bblack/workspace/testqt/p2pchatingServer/build/source && g++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/source.dir/Strecho.cc.o -c /home/bblack/workspace/testqt/p2pchatingServer/source/Strecho.cc

source/CMakeFiles/source.dir/Strecho.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/source.dir/Strecho.cc.i"
	cd /home/bblack/workspace/testqt/p2pchatingServer/build/source && g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/bblack/workspace/testqt/p2pchatingServer/source/Strecho.cc > CMakeFiles/source.dir/Strecho.cc.i

source/CMakeFiles/source.dir/Strecho.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/source.dir/Strecho.cc.s"
	cd /home/bblack/workspace/testqt/p2pchatingServer/build/source && g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/bblack/workspace/testqt/p2pchatingServer/source/Strecho.cc -o CMakeFiles/source.dir/Strecho.cc.s

source/CMakeFiles/source.dir/Strecho.cc.o.requires:

.PHONY : source/CMakeFiles/source.dir/Strecho.cc.o.requires

source/CMakeFiles/source.dir/Strecho.cc.o.provides: source/CMakeFiles/source.dir/Strecho.cc.o.requires
	$(MAKE) -f source/CMakeFiles/source.dir/build.make source/CMakeFiles/source.dir/Strecho.cc.o.provides.build
.PHONY : source/CMakeFiles/source.dir/Strecho.cc.o.provides

source/CMakeFiles/source.dir/Strecho.cc.o.provides.build: source/CMakeFiles/source.dir/Strecho.cc.o


source/CMakeFiles/source.dir/Unp.cc.o: source/CMakeFiles/source.dir/flags.make
source/CMakeFiles/source.dir/Unp.cc.o: ../source/Unp.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/bblack/workspace/testqt/p2pchatingServer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object source/CMakeFiles/source.dir/Unp.cc.o"
	cd /home/bblack/workspace/testqt/p2pchatingServer/build/source && g++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/source.dir/Unp.cc.o -c /home/bblack/workspace/testqt/p2pchatingServer/source/Unp.cc

source/CMakeFiles/source.dir/Unp.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/source.dir/Unp.cc.i"
	cd /home/bblack/workspace/testqt/p2pchatingServer/build/source && g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/bblack/workspace/testqt/p2pchatingServer/source/Unp.cc > CMakeFiles/source.dir/Unp.cc.i

source/CMakeFiles/source.dir/Unp.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/source.dir/Unp.cc.s"
	cd /home/bblack/workspace/testqt/p2pchatingServer/build/source && g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/bblack/workspace/testqt/p2pchatingServer/source/Unp.cc -o CMakeFiles/source.dir/Unp.cc.s

source/CMakeFiles/source.dir/Unp.cc.o.requires:

.PHONY : source/CMakeFiles/source.dir/Unp.cc.o.requires

source/CMakeFiles/source.dir/Unp.cc.o.provides: source/CMakeFiles/source.dir/Unp.cc.o.requires
	$(MAKE) -f source/CMakeFiles/source.dir/build.make source/CMakeFiles/source.dir/Unp.cc.o.provides.build
.PHONY : source/CMakeFiles/source.dir/Unp.cc.o.provides

source/CMakeFiles/source.dir/Unp.cc.o.provides.build: source/CMakeFiles/source.dir/Unp.cc.o


source/CMakeFiles/source.dir/User.cc.o: source/CMakeFiles/source.dir/flags.make
source/CMakeFiles/source.dir/User.cc.o: ../source/User.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/bblack/workspace/testqt/p2pchatingServer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object source/CMakeFiles/source.dir/User.cc.o"
	cd /home/bblack/workspace/testqt/p2pchatingServer/build/source && g++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/source.dir/User.cc.o -c /home/bblack/workspace/testqt/p2pchatingServer/source/User.cc

source/CMakeFiles/source.dir/User.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/source.dir/User.cc.i"
	cd /home/bblack/workspace/testqt/p2pchatingServer/build/source && g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/bblack/workspace/testqt/p2pchatingServer/source/User.cc > CMakeFiles/source.dir/User.cc.i

source/CMakeFiles/source.dir/User.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/source.dir/User.cc.s"
	cd /home/bblack/workspace/testqt/p2pchatingServer/build/source && g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/bblack/workspace/testqt/p2pchatingServer/source/User.cc -o CMakeFiles/source.dir/User.cc.s

source/CMakeFiles/source.dir/User.cc.o.requires:

.PHONY : source/CMakeFiles/source.dir/User.cc.o.requires

source/CMakeFiles/source.dir/User.cc.o.provides: source/CMakeFiles/source.dir/User.cc.o.requires
	$(MAKE) -f source/CMakeFiles/source.dir/build.make source/CMakeFiles/source.dir/User.cc.o.provides.build
.PHONY : source/CMakeFiles/source.dir/User.cc.o.provides

source/CMakeFiles/source.dir/User.cc.o.provides.build: source/CMakeFiles/source.dir/User.cc.o


# Object files for target source
source_OBJECTS = \
"CMakeFiles/source.dir/Strecho.cc.o" \
"CMakeFiles/source.dir/Unp.cc.o" \
"CMakeFiles/source.dir/User.cc.o"

# External object files for target source
source_EXTERNAL_OBJECTS =

source/libsource.a: source/CMakeFiles/source.dir/Strecho.cc.o
source/libsource.a: source/CMakeFiles/source.dir/Unp.cc.o
source/libsource.a: source/CMakeFiles/source.dir/User.cc.o
source/libsource.a: source/CMakeFiles/source.dir/build.make
source/libsource.a: source/CMakeFiles/source.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/bblack/workspace/testqt/p2pchatingServer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX static library libsource.a"
	cd /home/bblack/workspace/testqt/p2pchatingServer/build/source && $(CMAKE_COMMAND) -P CMakeFiles/source.dir/cmake_clean_target.cmake
	cd /home/bblack/workspace/testqt/p2pchatingServer/build/source && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/source.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
source/CMakeFiles/source.dir/build: source/libsource.a

.PHONY : source/CMakeFiles/source.dir/build

source/CMakeFiles/source.dir/requires: source/CMakeFiles/source.dir/Strecho.cc.o.requires
source/CMakeFiles/source.dir/requires: source/CMakeFiles/source.dir/Unp.cc.o.requires
source/CMakeFiles/source.dir/requires: source/CMakeFiles/source.dir/User.cc.o.requires

.PHONY : source/CMakeFiles/source.dir/requires

source/CMakeFiles/source.dir/clean:
	cd /home/bblack/workspace/testqt/p2pchatingServer/build/source && $(CMAKE_COMMAND) -P CMakeFiles/source.dir/cmake_clean.cmake
.PHONY : source/CMakeFiles/source.dir/clean

source/CMakeFiles/source.dir/depend:
	cd /home/bblack/workspace/testqt/p2pchatingServer/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/bblack/workspace/testqt/p2pchatingServer /home/bblack/workspace/testqt/p2pchatingServer/source /home/bblack/workspace/testqt/p2pchatingServer/build /home/bblack/workspace/testqt/p2pchatingServer/build/source /home/bblack/workspace/testqt/p2pchatingServer/build/source/CMakeFiles/source.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : source/CMakeFiles/source.dir/depend

