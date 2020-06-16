# c-programming

# How to run C code:

First make sure you correct your program:

#include <stdio.h>

int main(void) {
   printf("Hello, world!\n"); //printf instead of pintf
   return 0;
}

Save the file as HelloWorld.c and type in the terminal:

gcc -o HelloWorld HelloWorld.c
Afterwards just run the executable like this:

./HelloWorld
You should be seeing Hello World!
