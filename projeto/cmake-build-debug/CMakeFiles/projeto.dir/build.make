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
CMAKE_COMMAND = /home/joao/Desktop/clion-2019.3.3/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/joao/Desktop/clion-2019.3.3/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/joao/Desktop/la1PL03G03-master/projeto

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/joao/Desktop/la1PL03G03-master/projeto/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/projeto.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/projeto.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/projeto.dir/flags.make

CMakeFiles/projeto.dir/main.c.o: CMakeFiles/projeto.dir/flags.make
CMakeFiles/projeto.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/joao/Desktop/la1PL03G03-master/projeto/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/projeto.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/projeto.dir/main.c.o   -c /home/joao/Desktop/la1PL03G03-master/projeto/main.c

CMakeFiles/projeto.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/projeto.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/joao/Desktop/la1PL03G03-master/projeto/main.c > CMakeFiles/projeto.dir/main.c.i

CMakeFiles/projeto.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/projeto.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/joao/Desktop/la1PL03G03-master/projeto/main.c -o CMakeFiles/projeto.dir/main.c.s

CMakeFiles/projeto.dir/camada_dados.c.o: CMakeFiles/projeto.dir/flags.make
CMakeFiles/projeto.dir/camada_dados.c.o: ../camada_dados.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/joao/Desktop/la1PL03G03-master/projeto/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/projeto.dir/camada_dados.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/projeto.dir/camada_dados.c.o   -c /home/joao/Desktop/la1PL03G03-master/projeto/camada_dados.c

CMakeFiles/projeto.dir/camada_dados.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/projeto.dir/camada_dados.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/joao/Desktop/la1PL03G03-master/projeto/camada_dados.c > CMakeFiles/projeto.dir/camada_dados.c.i

CMakeFiles/projeto.dir/camada_dados.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/projeto.dir/camada_dados.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/joao/Desktop/la1PL03G03-master/projeto/camada_dados.c -o CMakeFiles/projeto.dir/camada_dados.c.s

CMakeFiles/projeto.dir/logica_pograma.c.o: CMakeFiles/projeto.dir/flags.make
CMakeFiles/projeto.dir/logica_pograma.c.o: ../logica_pograma.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/joao/Desktop/la1PL03G03-master/projeto/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/projeto.dir/logica_pograma.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/projeto.dir/logica_pograma.c.o   -c /home/joao/Desktop/la1PL03G03-master/projeto/logica_pograma.c

CMakeFiles/projeto.dir/logica_pograma.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/projeto.dir/logica_pograma.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/joao/Desktop/la1PL03G03-master/projeto/logica_pograma.c > CMakeFiles/projeto.dir/logica_pograma.c.i

CMakeFiles/projeto.dir/logica_pograma.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/projeto.dir/logica_pograma.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/joao/Desktop/la1PL03G03-master/projeto/logica_pograma.c -o CMakeFiles/projeto.dir/logica_pograma.c.s

CMakeFiles/projeto.dir/interface.c.o: CMakeFiles/projeto.dir/flags.make
CMakeFiles/projeto.dir/interface.c.o: ../interface.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/joao/Desktop/la1PL03G03-master/projeto/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/projeto.dir/interface.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/projeto.dir/interface.c.o   -c /home/joao/Desktop/la1PL03G03-master/projeto/interface.c

CMakeFiles/projeto.dir/interface.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/projeto.dir/interface.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/joao/Desktop/la1PL03G03-master/projeto/interface.c > CMakeFiles/projeto.dir/interface.c.i

CMakeFiles/projeto.dir/interface.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/projeto.dir/interface.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/joao/Desktop/la1PL03G03-master/projeto/interface.c -o CMakeFiles/projeto.dir/interface.c.s

CMakeFiles/projeto.dir/lista.c.o: CMakeFiles/projeto.dir/flags.make
CMakeFiles/projeto.dir/lista.c.o: ../lista.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/joao/Desktop/la1PL03G03-master/projeto/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/projeto.dir/lista.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/projeto.dir/lista.c.o   -c /home/joao/Desktop/la1PL03G03-master/projeto/lista.c

CMakeFiles/projeto.dir/lista.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/projeto.dir/lista.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/joao/Desktop/la1PL03G03-master/projeto/lista.c > CMakeFiles/projeto.dir/lista.c.i

CMakeFiles/projeto.dir/lista.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/projeto.dir/lista.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/joao/Desktop/la1PL03G03-master/projeto/lista.c -o CMakeFiles/projeto.dir/lista.c.s

CMakeFiles/projeto.dir/Bot.c.o: CMakeFiles/projeto.dir/flags.make
CMakeFiles/projeto.dir/Bot.c.o: ../Bot.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/joao/Desktop/la1PL03G03-master/projeto/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object CMakeFiles/projeto.dir/Bot.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/projeto.dir/Bot.c.o   -c /home/joao/Desktop/la1PL03G03-master/projeto/Bot.c

CMakeFiles/projeto.dir/Bot.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/projeto.dir/Bot.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/joao/Desktop/la1PL03G03-master/projeto/Bot.c > CMakeFiles/projeto.dir/Bot.c.i

CMakeFiles/projeto.dir/Bot.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/projeto.dir/Bot.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/joao/Desktop/la1PL03G03-master/projeto/Bot.c -o CMakeFiles/projeto.dir/Bot.c.s

# Object files for target projeto
projeto_OBJECTS = \
"CMakeFiles/projeto.dir/main.c.o" \
"CMakeFiles/projeto.dir/camada_dados.c.o" \
"CMakeFiles/projeto.dir/logica_pograma.c.o" \
"CMakeFiles/projeto.dir/interface.c.o" \
"CMakeFiles/projeto.dir/lista.c.o" \
"CMakeFiles/projeto.dir/Bot.c.o"

# External object files for target projeto
projeto_EXTERNAL_OBJECTS =

projeto: CMakeFiles/projeto.dir/main.c.o
projeto: CMakeFiles/projeto.dir/camada_dados.c.o
projeto: CMakeFiles/projeto.dir/logica_pograma.c.o
projeto: CMakeFiles/projeto.dir/interface.c.o
projeto: CMakeFiles/projeto.dir/lista.c.o
projeto: CMakeFiles/projeto.dir/Bot.c.o
projeto: CMakeFiles/projeto.dir/build.make
projeto: CMakeFiles/projeto.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/joao/Desktop/la1PL03G03-master/projeto/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking C executable projeto"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/projeto.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/projeto.dir/build: projeto

.PHONY : CMakeFiles/projeto.dir/build

CMakeFiles/projeto.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/projeto.dir/cmake_clean.cmake
.PHONY : CMakeFiles/projeto.dir/clean

CMakeFiles/projeto.dir/depend:
	cd /home/joao/Desktop/la1PL03G03-master/projeto/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/joao/Desktop/la1PL03G03-master/projeto /home/joao/Desktop/la1PL03G03-master/projeto /home/joao/Desktop/la1PL03G03-master/projeto/cmake-build-debug /home/joao/Desktop/la1PL03G03-master/projeto/cmake-build-debug /home/joao/Desktop/la1PL03G03-master/projeto/cmake-build-debug/CMakeFiles/projeto.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/projeto.dir/depend

