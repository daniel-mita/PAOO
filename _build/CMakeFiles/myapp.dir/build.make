# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.24

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /opt/homebrew/Cellar/cmake/3.24.2/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/Cellar/cmake/3.24.2/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/daniel/Facultate/PAOO/PAOO/myfolder

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/daniel/Facultate/PAOO/PAOO/_build

# Include any dependencies generated for this target.
include CMakeFiles/myapp.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/myapp.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/myapp.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/myapp.dir/flags.make

CMakeFiles/myapp.dir/exec.cpp.o: CMakeFiles/myapp.dir/flags.make
CMakeFiles/myapp.dir/exec.cpp.o: /Users/daniel/Facultate/PAOO/PAOO/myfolder/exec.cpp
CMakeFiles/myapp.dir/exec.cpp.o: CMakeFiles/myapp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/daniel/Facultate/PAOO/PAOO/_build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/myapp.dir/exec.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/myapp.dir/exec.cpp.o -MF CMakeFiles/myapp.dir/exec.cpp.o.d -o CMakeFiles/myapp.dir/exec.cpp.o -c /Users/daniel/Facultate/PAOO/PAOO/myfolder/exec.cpp

CMakeFiles/myapp.dir/exec.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/myapp.dir/exec.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/daniel/Facultate/PAOO/PAOO/myfolder/exec.cpp > CMakeFiles/myapp.dir/exec.cpp.i

CMakeFiles/myapp.dir/exec.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/myapp.dir/exec.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/daniel/Facultate/PAOO/PAOO/myfolder/exec.cpp -o CMakeFiles/myapp.dir/exec.cpp.s

# Object files for target myapp
myapp_OBJECTS = \
"CMakeFiles/myapp.dir/exec.cpp.o"

# External object files for target myapp
myapp_EXTERNAL_OBJECTS =

myapp: CMakeFiles/myapp.dir/exec.cpp.o
myapp: CMakeFiles/myapp.dir/build.make
myapp: CMakeFiles/myapp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/daniel/Facultate/PAOO/PAOO/_build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable myapp"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/myapp.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/myapp.dir/build: myapp
.PHONY : CMakeFiles/myapp.dir/build

CMakeFiles/myapp.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/myapp.dir/cmake_clean.cmake
.PHONY : CMakeFiles/myapp.dir/clean

CMakeFiles/myapp.dir/depend:
	cd /Users/daniel/Facultate/PAOO/PAOO/_build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/daniel/Facultate/PAOO/PAOO/myfolder /Users/daniel/Facultate/PAOO/PAOO/myfolder /Users/daniel/Facultate/PAOO/PAOO/_build /Users/daniel/Facultate/PAOO/PAOO/_build /Users/daniel/Facultate/PAOO/PAOO/_build/CMakeFiles/myapp.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/myapp.dir/depend

