# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.11

# Default target executed when no arguments are given to make.
default_target: all

.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:


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
CMAKE_SOURCE_DIR = /home/cyberemp/projects/c++/chatbot

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/cyberemp/projects/c++/chatbot

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/usr/bin/cmake -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache

.PHONY : rebuild_cache/fast

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake cache editor..."
	/usr/bin/cmake-gui -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache

.PHONY : edit_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /home/cyberemp/projects/c++/chatbot/CMakeFiles /home/cyberemp/projects/c++/chatbot/CMakeFiles/progress.marks
	$(MAKE) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /home/cyberemp/projects/c++/chatbot/CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) -f CMakeFiles/Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean

.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named chatbot

# Build rule for target.
chatbot: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 chatbot
.PHONY : chatbot

# fast build rule for target.
chatbot/fast:
	$(MAKE) -f CMakeFiles/chatbot.dir/build.make CMakeFiles/chatbot.dir/build
.PHONY : chatbot/fast

src/Agent/Agent.o: src/Agent/Agent.cpp.o

.PHONY : src/Agent/Agent.o

# target to build an object file
src/Agent/Agent.cpp.o:
	$(MAKE) -f CMakeFiles/chatbot.dir/build.make CMakeFiles/chatbot.dir/src/Agent/Agent.cpp.o
.PHONY : src/Agent/Agent.cpp.o

src/Agent/Agent.i: src/Agent/Agent.cpp.i

.PHONY : src/Agent/Agent.i

# target to preprocess a source file
src/Agent/Agent.cpp.i:
	$(MAKE) -f CMakeFiles/chatbot.dir/build.make CMakeFiles/chatbot.dir/src/Agent/Agent.cpp.i
.PHONY : src/Agent/Agent.cpp.i

src/Agent/Agent.s: src/Agent/Agent.cpp.s

.PHONY : src/Agent/Agent.s

# target to generate assembly for a file
src/Agent/Agent.cpp.s:
	$(MAKE) -f CMakeFiles/chatbot.dir/build.make CMakeFiles/chatbot.dir/src/Agent/Agent.cpp.s
.PHONY : src/Agent/Agent.cpp.s

src/Agent/ELIZA/Decomp.o: src/Agent/ELIZA/Decomp.cpp.o

.PHONY : src/Agent/ELIZA/Decomp.o

# target to build an object file
src/Agent/ELIZA/Decomp.cpp.o:
	$(MAKE) -f CMakeFiles/chatbot.dir/build.make CMakeFiles/chatbot.dir/src/Agent/ELIZA/Decomp.cpp.o
.PHONY : src/Agent/ELIZA/Decomp.cpp.o

src/Agent/ELIZA/Decomp.i: src/Agent/ELIZA/Decomp.cpp.i

.PHONY : src/Agent/ELIZA/Decomp.i

# target to preprocess a source file
src/Agent/ELIZA/Decomp.cpp.i:
	$(MAKE) -f CMakeFiles/chatbot.dir/build.make CMakeFiles/chatbot.dir/src/Agent/ELIZA/Decomp.cpp.i
.PHONY : src/Agent/ELIZA/Decomp.cpp.i

src/Agent/ELIZA/Decomp.s: src/Agent/ELIZA/Decomp.cpp.s

.PHONY : src/Agent/ELIZA/Decomp.s

# target to generate assembly for a file
src/Agent/ELIZA/Decomp.cpp.s:
	$(MAKE) -f CMakeFiles/chatbot.dir/build.make CMakeFiles/chatbot.dir/src/Agent/ELIZA/Decomp.cpp.s
.PHONY : src/Agent/ELIZA/Decomp.cpp.s

src/Agent/ELIZA/Eliza.o: src/Agent/ELIZA/Eliza.cpp.o

.PHONY : src/Agent/ELIZA/Eliza.o

# target to build an object file
src/Agent/ELIZA/Eliza.cpp.o:
	$(MAKE) -f CMakeFiles/chatbot.dir/build.make CMakeFiles/chatbot.dir/src/Agent/ELIZA/Eliza.cpp.o
.PHONY : src/Agent/ELIZA/Eliza.cpp.o

