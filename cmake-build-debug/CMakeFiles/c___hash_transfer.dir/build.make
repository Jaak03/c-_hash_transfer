# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.12

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
CMAKE_COMMAND = /opt/clion/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /opt/clion/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/jaak/Git/c-_hash_transfer

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/jaak/Git/c-_hash_transfer/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/c___hash_transfer.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/c___hash_transfer.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/c___hash_transfer.dir/flags.make

CMakeFiles/c___hash_transfer.dir/main.cpp.o: CMakeFiles/c___hash_transfer.dir/flags.make
CMakeFiles/c___hash_transfer.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jaak/Git/c-_hash_transfer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/c___hash_transfer.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/c___hash_transfer.dir/main.cpp.o -c /home/jaak/Git/c-_hash_transfer/main.cpp

CMakeFiles/c___hash_transfer.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/c___hash_transfer.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jaak/Git/c-_hash_transfer/main.cpp > CMakeFiles/c___hash_transfer.dir/main.cpp.i

CMakeFiles/c___hash_transfer.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/c___hash_transfer.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jaak/Git/c-_hash_transfer/main.cpp -o CMakeFiles/c___hash_transfer.dir/main.cpp.s

CMakeFiles/c___hash_transfer.dir/Hashpipe.cpp.o: CMakeFiles/c___hash_transfer.dir/flags.make
CMakeFiles/c___hash_transfer.dir/Hashpipe.cpp.o: ../Hashpipe.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jaak/Git/c-_hash_transfer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/c___hash_transfer.dir/Hashpipe.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/c___hash_transfer.dir/Hashpipe.cpp.o -c /home/jaak/Git/c-_hash_transfer/Hashpipe.cpp

CMakeFiles/c___hash_transfer.dir/Hashpipe.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/c___hash_transfer.dir/Hashpipe.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jaak/Git/c-_hash_transfer/Hashpipe.cpp > CMakeFiles/c___hash_transfer.dir/Hashpipe.cpp.i

CMakeFiles/c___hash_transfer.dir/Hashpipe.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/c___hash_transfer.dir/Hashpipe.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jaak/Git/c-_hash_transfer/Hashpipe.cpp -o CMakeFiles/c___hash_transfer.dir/Hashpipe.cpp.s

# Object files for target c___hash_transfer
c___hash_transfer_OBJECTS = \
"CMakeFiles/c___hash_transfer.dir/main.cpp.o" \
"CMakeFiles/c___hash_transfer.dir/Hashpipe.cpp.o"

# External object files for target c___hash_transfer
c___hash_transfer_EXTERNAL_OBJECTS =

c___hash_transfer: CMakeFiles/c___hash_transfer.dir/main.cpp.o
c___hash_transfer: CMakeFiles/c___hash_transfer.dir/Hashpipe.cpp.o
c___hash_transfer: CMakeFiles/c___hash_transfer.dir/build.make
c___hash_transfer: CMakeFiles/c___hash_transfer.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/jaak/Git/c-_hash_transfer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable c___hash_transfer"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/c___hash_transfer.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/c___hash_transfer.dir/build: c___hash_transfer

.PHONY : CMakeFiles/c___hash_transfer.dir/build

CMakeFiles/c___hash_transfer.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/c___hash_transfer.dir/cmake_clean.cmake
.PHONY : CMakeFiles/c___hash_transfer.dir/clean

CMakeFiles/c___hash_transfer.dir/depend:
	cd /home/jaak/Git/c-_hash_transfer/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jaak/Git/c-_hash_transfer /home/jaak/Git/c-_hash_transfer /home/jaak/Git/c-_hash_transfer/cmake-build-debug /home/jaak/Git/c-_hash_transfer/cmake-build-debug /home/jaak/Git/c-_hash_transfer/cmake-build-debug/CMakeFiles/c___hash_transfer.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/c___hash_transfer.dir/depend
