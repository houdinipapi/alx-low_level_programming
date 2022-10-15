File: 0-preprocessor

gcc -E $CFILE > c
	This script runs the C file through the preprocessor and saves the result into another file.
	*The C file name has been saved in the variable $CFILE
	*The output has been saved in the file c.


File: 1-compiler

gcc -c $CFILE
	-This script compiles a C file but does not link it
	*In this script, the C file name has been saved int he variable $CFILE.
	*The output file has been named the same as the C file, but with the extension .o instead of .c
	For example, if the C file is main.c, the output will be main.o


File: 2-assembler

gcc -S $CFILE
	-This command genrates the assembly code of a C code and saves it in an output file.
	*The C file name is saved in the variable $CFILE
	*The output file is named the same as the C file, however it has an extension of .s instead of .c
	For example, if the C file is main.c, the ooutput file will be main.s


File: 3-name

gcc $CFILE -o cisfun
	-This script compiles a C file and creates an executable named cisfun.
	*The C file name has been saved in the variable $CFILE


File: 4-puts.c

#include <stdio.h>
/**
*main - main block
*
*/
int main(void)
{
	puts("\"Programming is like building a multilingual puzzle");
	return (0);
}

Line 22 - 33 is a C program that prints exactly "Programming is like building a multilingual puzzle and then ollowed by a new line. The function that has been used is "puts" and the program has ended with a value of 0.


File: 5-printf.c

#include <stdio.h>
/**
*main - main block
*
*Rerturn: 0
*
*/
int main(void)
{
	printf("with proper grammar, but the outcome is a piece of art,\n");
	return (0;)
}

Line 37 - 48 is a C program that prints exactly "with proper grammar, but the outcome is a piece of art," followed by a new line. The function used for this program is printf and not puts. At the end, the program returns 0. When the program is compiled, it will not give a warning especially when the oprion of -Wall gcc has been used.


File: 6-size.c

#include <stdio.h>
/**
*main - prints the size of various types
*Return: 0 if exited properly, non-zero otherwise
*/
int main(void)
{
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
	printf("Size of a float: %d byte(s)\n", sizeof(float));
	return (0);
}
Line 52 - 66 is a C program that prints the size of various types on the computer that it is compiled and ran on. The program returns 0 at the end.


File: 100-intel

gcc -S -masm=intel $CFILE
	-This script genrates the asembly code (Intel syntax) of a C code and saves it in an output file.
	*The C file name has been saved in the variable $CFILE.
	*The output file should be named the same as the C file, but with an extension .s instead of .c
	For example, if the C file is main.c, the output should be main.s


File: 101-quote.c

#include <stdio.h>
#include <unistd.h>
/**
*main - prints exactly "and that piece of art is useful"
*- Dora Korpar, 2015-10-19",
*followed by a new line, to the standard error.
*Return: Always 0 (Success)
*/
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
Lines 88 - 100 is a C program that prints exactly "and that piece of art is useful" - Dora Korpar, 2015-10-19" followed by a new line, to the standard error. No permission to use any functions listed in the NAME section of the man (3) printf or man (3) puts. When the program is ran, it is expected to return 1. The program is also expected to compile without any warnings when using the -Wall gcc option.
