# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.0

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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.0.2/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.0.2/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/sharon/gsim

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/sharon/gsim/build

# Include any dependencies generated for this target.
include CMakeFiles/gsim.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/gsim.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/gsim.dir/flags.make

CMakeFiles/gsim.dir/main.cpp.o: CMakeFiles/gsim.dir/flags.make
CMakeFiles/gsim.dir/main.cpp.o: ../main.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/sharon/gsim/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/gsim.dir/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/gsim.dir/main.cpp.o -c /home/sharon/gsim/main.cpp

CMakeFiles/gsim.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gsim.dir/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/sharon/gsim/main.cpp > CMakeFiles/gsim.dir/main.cpp.i

CMakeFiles/gsim.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gsim.dir/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/sharon/gsim/main.cpp -o CMakeFiles/gsim.dir/main.cpp.s

CMakeFiles/gsim.dir/main.cpp.o.requires:
.PHONY : CMakeFiles/gsim.dir/main.cpp.o.requires

CMakeFiles/gsim.dir/main.cpp.o.provides: CMakeFiles/gsim.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/gsim.dir/build.make CMakeFiles/gsim.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/gsim.dir/main.cpp.o.provides

CMakeFiles/gsim.dir/main.cpp.o.provides.build: CMakeFiles/gsim.dir/main.cpp.o

CMakeFiles/gsim.dir/fasta.cpp.o: CMakeFiles/gsim.dir/flags.make
CMakeFiles/gsim.dir/fasta.cpp.o: ../fasta.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/sharon/gsim/build/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/gsim.dir/fasta.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/gsim.dir/fasta.cpp.o -c /home/sharon/gsim/fasta.cpp

CMakeFiles/gsim.dir/fasta.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gsim.dir/fasta.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/sharon/gsim/fasta.cpp > CMakeFiles/gsim.dir/fasta.cpp.i

CMakeFiles/gsim.dir/fasta.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gsim.dir/fasta.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/sharon/gsim/fasta.cpp -o CMakeFiles/gsim.dir/fasta.cpp.s

CMakeFiles/gsim.dir/fasta.cpp.o.requires:
.PHONY : CMakeFiles/gsim.dir/fasta.cpp.o.requires

CMakeFiles/gsim.dir/fasta.cpp.o.provides: CMakeFiles/gsim.dir/fasta.cpp.o.requires
	$(MAKE) -f CMakeFiles/gsim.dir/build.make CMakeFiles/gsim.dir/fasta.cpp.o.provides.build
.PHONY : CMakeFiles/gsim.dir/fasta.cpp.o.provides

CMakeFiles/gsim.dir/fasta.cpp.o.provides.build: CMakeFiles/gsim.dir/fasta.cpp.o

CMakeFiles/gsim.dir/readsimulator.cpp.o: CMakeFiles/gsim.dir/flags.make
CMakeFiles/gsim.dir/readsimulator.cpp.o: ../readsimulator.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/sharon/gsim/build/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/gsim.dir/readsimulator.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/gsim.dir/readsimulator.cpp.o -c /home/sharon/gsim/readsimulator.cpp

CMakeFiles/gsim.dir/readsimulator.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gsim.dir/readsimulator.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/sharon/gsim/readsimulator.cpp > CMakeFiles/gsim.dir/readsimulator.cpp.i

CMakeFiles/gsim.dir/readsimulator.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gsim.dir/readsimulator.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/sharon/gsim/readsimulator.cpp -o CMakeFiles/gsim.dir/readsimulator.cpp.s

CMakeFiles/gsim.dir/readsimulator.cpp.o.requires:
.PHONY : CMakeFiles/gsim.dir/readsimulator.cpp.o.requires

CMakeFiles/gsim.dir/readsimulator.cpp.o.provides: CMakeFiles/gsim.dir/readsimulator.cpp.o.requires
	$(MAKE) -f CMakeFiles/gsim.dir/build.make CMakeFiles/gsim.dir/readsimulator.cpp.o.provides.build
.PHONY : CMakeFiles/gsim.dir/readsimulator.cpp.o.provides

CMakeFiles/gsim.dir/readsimulator.cpp.o.provides.build: CMakeFiles/gsim.dir/readsimulator.cpp.o

CMakeFiles/gsim.dir/fastq.cpp.o: CMakeFiles/gsim.dir/flags.make
CMakeFiles/gsim.dir/fastq.cpp.o: ../fastq.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/sharon/gsim/build/CMakeFiles $(CMAKE_PROGRESS_4)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/gsim.dir/fastq.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/gsim.dir/fastq.cpp.o -c /home/sharon/gsim/fastq.cpp

