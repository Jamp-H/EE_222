fibonacci: main.o fibonacci.o libfibonacci.a
	gcc main.o -o fibonacci -L. -lfibonacci

main.o: main.c fibonacci.h dbg.h

libfibonacci.a: fibonacci.o
	ar rcs libfibonacci.a fibonacci.o

libs: libfibonacci.a

clean:
	rm -f *.o *.a fibonacci
