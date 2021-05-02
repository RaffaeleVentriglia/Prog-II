CC = g++

CFLAGS = -c -Wall

all: Swap

Swap: main.o function.o
	$(CC) main.o function.o -o Swap
	./Swap

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

function.o: function.cpp
	$(CC) $(CFLAGS) function.cpp

clean:
	rm -rf *o Swap

esegui: ./Swap
