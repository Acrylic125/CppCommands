cmake_minimum_required(VERSION 3.19)
project(CppCommands)

set(CMAKE_CXX_STANDARD 14)

add_library(CppCommands SHARED library.cpp library.h command.h executor/CommandExecutor.cpp executor/CommandExecutor.h impl/simplecommands.cpp impl/simplecommands.h)