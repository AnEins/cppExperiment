# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/mnt/d/OneDrive - TUM/Source/Praktikum_Cpp"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/mnt/d/OneDrive - TUM/Source/Praktikum_Cpp/build"

# Include any dependencies generated for this target.
include CMakeFiles/A2.cpp.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/A2.cpp.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/A2.cpp.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/A2.cpp.dir/flags.make

CMakeFiles/A2.cpp.dir/Day4/A2.cpp.o: CMakeFiles/A2.cpp.dir/flags.make
CMakeFiles/A2.cpp.dir/Day4/A2.cpp.o: ../Day4/A2.cpp
CMakeFiles/A2.cpp.dir/Day4/A2.cpp.o: CMakeFiles/A2.cpp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/mnt/d/OneDrive - TUM/Source/Praktikum_Cpp/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/A2.cpp.dir/Day4/A2.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/A2.cpp.dir/Day4/A2.cpp.o -MF CMakeFiles/A2.cpp.dir/Day4/A2.cpp.o.d -o CMakeFiles/A2.cpp.dir/Day4/A2.cpp.o -c "/mnt/d/OneDrive - TUM/Source/Praktikum_Cpp/Day4/A2.cpp"

CMakeFiles/A2.cpp.dir/Day4/A2.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/A2.cpp.dir/Day4/A2.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/mnt/d/OneDrive - TUM/Source/Praktikum_Cpp/Day4/A2.cpp" > CMakeFiles/A2.cpp.dir/Day4/A2.cpp.i

CMakeFiles/A2.cpp.dir/Day4/A2.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/A2.cpp.dir/Day4/A2.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/mnt/d/OneDrive - TUM/Source/Praktikum_Cpp/Day4/A2.cpp" -o CMakeFiles/A2.cpp.dir/Day4/A2.cpp.s

# Object files for target A2.cpp
A2_cpp_OBJECTS = \
"CMakeFiles/A2.cpp.dir/Day4/A2.cpp.o"

# External object files for target A2.cpp
A2_cpp_EXTERNAL_OBJECTS =

A2.cpp: CMakeFiles/A2.cpp.dir/Day4/A2.cpp.o
A2.cpp: CMakeFiles/A2.cpp.dir/build.make
A2.cpp: CMakeFiles/A2.cpp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/mnt/d/OneDrive - TUM/Source/Praktikum_Cpp/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable A2.cpp"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/A2.cpp.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/A2.cpp.dir/build: A2.cpp
.PHONY : CMakeFiles/A2.cpp.dir/build

CMakeFiles/A2.cpp.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/A2.cpp.dir/cmake_clean.cmake
.PHONY : CMakeFiles/A2.cpp.dir/clean

CMakeFiles/A2.cpp.dir/depend:
	cd "/mnt/d/OneDrive - TUM/Source/Praktikum_Cpp/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/mnt/d/OneDrive - TUM/Source/Praktikum_Cpp" "/mnt/d/OneDrive - TUM/Source/Praktikum_Cpp" "/mnt/d/OneDrive - TUM/Source/Praktikum_Cpp/build" "/mnt/d/OneDrive - TUM/Source/Praktikum_Cpp/build" "/mnt/d/OneDrive - TUM/Source/Praktikum_Cpp/build/CMakeFiles/A2.cpp.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/A2.cpp.dir/depend

