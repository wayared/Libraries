SLIB = lib

calc: $(SLIB) calc.c
	gcc -c calc.c -o calc.o
	gcc -o calc calc.o -L. lib_calc.a

lib: add.c sub.c
	gcc -c add.c -o lib_add.o
	gcc -c sub.c -o lib_sub.o
	ar rcs lib_calc.a lib_add.o lib_sub.o
