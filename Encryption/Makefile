encrypt: main.o encrypt.o libencrypt.a
	gcc main.o -o encrypt -L. -lencrypt

main.o: main.c encrypt.h dbg.h

libencrypt.a: encrypt.o
	ar rcs libencrypt.a encrypt.o

libs: libencrypt.a

clean:
	rm -f *.o *.a encrypt
