CC=g++
CFLAGS=-std=c++11 -g -Wall 

all: driver draw


simplecanvas.o: simplecanvas/simplecanvas.h simplecanvas/simplecanvas.cpp
	$(CC) $(CFLAGS) -c simplecanvas/simplecanvas.cpp

tree.o: tree.cpp tree.h
	$(CC) $(CFLAGS) -c tree.cpp

driver: tree.o driver.cpp simplecanvas.o
	$(CC) $(CFLAGS) -o driver driver.cpp tree.o simplecanvas.o

draw: tree.o draw.cpp simplecanvas.o
	$(CC) $(CFLAGS) -o draw draw.cpp tree.o simplecanvas.o

clean:
	rm *.o driver draw