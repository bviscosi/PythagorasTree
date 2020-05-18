CC = g++

CFLAGS = -std=c++14 -c -g -Og -Wall -Werror -pedantic

OBJS = PTree.o main.o

LIBS = -lsfml-graphics -lsfml-window -lsfml-system

DEBUG = -g

EXE = ps2



all:  $(OBJS)

	$(CC)  $(OBJS) -o  $(EXE)  $(LIBS)



%.o: %.cpp  $(DEPS)

	$(CC)  $(CFLAGS) -o  $@ $<



clean:

	rm $(OBJS) $(EXE)