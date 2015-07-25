include utils/makefilemessages

CXX = g++
CXXFLAGS := -O3 -std=c++11

SOURCES := $(wildcard *.cpp)
BINF = bin/

.PHONY: all help flags

default: help

all: build run

build:
	$(call infomsg, "Building application.cpp!");
	@$(CXX) $(CXXFLAGS) application.cpp -o $(BINF)helloworld
	$(call infomsg, "Finished building $(BINF)helloworld");

run:
	@./$(BINF)helloworld

help:
	$(call green);
	$(call bold);
	@echo "JT's Hello World Makefile!";
	$(call blue);
	@echo "(An attempt at fancy task runner stuff with make!)";
	@echo "";
	$(call violet);
	@echo "To build the application, run 'make build'";
	@echo "To run the build binary, run 'make run'";
	@echo "To both build the binary and run it, run 'make all'";
	$(call reset);

flags:
	$(call infomsg, 'SOURCES:         $(SOURCES)');
	$(call infomsg, 'CXX:             $(CXX)');
	$(call infomsg, 'CXXFLAGS:        $(CXXFLAGS)');
	$(call infomsg, 'BINF:            $(BINF)');
