# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.9

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
CMAKE_COMMAND = /cygdrive/c/Users/sashe/.CLion2017.3/system/cygwin_cmake/bin/cmake.exe

# The command to remove a file.
RM = /cygdrive/c/Users/sashe/.CLion2017.3/system/cygwin_cmake/bin/cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/cygdrive/c/Users/sashe/CLionProjects/Project 8 Interpreter A"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/cygdrive/c/Users/sashe/CLionProjects/Project 8 Interpreter A/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Project_8_Interpreter_A.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Project_8_Interpreter_A.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Project_8_Interpreter_A.dir/flags.make

CMakeFiles/Project_8_Interpreter_A.dir/Input.cpp.o: CMakeFiles/Project_8_Interpreter_A.dir/flags.make
CMakeFiles/Project_8_Interpreter_A.dir/Input.cpp.o: ../Input.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/cygdrive/c/Users/sashe/CLionProjects/Project 8 Interpreter A/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Project_8_Interpreter_A.dir/Input.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Project_8_Interpreter_A.dir/Input.cpp.o -c "/cygdrive/c/Users/sashe/CLionProjects/Project 8 Interpreter A/Input.cpp"

CMakeFiles/Project_8_Interpreter_A.dir/Input.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Project_8_Interpreter_A.dir/Input.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/cygdrive/c/Users/sashe/CLionProjects/Project 8 Interpreter A/Input.cpp" > CMakeFiles/Project_8_Interpreter_A.dir/Input.cpp.i

CMakeFiles/Project_8_Interpreter_A.dir/Input.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Project_8_Interpreter_A.dir/Input.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/cygdrive/c/Users/sashe/CLionProjects/Project 8 Interpreter A/Input.cpp" -o CMakeFiles/Project_8_Interpreter_A.dir/Input.cpp.s

CMakeFiles/Project_8_Interpreter_A.dir/Input.cpp.o.requires:

.PHONY : CMakeFiles/Project_8_Interpreter_A.dir/Input.cpp.o.requires

CMakeFiles/Project_8_Interpreter_A.dir/Input.cpp.o.provides: CMakeFiles/Project_8_Interpreter_A.dir/Input.cpp.o.requires
	$(MAKE) -f CMakeFiles/Project_8_Interpreter_A.dir/build.make CMakeFiles/Project_8_Interpreter_A.dir/Input.cpp.o.provides.build
.PHONY : CMakeFiles/Project_8_Interpreter_A.dir/Input.cpp.o.provides

CMakeFiles/Project_8_Interpreter_A.dir/Input.cpp.o.provides.build: CMakeFiles/Project_8_Interpreter_A.dir/Input.cpp.o


CMakeFiles/Project_8_Interpreter_A.dir/main.cpp.o: CMakeFiles/Project_8_Interpreter_A.dir/flags.make
CMakeFiles/Project_8_Interpreter_A.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/cygdrive/c/Users/sashe/CLionProjects/Project 8 Interpreter A/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Project_8_Interpreter_A.dir/main.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Project_8_Interpreter_A.dir/main.cpp.o -c "/cygdrive/c/Users/sashe/CLionProjects/Project 8 Interpreter A/main.cpp"

CMakeFiles/Project_8_Interpreter_A.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Project_8_Interpreter_A.dir/main.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/cygdrive/c/Users/sashe/CLionProjects/Project 8 Interpreter A/main.cpp" > CMakeFiles/Project_8_Interpreter_A.dir/main.cpp.i

CMakeFiles/Project_8_Interpreter_A.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Project_8_Interpreter_A.dir/main.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/cygdrive/c/Users/sashe/CLionProjects/Project 8 Interpreter A/main.cpp" -o CMakeFiles/Project_8_Interpreter_A.dir/main.cpp.s

CMakeFiles/Project_8_Interpreter_A.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/Project_8_Interpreter_A.dir/main.cpp.o.requires

CMakeFiles/Project_8_Interpreter_A.dir/main.cpp.o.provides: CMakeFiles/Project_8_Interpreter_A.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/Project_8_Interpreter_A.dir/build.make CMakeFiles/Project_8_Interpreter_A.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/Project_8_Interpreter_A.dir/main.cpp.o.provides

