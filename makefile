include utils/makefilemessages

CXX = g++
CXXFLAGS := -O3 -std=c++11

SOURCES := $(wildcard *.cpp)
BINF = bin/

.PHONY: all help flags

default: help

all: lint build run

lint:
	$(call infomsg, "Running code through flint++ linter!");
	@flint++ src

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
	@echo "To lint the code, run 'make lint'";
	@echo "To build the application, run 'make build'";
	@echo "To run the built binary, run 'make run'";
	@echo "To lint the code, build the binary, and run the result, run 'make all'";
	$(call reset);

flags:
	$(call infomsg, 'SOURCES:         $(SOURCES)');
	$(call infomsg, 'CXX:             $(CXX)');
	$(call infomsg, 'CXXFLAGS:        $(CXXFLAGS)');
	$(call infomsg, 'BINF:            $(BINF)');
