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
CMAKE_SOURCE_DIR = /home/joao/CLionProjects/Bot

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/joao/CLionProjects/Bot/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Bot.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Bot.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Bot.dir/flags.make

CMakeFiles/Bot.dir/main.c.o: CMakeFiles/Bot.dir/flags.make
CMakeFiles/Bot.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/joao/CLionProjects/Bot/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Bot.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Bot.dir/main.c.o   -c /home/joao/CLionProjects/Bot/main.c

CMakeFiles/Bot.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Bot.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/joao/CLionProjects/Bot/main.c > CMakeFiles/Bot.dir/main.c.i

CMakeFiles/Bot.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Bot.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/joao/CLionProjects/Bot/main.c -o CMakeFiles/Bot.dir/main.c.s

CMakeFiles/Bot.dir/Camada_de_dados.c.o: CMakeFiles/Bot.dir/flags.make
CMakeFiles/Bot.dir/Camada_de_dados.c.o: ../Camada\ de\ dados.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/joao/CLionProjects/Bot/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/Bot.dir/Camada_de_dados.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Bot.dir/Camada_de_dados.c.o   -c "/home/joao/CLionProjects/Bot/Camada de dados.c"

CMakeFiles/Bot.dir/Camada_de_dados.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Bot.dir/Camada_de_dados.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/home/joao/CLionProjects/Bot/Camada de dados.c" > CMakeFiles/Bot.dir/Camada_de_dados.c.i

CMakeFiles/Bot.dir/Camada_de_dados.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Bot.dir/Camada_de_dados.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/home/joao/CLionProjects/Bot/Camada de dados.c" -o CMakeFiles/Bot.dir/Camada_de_dados.c.s

CMakeFiles/Bot.dir/Listas.c.o: CMakeFiles/Bot.dir/flags.make
CMakeFiles/Bot.dir/Listas.c.o: ../Listas.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/joao/CLionProjects/Bot/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/Bot.dir/Listas.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Bot.dir/Listas.c.o   -c /home/joao/CLionProjects/Bot/Listas.c

CMakeFiles/Bot.dir/Listas.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Bot.dir/Listas.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/joao/CLionProjects/Bot/Listas.c > CMakeFiles/Bot.dir/Listas.c.i

CMakeFiles/Bot.dir/Listas.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Bot.dir/Listas.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/joao/CLionProjects/Bot/Listas.c -o CMakeFiles/Bot.dir/Listas.c.s

CMakeFiles/Bot.dir/logica_pograma.c.o: CMakeFiles/Bot.dir/flags.make
CMakeFiles/Bot.dir/logica_pograma.c.o: ../logica\ pograma.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/joao/CLionProjects/Bot/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/Bot.dir/logica_pograma.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Bot.dir/logica_pograma.c.o   -c "/home/joao/CLionProjects/Bot/logica pograma.c"

CMakeFiles/Bot.dir/logica_pograma.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Bot.dir/logica_pograma.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/home/joao/CLionProjects/Bot/logica pograma.c" > CMakeFiles/Bot.dir/logica_pograma.c.i

CMakeFiles/Bot.dir/logica_pograma.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Bot.dir/logica_pograma.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/home/joao/CLionProjects/Bot/logica pograma.c" -o CMakeFiles/Bot.dir/logica_pograma.c.s

# Object files for target Bot
Bot_OBJECTS = \
"CMakeFiles/Bot.dir/main.c.o" \
"CMakeFiles/Bot.dir/Camada_de_dados.c.o" \
"CMakeFiles/Bot.dir/Listas.c.o" \
"CMakeFiles/Bot.dir/logica_pograma.c.o"

# External object files for target Bot
Bot_EXTERNAL_OBJECTS =

Bot: CMakeFiles/Bot.dir/main.c.o
Bot: CMakeFiles/Bot.dir/Camada_de_dados.c.o
Bot: CMakeFiles/Bot.dir/Listas.c.o
Bot: CMakeFiles/Bot.dir/logica_pograma.c.o
Bot: CMakeFiles/Bot.dir/build.make
Bot: CMakeFiles/Bot.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/joao/CLionProjects/Bot/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking C executable Bot"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Bot.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Bot.dir/build: Bot

.PHONY : CMakeFiles/Bot.dir/build

CMakeFiles/Bot.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Bot.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Bot.dir/clean

CMakeFiles/Bot.dir/depend:
	cd /home/joao/CLionProjects/Bot/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/joao/CLionProjects/Bot /home/joao/CLionProjects/Bot /home/joao/CLionProjects/Bot/cmake-build-debug /home/joao/CLionProjects/Bot/cmake-build-debug /home/joao/CLionProjects/Bot/cmake-build-debug/CMakeFiles/Bot.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Bot.dir/depend

