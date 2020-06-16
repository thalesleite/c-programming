#include <stdio.h>

// copy input output - 1st version
// int main(void) {
//     int c;

//     c = getchar();
//     // EOF is an int defined in <stdio.h>
//     while ( c != EOF ) {
//         putchar(c);
//         c = getchar();
//     }

//     return 0;
// }

// copy input output - 2st version
int main() {
    int c;

    while ( (c = getchar()) != EOF ) {
        if ( c == 0 || c == 1 ) {
            printf("%d is 0 or 1\n", c);
        }

        putchar(c);
    }

    return 0;
}