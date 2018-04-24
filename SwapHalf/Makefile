swaphalf: main.o swaphalf.o libswaphalf.a
	gcc main.o -o swaphalf -L. -lswaphalf

main.o: main.c swaphalf.h

libswaphalf.a: swaphalf.o
	ar rcs libswaphalf.a swaphalf.o

libs: libswaphalf.a

clean:
	rm -f *.o *.a swaphalf
