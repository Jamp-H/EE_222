person: main.o person.o libperson.a
	gcc main.o -o person -L. -lperson

main.o: main.c person.h dbg.h

libperson.a: person.o
	ar rcs libperson.a person.o

libs: libperson.a

clean:
	rm -f *.o *.a person