CMakeFiles/Project_8_Interpreter_A.dir/main.cpp.o.provides.build: CMakeFiles/Project_8_Interpreter_A.dir/main.cpp.o


CMakeFiles/Project_8_Interpreter_A.dir/ExpTree.cpp.o: CMakeFiles/Project_8_Interpreter_A.dir/flags.make
CMakeFiles/Project_8_Interpreter_A.dir/ExpTree.cpp.o: ../ExpTree.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/cygdrive/c/Users/sashe/CLionProjects/Project 8 Interpreter A/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Project_8_Interpreter_A.dir/ExpTree.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Project_8_Interpreter_A.dir/ExpTree.cpp.o -c "/cygdrive/c/Users/sashe/CLionProjects/Project 8 Interpreter A/ExpTree.cpp"

CMakeFiles/Project_8_Interpreter_A.dir/ExpTree.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Project_8_Interpreter_A.dir/ExpTree.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/cygdrive/c/Users/sashe/CLionProjects/Project 8 Interpreter A/ExpTree.cpp" > CMakeFiles/Project_8_Interpreter_A.dir/ExpTree.cpp.i

CMakeFiles/Project_8_Interpreter_A.dir/ExpTree.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Project_8_Interpreter_A.dir/ExpTree.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/cygdrive/c/Users/sashe/CLionProjects/Project 8 Interpreter A/ExpTree.cpp" -o CMakeFiles/Project_8_Interpreter_A.dir/ExpTree.cpp.s

CMakeFiles/Project_8_Interpreter_A.dir/ExpTree.cpp.o.requires:

.PHONY : CMakeFiles/Project_8_Interpreter_A.dir/ExpTree.cpp.o.requires

CMakeFiles/Project_8_Interpreter_A.dir/ExpTree.cpp.o.provides: CMakeFiles/Project_8_Interpreter_A.dir/ExpTree.cpp.o.requires
	$(MAKE) -f CMakeFiles/Project_8_Interpreter_A.dir/build.make CMakeFiles/Project_8_Interpreter_A.dir/ExpTree.cpp.o.provides.build
.PHONY : CMakeFiles/Project_8_Interpreter_A.dir/ExpTree.cpp.o.provides

CMakeFiles/Project_8_Interpreter_A.dir/ExpTree.cpp.o.provides.build: CMakeFiles/Project_8_Interpreter_A.dir/ExpTree.cpp.o


CMakeFiles/Project_8_Interpreter_A.dir/Linkedlist.cpp.o: CMakeFiles/Project_8_Interpreter_A.dir/flags.make
CMakeFiles/Project_8_Interpreter_A.dir/Linkedlist.cpp.o: ../Linkedlist.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/cygdrive/c/Users/sashe/CLionProjects/Project 8 Interpreter A/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Project_8_Interpreter_A.dir/Linkedlist.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Project_8_Interpreter_A.dir/Linkedlist.cpp.o -c "/cygdrive/c/Users/sashe/CLionProjects/Project 8 Interpreter A/Linkedlist.cpp"

CMakeFiles/Project_8_Interpreter_A.dir/Linkedlist.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Project_8_Interpreter_A.dir/Linkedlist.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/cygdrive/c/Users/sashe/CLionProjects/Project 8 Interpreter A/Linkedlist.cpp" > CMakeFiles/Project_8_Interpreter_A.dir/Linkedlist.cpp.i

CMakeFiles/Project_8_Interpreter_A.dir/Linkedlist.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Project_8_Interpreter_A.dir/Linkedlist.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/cygdrive/c/Users/sashe/CLionProjects/Project 8 Interpreter A/Linkedlist.cpp" -o CMakeFiles/Project_8_Interpreter_A.dir/Linkedlist.cpp.s

CMakeFiles/Project_8_Interpreter_A.dir/Linkedlist.cpp.o.requires:

.PHONY : CMakeFiles/Project_8_Interpreter_A.dir/Linkedlist.cpp.o.requires

