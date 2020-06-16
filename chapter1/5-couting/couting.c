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

int main() {
    int c, nl;

    nl = 0;
    while ( (c = getchar()) != EOF )
        if ( c == '\n' )
            ++nl;
    
    printf("%d\n", nl);
}