CMakeFiles/gsim.dir/fastq.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gsim.dir/fastq.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/sharon/gsim/fastq.cpp > CMakeFiles/gsim.dir/fastq.cpp.i

CMakeFiles/gsim.dir/fastq.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gsim.dir/fastq.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/sharon/gsim/fastq.cpp -o CMakeFiles/gsim.dir/fastq.cpp.s

CMakeFiles/gsim.dir/fastq.cpp.o.requires:
.PHONY : CMakeFiles/gsim.dir/fastq.cpp.o.requires

CMakeFiles/gsim.dir/fastq.cpp.o.provides: CMakeFiles/gsim.dir/fastq.cpp.o.requires
	$(MAKE) -f CMakeFiles/gsim.dir/build.make CMakeFiles/gsim.dir/fastq.cpp.o.provides.build
.PHONY : CMakeFiles/gsim.dir/fastq.cpp.o.provides

CMakeFiles/gsim.dir/fastq.cpp.o.provides.build: CMakeFiles/gsim.dir/fastq.cpp.o

CMakeFiles/gsim.dir/stringutils.cpp.o: CMakeFiles/gsim.dir/flags.make
CMakeFiles/gsim.dir/stringutils.cpp.o: ../stringutils.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/sharon/gsim/build/CMakeFiles $(CMAKE_PROGRESS_5)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/gsim.dir/stringutils.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/gsim.dir/stringutils.cpp.o -c /home/sharon/gsim/stringutils.cpp

CMakeFiles/gsim.dir/stringutils.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gsim.dir/stringutils.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/sharon/gsim/stringutils.cpp > CMakeFiles/gsim.dir/stringutils.cpp.i

CMakeFiles/gsim.dir/stringutils.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gsim.dir/stringutils.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/sharon/gsim/stringutils.cpp -o CMakeFiles/gsim.dir/stringutils.cpp.s

CMakeFiles/gsim.dir/stringutils.cpp.o.requires:
.PHONY : CMakeFiles/gsim.dir/stringutils.cpp.o.requires

CMakeFiles/gsim.dir/stringutils.cpp.o.provides: CMakeFiles/gsim.dir/stringutils.cpp.o.requires
	$(MAKE) -f CMakeFiles/gsim.dir/build.make CMakeFiles/gsim.dir/stringutils.cpp.o.provides.build
.PHONY : CMakeFiles/gsim.dir/stringutils.cpp.o.provides

CMakeFiles/gsim.dir/stringutils.cpp.o.provides.build: CMakeFiles/gsim.dir/stringutils.cpp.o

# Object files for target gsim
gsim_OBJECTS = \
"CMakeFiles/gsim.dir/main.cpp.o" \
"CMakeFiles/gsim.dir/fasta.cpp.o" \
"CMakeFiles/gsim.dir/readsimulator.cpp.o" \
"CMakeFiles/gsim.dir/fastq.cpp.o" \
"CMakeFiles/gsim.dir/stringutils.cpp.o"

# External object files for target gsim
gsim_EXTERNAL_OBJECTS =

gsim: CMakeFiles/gsim.dir/main.cpp.o
gsim: CMakeFiles/gsim.dir/fasta.cpp.o
gsim: CMakeFiles/gsim.dir/readsimulator.cpp.o
gsim: CMakeFiles/gsim.dir/fastq.cpp.o
gsim: CMakeFiles/gsim.dir/stringutils.cpp.o
gsim: CMakeFiles/gsim.dir/build.make
gsim: CMakeFiles/gsim.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable gsim"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/gsim.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/gsim.dir/build: gsim
.PHONY : CMakeFiles/gsim.dir/build

CMakeFiles/gsim.dir/requires: CMakeFiles/gsim.dir/main.cpp.o.requires
CMakeFiles/gsim.dir/requires: CMakeFiles/gsim.dir/fasta.cpp.o.requires
CMakeFiles/gsim.dir/requires: CMakeFiles/gsim.dir/readsimulator.cpp.o.requires
CMakeFiles/gsim.dir/requires: CMakeFiles/gsim.dir/fastq.cpp.o.requires
CMakeFiles/gsim.dir/requires: CMakeFiles/gsim.dir/stringutils.cpp.o.requires
.PHONY : CMakeFiles/gsim.dir/requires

CMakeFiles/gsim.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/gsim.dir/cmake_clean.cmake
.PHONY : CMakeFiles/gsim.dir/clean

CMakeFiles/gsim.dir/depend:
	cd /home/sharon/gsim/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/sharon/gsim /home/sharon/gsim /home/sharon/gsim/build /home/sharon/gsim/build /home/sharon/gsim/build/CMakeFiles/gsim.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/gsim.dir/depend

