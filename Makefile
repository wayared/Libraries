SLIB = slib
DLIB = dlib

static: $(SLIB) calc.c
	gcc -c calc.c -o calc.o
	gcc -o calc calc.o -L. lib_calc.a

slib: add.c sub.c
	gcc -c add.c -o lib_add.o
	gcc -c sub.c -o lib_sub.o
	ar rcs lib_calc.a lib_add.o lib_sub.o

dlib: calc.c
	gcc -o calc calc.c ./lib_calc.so

dynamic: $(DLIB) add.c sub.c 
	gcc -shared -fPIC -o lib_calc.so add.c sub.c

clean: 
	rm -r *.o 