src/Agent/ELIZA/Eliza.i: src/Agent/ELIZA/Eliza.cpp.i

.PHONY : src/Agent/ELIZA/Eliza.i

# target to preprocess a source file
src/Agent/ELIZA/Eliza.cpp.i:
	$(MAKE) -f CMakeFiles/chatbot.dir/build.make CMakeFiles/chatbot.dir/src/Agent/ELIZA/Eliza.cpp.i
.PHONY : src/Agent/ELIZA/Eliza.cpp.i

src/Agent/ELIZA/Eliza.s: src/Agent/ELIZA/Eliza.cpp.s

.PHONY : src/Agent/ELIZA/Eliza.s

# target to generate assembly for a file
src/Agent/ELIZA/Eliza.cpp.s:
	$(MAKE) -f CMakeFiles/chatbot.dir/build.make CMakeFiles/chatbot.dir/src/Agent/ELIZA/Eliza.cpp.s
.PHONY : src/Agent/ELIZA/Eliza.cpp.s

src/Agent/ELIZA/Key.o: src/Agent/ELIZA/Key.cpp.o

.PHONY : src/Agent/ELIZA/Key.o

# target to build an object file
src/Agent/ELIZA/Key.cpp.o:
	$(MAKE) -f CMakeFiles/chatbot.dir/build.make CMakeFiles/chatbot.dir/src/Agent/ELIZA/Key.cpp.o
.PHONY : src/Agent/ELIZA/Key.cpp.o

src/Agent/ELIZA/Key.i: src/Agent/ELIZA/Key.cpp.i

.PHONY : src/Agent/ELIZA/Key.i

# target to preprocess a source file
src/Agent/ELIZA/Key.cpp.i:
	$(MAKE) -f CMakeFiles/chatbot.dir/build.make CMakeFiles/chatbot.dir/src/Agent/ELIZA/Key.cpp.i
.PHONY : src/Agent/ELIZA/Key.cpp.i

src/Agent/ELIZA/Key.s: src/Agent/ELIZA/Key.cpp.s

.PHONY : src/Agent/ELIZA/Key.s

# target to generate assembly for a file
src/Agent/ELIZA/Key.cpp.s:
	$(MAKE) -f CMakeFiles/chatbot.dir/build.make CMakeFiles/chatbot.dir/src/Agent/ELIZA/Key.cpp.s
.PHONY : src/Agent/ELIZA/Key.cpp.s

src/Agent/ELIZA/Mapper.o: src/Agent/ELIZA/Mapper.cpp.o

.PHONY : src/Agent/ELIZA/Mapper.o

# target to build an object file
src/Agent/ELIZA/Mapper.cpp.o:
	$(MAKE) -f CMakeFiles/chatbot.dir/build.make CMakeFiles/chatbot.dir/src/Agent/ELIZA/Mapper.cpp.o
.PHONY : src/Agent/ELIZA/Mapper.cpp.o

src/Agent/ELIZA/Mapper.i: src/Agent/ELIZA/Mapper.cpp.i

.PHONY : src/Agent/ELIZA/Mapper.i

# target to preprocess a source file
src/Agent/ELIZA/Mapper.cpp.i:
	$(MAKE) -f CMakeFiles/chatbot.dir/build.make CMakeFiles/chatbot.dir/src/Agent/ELIZA/Mapper.cpp.i
.PHONY : src/Agent/ELIZA/Mapper.cpp.i

src/Agent/ELIZA/Mapper.s: src/Agent/ELIZA/Mapper.cpp.s

.PHONY : src/Agent/ELIZA/Mapper.s

# target to generate assembly for a file
src/Agent/ELIZA/Mapper.cpp.s:
	$(MAKE) -f CMakeFiles/chatbot.dir/build.make CMakeFiles/chatbot.dir/src/Agent/ELIZA/Mapper.cpp.s
.PHONY : src/Agent/ELIZA/Mapper.cpp.s

src/Agent/ELIZA/Memory.o: src/Agent/ELIZA/Memory.cpp.o

.PHONY : src/Agent/ELIZA/Memory.o

