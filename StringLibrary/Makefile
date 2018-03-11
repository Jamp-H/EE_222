myString: string_main.o my_String.o libmy_String.a
	gcc string_main.o -o my_String -L. -lmy_String

string_main.o: string_main.c my_String.h

libmy_String.a: my_String.o
	ar rcs libmy_String.a my_String.o

libs: libmy_String.a

clean:
	rm -f *.o *.a myString
