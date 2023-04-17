// How to use Static Libraries in C
// 1. Implement you functions in .c archives ( add.c | sub.c)
// 2. Create object files according to the .c files (gcc -c add.c -o lib_add.c)
// (gcc -c sub.c -o lib_sub.c)
// 3. Create librarie ar rcs lib_calc.a lib_add.c lib_sub.c
