# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_SOURCE_DIR = /home/marcin/projects/ChatAppCpp2.0

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/marcin/projects/ChatAppCpp2.0/build

# Include any dependencies generated for this target.
include CMakeFiles/test_0.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/test_0.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/test_0.dir/flags.make

CMakeFiles/test_0.dir/main.cpp.o: CMakeFiles/test_0.dir/flags.make
CMakeFiles/test_0.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/marcin/projects/ChatAppCpp2.0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/test_0.dir/main.cpp.o"
	/bin/x86_64-linux-gnu-g++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/test_0.dir/main.cpp.o -c /home/marcin/projects/ChatAppCpp2.0/main.cpp

CMakeFiles/test_0.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_0.dir/main.cpp.i"
	/bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/marcin/projects/ChatAppCpp2.0/main.cpp > CMakeFiles/test_0.dir/main.cpp.i

CMakeFiles/test_0.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_0.dir/main.cpp.s"
	/bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/marcin/projects/ChatAppCpp2.0/main.cpp -o CMakeFiles/test_0.dir/main.cpp.s

CMakeFiles/test_0.dir/scripts.cpp.o: CMakeFiles/test_0.dir/flags.make
CMakeFiles/test_0.dir/scripts.cpp.o: ../scripts.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/marcin/projects/ChatAppCpp2.0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/test_0.dir/scripts.cpp.o"
	/bin/x86_64-linux-gnu-g++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/test_0.dir/scripts.cpp.o -c /home/marcin/projects/ChatAppCpp2.0/scripts.cpp

CMakeFiles/test_0.dir/scripts.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_0.dir/scripts.cpp.i"
	/bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/marcin/projects/ChatAppCpp2.0/scripts.cpp > CMakeFiles/test_0.dir/scripts.cpp.i

CMakeFiles/test_0.dir/scripts.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_0.dir/scripts.cpp.s"
	/bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/marcin/projects/ChatAppCpp2.0/scripts.cpp -o CMakeFiles/test_0.dir/scripts.cpp.s

# Object files for target test_0
test_0_OBJECTS = \
"CMakeFiles/test_0.dir/main.cpp.o" \
"CMakeFiles/test_0.dir/scripts.cpp.o"

# External object files for target test_0
test_0_EXTERNAL_OBJECTS =

test_0: CMakeFiles/test_0.dir/main.cpp.o
test_0: CMakeFiles/test_0.dir/scripts.cpp.o
test_0: CMakeFiles/test_0.dir/build.make
test_0: /usr/lib/x86_64-linux-gnu/libcurl.so
test_0: CMakeFiles/test_0.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/marcin/projects/ChatAppCpp2.0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable test_0"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test_0.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/test_0.dir/build: test_0

.PHONY : CMakeFiles/test_0.dir/build

CMakeFiles/test_0.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/test_0.dir/cmake_clean.cmake
.PHONY : CMakeFiles/test_0.dir/clean

CMakeFiles/test_0.dir/depend:
	cd /home/marcin/projects/ChatAppCpp2.0/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/marcin/projects/ChatAppCpp2.0 /home/marcin/projects/ChatAppCpp2.0 /home/marcin/projects/ChatAppCpp2.0/build /home/marcin/projects/ChatAppCpp2.0/build /home/marcin/projects/ChatAppCpp2.0/build/CMakeFiles/test_0.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/test_0.dir/depend