# target to build an object file
src/Agent/ELIZA/Memory.cpp.o:
	$(MAKE) -f CMakeFiles/chatbot.dir/build.make CMakeFiles/chatbot.dir/src/Agent/ELIZA/Memory.cpp.o
.PHONY : src/Agent/ELIZA/Memory.cpp.o

src/Agent/ELIZA/Memory.i: src/Agent/ELIZA/Memory.cpp.i

.PHONY : src/Agent/ELIZA/Memory.i

# target to preprocess a source file
src/Agent/ELIZA/Memory.cpp.i:
	$(MAKE) -f CMakeFiles/chatbot.dir/build.make CMakeFiles/chatbot.dir/src/Agent/ELIZA/Memory.cpp.i
.PHONY : src/Agent/ELIZA/Memory.cpp.i

src/Agent/ELIZA/Memory.s: src/Agent/ELIZA/Memory.cpp.s

.PHONY : src/Agent/ELIZA/Memory.s

# target to generate assembly for a file
src/Agent/ELIZA/Memory.cpp.s:
	$(MAKE) -f CMakeFiles/chatbot.dir/build.make CMakeFiles/chatbot.dir/src/Agent/ELIZA/Memory.cpp.s
.PHONY : src/Agent/ELIZA/Memory.cpp.s

src/Agent/ELIZA/Reasmb.o: src/Agent/ELIZA/Reasmb.cpp.o

.PHONY : src/Agent/ELIZA/Reasmb.o

# target to build an object file
src/Agent/ELIZA/Reasmb.cpp.o:
	$(MAKE) -f CMakeFiles/chatbot.dir/build.make CMakeFiles/chatbot.dir/src/Agent/ELIZA/Reasmb.cpp.o
.PHONY : src/Agent/ELIZA/Reasmb.cpp.o

src/Agent/ELIZA/Reasmb.i: src/Agent/ELIZA/Reasmb.cpp.i

.PHONY : src/Agent/ELIZA/Reasmb.i

# target to preprocess a source file
src/Agent/ELIZA/Reasmb.cpp.i:
	$(MAKE) -f CMakeFiles/chatbot.dir/build.make CMakeFiles/chatbot.dir/src/Agent/ELIZA/Reasmb.cpp.i
.PHONY : src/Agent/ELIZA/Reasmb.cpp.i

src/Agent/ELIZA/Reasmb.s: src/Agent/ELIZA/Reasmb.cpp.s

.PHONY : src/Agent/ELIZA/Reasmb.s

# target to generate assembly for a file
src/Agent/ELIZA/Reasmb.cpp.s:
	$(MAKE) -f CMakeFiles/chatbot.dir/build.make CMakeFiles/chatbot.dir/src/Agent/ELIZA/Reasmb.cpp.s
.PHONY : src/Agent/ELIZA/Reasmb.cpp.s

src/Agent/ELIZA/Script.o: src/Agent/ELIZA/Script.cpp.o

.PHONY : src/Agent/ELIZA/Script.o

# target to build an object file
src/Agent/ELIZA/Script.cpp.o:
	$(MAKE) -f CMakeFiles/chatbot.dir/build.make CMakeFiles/chatbot.dir/src/Agent/ELIZA/Script.cpp.o
.PHONY : src/Agent/ELIZA/Script.cpp.o

src/Agent/ELIZA/Script.i: src/Agent/ELIZA/Script.cpp.i

.PHONY : src/Agent/ELIZA/Script.i

# target to preprocess a source file
src/Agent/ELIZA/Script.cpp.i:
	$(MAKE) -f CMakeFiles/chatbot.dir/build.make CMakeFiles/chatbot.dir/src/Agent/ELIZA/Script.cpp.i
.PHONY : src/Agent/ELIZA/Script.cpp.i

src/Agent/ELIZA/Script.s: src/Agent/ELIZA/Script.cpp.s

.PHONY : src/Agent/ELIZA/Script.s

# target to generate assembly for a file
src/Agent/ELIZA/Script.cpp.s:
	$(MAKE) -f CMakeFiles/chatbot.dir/build.make CMakeFiles/chatbot.dir/src/Agent/ELIZA/Script.cpp.s
