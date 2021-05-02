SS = Raffaele
GG = g++
CC = gcc

all: primo

primo: main.o function.o
	$(GG) main.o function.o -o App
	./App $(SS)

main.o: main.cpp
	$(GG) -c -Wall main.cpp

function.o: function.cpp
	$(GG) -c -Wall function.cpp

clean:
	rm -rf *o Ap
