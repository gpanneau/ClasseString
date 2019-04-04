CXXFLAGS=-Wall -Wextra -O0 -g -std=c++11

main: main.o String.o
	g++ main.o String.o -o main

main.o: main.cpp String.h
	g++ -o main.o -c main.cpp

String.o: String.cpp String.h
	g++ -o String.o -c String.cpp

clean: 
	rm main main.o