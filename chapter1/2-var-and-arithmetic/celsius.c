#include <stdio.h>

int main() {
    float celsius, fahr;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    printf(" °C | °F\n");

    while ( celsius <= upper ) {
        fahr = ( celsius * (9.0 / 5.0) ) + 32.0;
        printf("%3.0f | %6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
}