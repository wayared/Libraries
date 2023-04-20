// How to use Static Libraries in C
// 1. Implement you functions in .c archives ( add.c | sub.c)
// 2. Create object files according to the .c files (gcc -c add.c -o lib_add.c)
// (gcc -c sub.c -o lib_sub.c)
// 3. Create librarie ar rcs lib_calc.a lib_add.c lib_sub.c
// 4. Create object file for our main function (gcc -c calc.c -o calc.o)
// 5. Link the main function to the static librarie (gcc -o calc calc.o -L. lib_calc.a)
// 
//
// How to use Dynamic Libraries in C
// to create dynamic librarie (gcc -shared -fPIC -o lib_calc.so add.c sub.c)
// to use dynamic librarie (gcc -o calc calc.c ./lib_calc.so)