CMakeFiles/Project_8_Interpreter_A.dir/Linkedlist.cpp.o.provides: CMakeFiles/Project_8_Interpreter_A.dir/Linkedlist.cpp.o.requires
	$(MAKE) -f CMakeFiles/Project_8_Interpreter_A.dir/build.make CMakeFiles/Project_8_Interpreter_A.dir/Linkedlist.cpp.o.provides.build
.PHONY : CMakeFiles/Project_8_Interpreter_A.dir/Linkedlist.cpp.o.provides

CMakeFiles/Project_8_Interpreter_A.dir/Linkedlist.cpp.o.provides.build: CMakeFiles/Project_8_Interpreter_A.dir/Linkedlist.cpp.o


# Object files for target Project_8_Interpreter_A
Project_8_Interpreter_A_OBJECTS = \
"CMakeFiles/Project_8_Interpreter_A.dir/Input.cpp.o" \
"CMakeFiles/Project_8_Interpreter_A.dir/main.cpp.o" \
"CMakeFiles/Project_8_Interpreter_A.dir/ExpTree.cpp.o" \
"CMakeFiles/Project_8_Interpreter_A.dir/Linkedlist.cpp.o"

# External object files for target Project_8_Interpreter_A
Project_8_Interpreter_A_EXTERNAL_OBJECTS =

Project_8_Interpreter_A.exe: CMakeFiles/Project_8_Interpreter_A.dir/Input.cpp.o
Project_8_Interpreter_A.exe: CMakeFiles/Project_8_Interpreter_A.dir/main.cpp.o
Project_8_Interpreter_A.exe: CMakeFiles/Project_8_Interpreter_A.dir/ExpTree.cpp.o
Project_8_Interpreter_A.exe: CMakeFiles/Project_8_Interpreter_A.dir/Linkedlist.cpp.o
Project_8_Interpreter_A.exe: CMakeFiles/Project_8_Interpreter_A.dir/build.make
Project_8_Interpreter_A.exe: CMakeFiles/Project_8_Interpreter_A.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/cygdrive/c/Users/sashe/CLionProjects/Project 8 Interpreter A/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable Project_8_Interpreter_A.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Project_8_Interpreter_A.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Project_8_Interpreter_A.dir/build: Project_8_Interpreter_A.exe

.PHONY : CMakeFiles/Project_8_Interpreter_A.dir/build

CMakeFiles/Project_8_Interpreter_A.dir/requires: CMakeFiles/Project_8_Interpreter_A.dir/Input.cpp.o.requires
CMakeFiles/Project_8_Interpreter_A.dir/requires: CMakeFiles/Project_8_Interpreter_A.dir/main.cpp.o.requires
CMakeFiles/Project_8_Interpreter_A.dir/requires: CMakeFiles/Project_8_Interpreter_A.dir/ExpTree.cpp.o.requires
CMakeFiles/Project_8_Interpreter_A.dir/requires: CMakeFiles/Project_8_Interpreter_A.dir/Linkedlist.cpp.o.requires

.PHONY : CMakeFiles/Project_8_Interpreter_A.dir/requires

CMakeFiles/Project_8_Interpreter_A.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Project_8_Interpreter_A.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Project_8_Interpreter_A.dir/clean

CMakeFiles/Project_8_Interpreter_A.dir/depend:
	cd "/cygdrive/c/Users/sashe/CLionProjects/Project 8 Interpreter A/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/cygdrive/c/Users/sashe/CLionProjects/Project 8 Interpreter A" "/cygdrive/c/Users/sashe/CLionProjects/Project 8 Interpreter A" "/cygdrive/c/Users/sashe/CLionProjects/Project 8 Interpreter A/cmake-build-debug" "/cygdrive/c/Users/sashe/CLionProjects/Project 8 Interpreter A/cmake-build-debug" "/cygdrive/c/Users/sashe/CLionProjects/Project 8 Interpreter A/cmake-build-debug/CMakeFiles/Project_8_Interpreter_A.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Project_8_Interpreter_A.dir/depend

