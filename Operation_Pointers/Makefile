op: main.o op.o libop.a
	gcc main.o -o op -L. -lop

main.o: main.c op.h

libop.a: op.o
	ar rcs libop.a op.o

libs: libop.a

clean:
	rm -f *.o *.a op
