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
include CMakeFiles/Taschenrechner.cpp.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Taschenrechner.cpp.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Taschenrechner.cpp.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Taschenrechner.cpp.dir/flags.make

CMakeFiles/Taschenrechner.cpp.dir/Day1/Taschenrechner.cpp.o: CMakeFiles/Taschenrechner.cpp.dir/flags.make
CMakeFiles/Taschenrechner.cpp.dir/Day1/Taschenrechner.cpp.o: ../Day1/Taschenrechner.cpp
CMakeFiles/Taschenrechner.cpp.dir/Day1/Taschenrechner.cpp.o: CMakeFiles/Taschenrechner.cpp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/mnt/d/OneDrive - TUM/Source/Praktikum_Cpp/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Taschenrechner.cpp.dir/Day1/Taschenrechner.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Taschenrechner.cpp.dir/Day1/Taschenrechner.cpp.o -MF CMakeFiles/Taschenrechner.cpp.dir/Day1/Taschenrechner.cpp.o.d -o CMakeFiles/Taschenrechner.cpp.dir/Day1/Taschenrechner.cpp.o -c "/mnt/d/OneDrive - TUM/Source/Praktikum_Cpp/Day1/Taschenrechner.cpp"

CMakeFiles/Taschenrechner.cpp.dir/Day1/Taschenrechner.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Taschenrechner.cpp.dir/Day1/Taschenrechner.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/mnt/d/OneDrive - TUM/Source/Praktikum_Cpp/Day1/Taschenrechner.cpp" > CMakeFiles/Taschenrechner.cpp.dir/Day1/Taschenrechner.cpp.i

CMakeFiles/Taschenrechner.cpp.dir/Day1/Taschenrechner.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Taschenrechner.cpp.dir/Day1/Taschenrechner.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/mnt/d/OneDrive - TUM/Source/Praktikum_Cpp/Day1/Taschenrechner.cpp" -o CMakeFiles/Taschenrechner.cpp.dir/Day1/Taschenrechner.cpp.s

# Object files for target Taschenrechner.cpp
Taschenrechner_cpp_OBJECTS = \
"CMakeFiles/Taschenrechner.cpp.dir/Day1/Taschenrechner.cpp.o"

# External object files for target Taschenrechner.cpp
Taschenrechner_cpp_EXTERNAL_OBJECTS =

Taschenrechner.cpp: CMakeFiles/Taschenrechner.cpp.dir/Day1/Taschenrechner.cpp.o
Taschenrechner.cpp: CMakeFiles/Taschenrechner.cpp.dir/build.make
Taschenrechner.cpp: CMakeFiles/Taschenrechner.cpp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/mnt/d/OneDrive - TUM/Source/Praktikum_Cpp/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Taschenrechner.cpp"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Taschenrechner.cpp.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Taschenrechner.cpp.dir/build: Taschenrechner.cpp
.PHONY : CMakeFiles/Taschenrechner.cpp.dir/build

CMakeFiles/Taschenrechner.cpp.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Taschenrechner.cpp.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Taschenrechner.cpp.dir/clean

CMakeFiles/Taschenrechner.cpp.dir/depend:
	cd "/mnt/d/OneDrive - TUM/Source/Praktikum_Cpp/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/mnt/d/OneDrive - TUM/Source/Praktikum_Cpp" "/mnt/d/OneDrive - TUM/Source/Praktikum_Cpp" "/mnt/d/OneDrive - TUM/Source/Praktikum_Cpp/build" "/mnt/d/OneDrive - TUM/Source/Praktikum_Cpp/build" "/mnt/d/OneDrive - TUM/Source/Praktikum_Cpp/build/CMakeFiles/Taschenrechner.cpp.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Taschenrechner.cpp.dir/depend

