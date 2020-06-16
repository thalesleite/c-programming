#include <stdio.h>

// count characters in input - 1st version
// int main() {
//     long nc = 0;

//     while ( getchar() != EOF ) {
//         ++nc;
//         printf("%ld\n", nc);
//     }
// }

// count characters in input - 2nd version
// int main() {
//     double nc;

//     for (nc = 0; getchar() != EOF; ++nc)
//         printf("%.0f\n", nc); 
// }

// count characters in input - 3nd version
// int main() {
//     int c, nl;

//     nl = 0;
//     while ( (c = getchar()) != EOF )
//         if ( c == '\n' )
//             ++nl;
    
//     printf("%d\n", nl);
// }

#define IN 1
#define OUT 0

int main() {
    int c, nl, nw, nc, state;

    state = OUT;
    nl = nw = nc = 0;

    while ( (c = getchar()) != EOF ) {
        ++nc;

        if ( c == '\n' )
            ++nl;

        if ( c == ' ' || c == '\n' || c == '\t' ) {
            state = OUT;
        } else if ( state == OUT ) {
            state = IN;
            ++nw;
        }
    }

    printf("%d %d %d\n", nl, nw, nc);
}