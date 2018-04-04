pointers: main.o pointers.o libpointers.a
	gcc main.o -o pointers -L. -lpointers

pointers.o: main.c pointers.h

libpointers.a: pointers.o
	ar rcs libpointers.a pointers.o

libs: libpointers.a

clean:
	rm -f *.o *.a pointers