.PHONY : src/Agent/ELIZA/Script.cpp.s

src/Agent/ELIZA/Synonyms.o: src/Agent/ELIZA/Synonyms.cpp.o

.PHONY : src/Agent/ELIZA/Synonyms.o

# target to build an object file
src/Agent/ELIZA/Synonyms.cpp.o:
	$(MAKE) -f CMakeFiles/chatbot.dir/build.make CMakeFiles/chatbot.dir/src/Agent/ELIZA/Synonyms.cpp.o
.PHONY : src/Agent/ELIZA/Synonyms.cpp.o

src/Agent/ELIZA/Synonyms.i: src/Agent/ELIZA/Synonyms.cpp.i

.PHONY : src/Agent/ELIZA/Synonyms.i

# target to preprocess a source file
src/Agent/ELIZA/Synonyms.cpp.i:
	$(MAKE) -f CMakeFiles/chatbot.dir/build.make CMakeFiles/chatbot.dir/src/Agent/ELIZA/Synonyms.cpp.i
.PHONY : src/Agent/ELIZA/Synonyms.cpp.i

src/Agent/ELIZA/Synonyms.s: src/Agent/ELIZA/Synonyms.cpp.s

.PHONY : src/Agent/ELIZA/Synonyms.s

# target to generate assembly for a file
src/Agent/ELIZA/Synonyms.cpp.s:
	$(MAKE) -f CMakeFiles/chatbot.dir/build.make CMakeFiles/chatbot.dir/src/Agent/ELIZA/Synonyms.cpp.s
.PHONY : src/Agent/ELIZA/Synonyms.cpp.s

src/Agent/ELIZA/Thesaurus.o: src/Agent/ELIZA/Thesaurus.cpp.o

.PHONY : src/Agent/ELIZA/Thesaurus.o

# target to build an object file
src/Agent/ELIZA/Thesaurus.cpp.o:
	$(MAKE) -f CMakeFiles/chatbot.dir/build.make CMakeFiles/chatbot.dir/src/Agent/ELIZA/Thesaurus.cpp.o
.PHONY : src/Agent/ELIZA/Thesaurus.cpp.o

src/Agent/ELIZA/Thesaurus.i: src/Agent/ELIZA/Thesaurus.cpp.i

.PHONY : src/Agent/ELIZA/Thesaurus.i

# target to preprocess a source file
src/Agent/ELIZA/Thesaurus.cpp.i:
	$(MAKE) -f CMakeFiles/chatbot.dir/build.make CMakeFiles/chatbot.dir/src/Agent/ELIZA/Thesaurus.cpp.i
.PHONY : src/Agent/ELIZA/Thesaurus.cpp.i

src/Agent/ELIZA/Thesaurus.s: src/Agent/ELIZA/Thesaurus.cpp.s

.PHONY : src/Agent/ELIZA/Thesaurus.s

# target to generate assembly for a file
src/Agent/ELIZA/Thesaurus.cpp.s:
	$(MAKE) -f CMakeFiles/chatbot.dir/build.make CMakeFiles/chatbot.dir/src/Agent/ELIZA/Thesaurus.cpp.s
.PHONY : src/Agent/ELIZA/Thesaurus.cpp.s

src/Agent/Parser.o: src/Agent/Parser.cpp.o

.PHONY : src/Agent/Parser.o

# target to build an object file
src/Agent/Parser.cpp.o:
	$(MAKE) -f CMakeFiles/chatbot.dir/build.make CMakeFiles/chatbot.dir/src/Agent/Parser.cpp.o
.PHONY : src/Agent/Parser.cpp.o

src/Agent/Parser.i: src/Agent/Parser.cpp.i

.PHONY : src/Agent/Parser.i

# target to preprocess a source file
src/Agent/Parser.cpp.i:
	$(MAKE) -f CMakeFiles/chatbot.dir/build.make CMakeFiles/chatbot.dir/src/Agent/Parser.cpp.i
.PHONY : src/Agent/Parser.cpp.i

src/Agent/Parser.s: src/Agent/Parser.cpp.s

.PHONY : src/Agent/Parser.s

