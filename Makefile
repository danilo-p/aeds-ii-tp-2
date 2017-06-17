SHELL:=/bin/bash -O globstar

ROOT_DIR=$(pwd)
OBJ_DIR=obj
BIN_DIR=bin
SRC_DIR=src
DOCS_DIR=docs
IO_DIR=io

SRC=$(wildcard $(SRC_DIR)/**/*.c)

CFLAGS += -Wall -Werror -Wextra -lm

.PHONY: all docs

all: setup main

main: main.o
	gcc $(SRC) $(OBJ_DIR)/main.o -o $(BIN_DIR)/main $(CFLAGS)

main.o:
	gcc -c $(SRC_DIR)/main.c -o $(OBJ_DIR)/main.o $(CFLAGS)

setup:
	mkdir -p $(BIN_DIR) $(OBJ_DIR)

run:
	exec $(BIN_DIR)/main $(IO_DIR)/input.txt $(IO_DIR)/output.txt

runtime:
	time make run

clean:
	rm -f $(OBJ_DIR)/* $(BIN_DIR)/*

docs:
	doxygen && cd $(DOCS_DIR)/latex && make

input:
	exec $(IO_DIR)/random.sh $(IO_DIR)/input.txt

valgrind:
	valgrind --track-origins=yes --leak-check=full --show-leak-kinds=all ./$(BIN_DIR)/main