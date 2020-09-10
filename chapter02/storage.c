#include <stdio.h>

/* Demonstrating that a statically declared variable can retain it's value
 * throughout the lifetime of the program. */

void increment(void) {
    static unsigned int counter = 0;
    counter++;
    printf("%d\n", counter);
}

int main(void) {
    for (int i = 0; i < 5; i++) {
        increment();
    }
    return 0;
}
