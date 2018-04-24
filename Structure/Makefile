Structures: main.o Structures.o libStructurest.a
	gcc main.o -o Structures -L. -lStructures

main.o: main.c Structures.h dbg.h

libStructures.a: Structures.o
	ar rcs libStructures.a Structures.o

libs: libStructures.a

clean:
	rm -f *.o *.a Structures
