CC = gcc
CFLAGS = -ansi -Wall -pedantic -I include
RM = rm -f

MAIN = ./bin/main

file_writer:
	$(CC) $(CFLAGS) -o bin/file_writer.o -c src/file_writer_api/*.c
	@echo "Built file_writer.o"

free_memory_api:
	$(CC) $(CFLAGS) -o bin/free_memory_api.o -c src/free_memory_api/*.c
	@echo "Built free_memory_api.o"

main:
	$(CC) $(CFLAGS) -o bin/main.o -c src/main.c
	$(CC) $(CFLAGS) -o bin/main bin/main.o bin/file_writer.o bin/free_memory_api.o
	@echo "Finish building the project"

run:
	./$(MAIN)

clean:
	$(RM) ./bin/*

.PHONY: all clean run 