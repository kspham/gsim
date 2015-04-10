cmake_minimum_required(VERSION 2.8.4)
project(gsim)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp fasta.cpp readsimulator.cpp fastq.cpp)
add_executable(gsim ${SOURCE_FILES} AluSimulation.h stringutils.h stringutils.cpp)