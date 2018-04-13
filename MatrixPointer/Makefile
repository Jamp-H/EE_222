matrix: main.o matrix.o libmatrix.a
	gcc main.o -o matrix -L. -lmatrix

matrix.o: main.c matrix.h

libmatrix.a: matrix.o
	ar rcs libmatrix.a matrix.o

libs: libmatrix.a

clean:
	rm -f *.o *.a matrix
