CC=g++
CFLAGS=-std=c++11 -g -Wall 

all: driver

tree.o: tree.cpp tree.h
	$(CC) $(CFLAGS) -c tree.cpp

driver: tree.o driver.cpp
	$(CC) $(CFLAGS) -o driver driver.cpp tree.o

clean:
	rm *.o driver