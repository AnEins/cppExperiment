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
include CMakeFiles/Palindrome.cpp.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Palindrome.cpp.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Palindrome.cpp.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Palindrome.cpp.dir/flags.make

CMakeFiles/Palindrome.cpp.dir/Day1/Palindrome.cpp.o: CMakeFiles/Palindrome.cpp.dir/flags.make
CMakeFiles/Palindrome.cpp.dir/Day1/Palindrome.cpp.o: ../Day1/Palindrome.cpp
CMakeFiles/Palindrome.cpp.dir/Day1/Palindrome.cpp.o: CMakeFiles/Palindrome.cpp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/mnt/d/OneDrive - TUM/Source/Praktikum_Cpp/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Palindrome.cpp.dir/Day1/Palindrome.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Palindrome.cpp.dir/Day1/Palindrome.cpp.o -MF CMakeFiles/Palindrome.cpp.dir/Day1/Palindrome.cpp.o.d -o CMakeFiles/Palindrome.cpp.dir/Day1/Palindrome.cpp.o -c "/mnt/d/OneDrive - TUM/Source/Praktikum_Cpp/Day1/Palindrome.cpp"

CMakeFiles/Palindrome.cpp.dir/Day1/Palindrome.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Palindrome.cpp.dir/Day1/Palindrome.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/mnt/d/OneDrive - TUM/Source/Praktikum_Cpp/Day1/Palindrome.cpp" > CMakeFiles/Palindrome.cpp.dir/Day1/Palindrome.cpp.i

CMakeFiles/Palindrome.cpp.dir/Day1/Palindrome.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Palindrome.cpp.dir/Day1/Palindrome.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/mnt/d/OneDrive - TUM/Source/Praktikum_Cpp/Day1/Palindrome.cpp" -o CMakeFiles/Palindrome.cpp.dir/Day1/Palindrome.cpp.s

# Object files for target Palindrome.cpp
Palindrome_cpp_OBJECTS = \
"CMakeFiles/Palindrome.cpp.dir/Day1/Palindrome.cpp.o"

# External object files for target Palindrome.cpp
Palindrome_cpp_EXTERNAL_OBJECTS =

Palindrome.cpp: CMakeFiles/Palindrome.cpp.dir/Day1/Palindrome.cpp.o
Palindrome.cpp: CMakeFiles/Palindrome.cpp.dir/build.make
Palindrome.cpp: CMakeFiles/Palindrome.cpp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/mnt/d/OneDrive - TUM/Source/Praktikum_Cpp/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Palindrome.cpp"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Palindrome.cpp.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Palindrome.cpp.dir/build: Palindrome.cpp
.PHONY : CMakeFiles/Palindrome.cpp.dir/build

CMakeFiles/Palindrome.cpp.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Palindrome.cpp.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Palindrome.cpp.dir/clean

CMakeFiles/Palindrome.cpp.dir/depend:
	cd "/mnt/d/OneDrive - TUM/Source/Praktikum_Cpp/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/mnt/d/OneDrive - TUM/Source/Praktikum_Cpp" "/mnt/d/OneDrive - TUM/Source/Praktikum_Cpp" "/mnt/d/OneDrive - TUM/Source/Praktikum_Cpp/build" "/mnt/d/OneDrive - TUM/Source/Praktikum_Cpp/build" "/mnt/d/OneDrive - TUM/Source/Praktikum_Cpp/build/CMakeFiles/Palindrome.cpp.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Palindrome.cpp.dir/depend
