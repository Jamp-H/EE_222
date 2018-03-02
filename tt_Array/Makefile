tt: main.o tt.o libtt.a
	gcc main.o -o tt -L. -ltt

main.o: main.c tt.h

libtt.a: tt.o
	ar rcs libtt.a tt.o

libs: libtt.a

clean:
	rm -f *.o *.a tt
