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
include CMakeFiles/Modules.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Modules.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Modules.dir/flags.make

CMakeFiles/Modules.dir/main.cpp.o: CMakeFiles/Modules.dir/flags.make
CMakeFiles/Modules.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/marcin/projects/ChatAppCpp2.0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Modules.dir/main.cpp.o"
	/bin/x86_64-linux-gnu-g++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Modules.dir/main.cpp.o -c /home/marcin/projects/ChatAppCpp2.0/main.cpp

CMakeFiles/Modules.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Modules.dir/main.cpp.i"
	/bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/marcin/projects/ChatAppCpp2.0/main.cpp > CMakeFiles/Modules.dir/main.cpp.i

CMakeFiles/Modules.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Modules.dir/main.cpp.s"
	/bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/marcin/projects/ChatAppCpp2.0/main.cpp -o CMakeFiles/Modules.dir/main.cpp.s

CMakeFiles/Modules.dir/scripts.cpp.o: CMakeFiles/Modules.dir/flags.make
CMakeFiles/Modules.dir/scripts.cpp.o: ../scripts.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/marcin/projects/ChatAppCpp2.0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Modules.dir/scripts.cpp.o"
	/bin/x86_64-linux-gnu-g++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Modules.dir/scripts.cpp.o -c /home/marcin/projects/ChatAppCpp2.0/scripts.cpp

CMakeFiles/Modules.dir/scripts.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Modules.dir/scripts.cpp.i"
	/bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/marcin/projects/ChatAppCpp2.0/scripts.cpp > CMakeFiles/Modules.dir/scripts.cpp.i

CMakeFiles/Modules.dir/scripts.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Modules.dir/scripts.cpp.s"
	/bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/marcin/projects/ChatAppCpp2.0/scripts.cpp -o CMakeFiles/Modules.dir/scripts.cpp.s

# Object files for target Modules
Modules_OBJECTS = \
"CMakeFiles/Modules.dir/main.cpp.o" \
"CMakeFiles/Modules.dir/scripts.cpp.o"

# External object files for target Modules
Modules_EXTERNAL_OBJECTS =

Modules: CMakeFiles/Modules.dir/main.cpp.o
Modules: CMakeFiles/Modules.dir/scripts.cpp.o
Modules: CMakeFiles/Modules.dir/build.make
Modules: CMakeFiles/Modules.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/marcin/projects/ChatAppCpp2.0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Modules"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Modules.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Modules.dir/build: Modules

.PHONY : CMakeFiles/Modules.dir/build

CMakeFiles/Modules.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Modules.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Modules.dir/clean

CMakeFiles/Modules.dir/depend:
	cd /home/marcin/projects/ChatAppCpp2.0/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/marcin/projects/ChatAppCpp2.0 /home/marcin/projects/ChatAppCpp2.0 /home/marcin/projects/ChatAppCpp2.0/build /home/marcin/projects/ChatAppCpp2.0/build /home/marcin/projects/ChatAppCpp2.0/build/CMakeFiles/Modules.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Modules.dir/depend