# target to generate assembly for a file
src/Agent/Parser.cpp.s:
	$(MAKE) -f CMakeFiles/chatbot.dir/build.make CMakeFiles/chatbot.dir/src/Agent/Parser.cpp.s
.PHONY : src/Agent/Parser.cpp.s

src/Client/Console/TerminalClient.o: src/Client/Console/TerminalClient.cpp.o

.PHONY : src/Client/Console/TerminalClient.o

# target to build an object file
src/Client/Console/TerminalClient.cpp.o:
	$(MAKE) -f CMakeFiles/chatbot.dir/build.make CMakeFiles/chatbot.dir/src/Client/Console/TerminalClient.cpp.o
.PHONY : src/Client/Console/TerminalClient.cpp.o

src/Client/Console/TerminalClient.i: src/Client/Console/TerminalClient.cpp.i

.PHONY : src/Client/Console/TerminalClient.i

# target to preprocess a source file
src/Client/Console/TerminalClient.cpp.i:
	$(MAKE) -f CMakeFiles/chatbot.dir/build.make CMakeFiles/chatbot.dir/src/Client/Console/TerminalClient.cpp.i
.PHONY : src/Client/Console/TerminalClient.cpp.i

src/Client/Console/TerminalClient.s: src/Client/Console/TerminalClient.cpp.s

.PHONY : src/Client/Console/TerminalClient.s

# target to generate assembly for a file
src/Client/Console/TerminalClient.cpp.s:
	$(MAKE) -f CMakeFiles/chatbot.dir/build.make CMakeFiles/chatbot.dir/src/Client/Console/TerminalClient.cpp.s
.PHONY : src/Client/Console/TerminalClient.cpp.s

src/Client/GUI/GUIclient.o: src/Client/GUI/GUIclient.cpp.o

.PHONY : src/Client/GUI/GUIclient.o

# target to build an object file
src/Client/GUI/GUIclient.cpp.o:
	$(MAKE) -f CMakeFiles/chatbot.dir/build.make CMakeFiles/chatbot.dir/src/Client/GUI/GUIclient.cpp.o
.PHONY : src/Client/GUI/GUIclient.cpp.o

src/Client/GUI/GUIclient.i: src/Client/GUI/GUIclient.cpp.i

.PHONY : src/Client/GUI/GUIclient.i

# target to preprocess a source file
src/Client/GUI/GUIclient.cpp.i:
	$(MAKE) -f CMakeFiles/chatbot.dir/build.make CMakeFiles/chatbot.dir/src/Client/GUI/GUIclient.cpp.i
.PHONY : src/Client/GUI/GUIclient.cpp.i

src/Client/GUI/GUIclient.s: src/Client/GUI/GUIclient.cpp.s

.PHONY : src/Client/GUI/GUIclient.s

# target to generate assembly for a file
src/Client/GUI/GUIclient.cpp.s:
	$(MAKE) -f CMakeFiles/chatbot.dir/build.make CMakeFiles/chatbot.dir/src/Client/GUI/GUIclient.cpp.s
.PHONY : src/Client/GUI/GUIclient.cpp.s

src/Client/Web/WebClient.o: src/Client/Web/WebClient.cpp.o

.PHONY : src/Client/Web/WebClient.o

# target to build an object file
src/Client/Web/WebClient.cpp.o:
	$(MAKE) -f CMakeFiles/chatbot.dir/build.make CMakeFiles/chatbot.dir/src/Client/Web/WebClient.cpp.o
.PHONY : src/Client/Web/WebClient.cpp.o

src/Client/Web/WebClient.i: src/Client/Web/WebClient.cpp.i

.PHONY : src/Client/Web/WebClient.i

# target to preprocess a source file
src/Client/Web/WebClient.cpp.i:
	$(MAKE) -f CMakeFiles/chatbot.dir/build.make CMakeFiles/chatbot.dir/src/Client/Web/WebClient.cpp.i
.PHONY : src/Client/Web/WebClient.cpp.i

src/Client/Web/WebClient.s: src/Client/Web/WebClient.cpp.s

.PHONY : src/Client/Web/WebClient.s

