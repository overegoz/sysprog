# Makefile

CC=gcc
CFLAGS=
OBJS=main.o addnum.o
EXE=add.exe
LIBS=

all: $(EXE)

$(EXE): $(OBJS)
	$(CC) $(CFLAGS) -o $(EXE) $(OBJS) $(LIBS)

main.o: main.c
	$(CC) $(CFLAGS) -c main.c

addnum.o: addnum.c
	$(CC) $(CFLAGS) -c addnum.c

clean:
	rm -f $(OBJS) $(EXE) core

