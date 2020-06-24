# c-programming

# How to run C code:

- First make sure you correct your program:

#include <stdio.h>

int main(void) {
   printf("Hello, world!\n"); //printf instead of pintf
   return 0;
}

- Save the file as HelloWorld.c and type in the terminal:

gcc -o HelloWorld HelloWorld.c


- Afterwards just run the executable like this:

./HelloWorld
You should be seeing Hello World!

- EOF command:
Ctrl + D (MAC)

- PRINTF() FUNCTION IN C LANGUAGE:
In C programming language, printf() function is used to print the “character, string, float, integer, octal and hexadecimal values” onto the output screen.

We use printf() function with %d format specifier to display the value of an integer variable.

 - %c is used to display character;
 - %f for float variable;
 - %s for string variable;
 - %lf for double; 
 - %x for hexadecimal variable.
 
To generate a newline,we use “\n” in C printf() statement.