# target to generate assembly for a file
src/Client/Web/WebClient.cpp.s:
	$(MAKE) -f CMakeFiles/chatbot.dir/build.make CMakeFiles/chatbot.dir/src/Client/Web/WebClient.cpp.s
.PHONY : src/Client/Web/WebClient.cpp.s

src/utils/String.o: src/utils/String.cpp.o

.PHONY : src/utils/String.o

# target to build an object file
src/utils/String.cpp.o:
	$(MAKE) -f CMakeFiles/chatbot.dir/build.make CMakeFiles/chatbot.dir/src/utils/String.cpp.o
.PHONY : src/utils/String.cpp.o

src/utils/String.i: src/utils/String.cpp.i

.PHONY : src/utils/String.i

# target to preprocess a source file
src/utils/String.cpp.i:
	$(MAKE) -f CMakeFiles/chatbot.dir/build.make CMakeFiles/chatbot.dir/src/utils/String.cpp.i
.PHONY : src/utils/String.cpp.i

src/utils/String.s: src/utils/String.cpp.s

.PHONY : src/utils/String.s

# target to generate assembly for a file
src/utils/String.cpp.s:
	$(MAKE) -f CMakeFiles/chatbot.dir/build.make CMakeFiles/chatbot.dir/src/utils/String.cpp.s
.PHONY : src/utils/String.cpp.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... rebuild_cache"
	@echo "... chatbot"
	@echo "... edit_cache"
	@echo "... src/Agent/Agent.o"
	@echo "... src/Agent/Agent.i"
	@echo "... src/Agent/Agent.s"
	@echo "... src/Agent/ELIZA/Decomp.o"
	@echo "... src/Agent/ELIZA/Decomp.i"
	@echo "... src/Agent/ELIZA/Decomp.s"
	@echo "... src/Agent/ELIZA/Eliza.o"
	@echo "... src/Agent/ELIZA/Eliza.i"
	@echo "... src/Agent/ELIZA/Eliza.s"
	@echo "... src/Agent/ELIZA/Key.o"
	@echo "... src/Agent/ELIZA/Key.i"
	@echo "... src/Agent/ELIZA/Key.s"
	@echo "... src/Agent/ELIZA/Mapper.o"
	@echo "... src/Agent/ELIZA/Mapper.i"
	@echo "... src/Agent/ELIZA/Mapper.s"
	@echo "... src/Agent/ELIZA/Memory.o"
	@echo "... src/Agent/ELIZA/Memory.i"
	@echo "... src/Agent/ELIZA/Memory.s"
	@echo "... src/Agent/ELIZA/Reasmb.o"
	@echo "... src/Agent/ELIZA/Reasmb.i"
	@echo "... src/Agent/ELIZA/Reasmb.s"
	@echo "... src/Agent/ELIZA/Script.o"
	@echo "... src/Agent/ELIZA/Script.i"
	@echo "... src/Agent/ELIZA/Script.s"
	@echo "... src/Agent/ELIZA/Synonyms.o"
	@echo "... src/Agent/ELIZA/Synonyms.i"
	@echo "... src/Agent/ELIZA/Synonyms.s"
	@echo "... src/Agent/ELIZA/Thesaurus.o"
	@echo "... src/Agent/ELIZA/Thesaurus.i"
	@echo "... src/Agent/ELIZA/Thesaurus.s"
	@echo "... src/Agent/Parser.o"
	@echo "... src/Agent/Parser.i"
	@echo "... src/Agent/Parser.s"
	@echo "... src/Client/Console/TerminalClient.o"
	@echo "... src/Client/Console/TerminalClient.i"
	@echo "... src/Client/Console/TerminalClient.s"
	@echo "... src/Client/GUI/GUIclient.o"
	@echo "... src/Client/GUI/GUIclient.i"
	@echo "... src/Client/GUI/GUIclient.s"
	@echo "... src/Client/Web/WebClient.o"
	@echo "... src/Client/Web/WebClient.i"
	@echo "... src/Client/Web/WebClient.s"
	@echo "... src/utils/String.o"
	@echo "... src/utils/String.i"
	@echo "... src/utils/String.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system

