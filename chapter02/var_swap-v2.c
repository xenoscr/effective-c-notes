#include <stdio.h>

/* This version changes the function to use call by reference (pass-by-reference) and
 * resolves the issues demonstrated by the first example. */

void swap(int *pa, int *pb) { // Since the addresses of "a" and "b" are now being passed to the swap function, pointers must now be used.
    int t = *pa;
    *pa = *pb;
    *pb = t;
    printf("swap: a = %d, b = %d\n", *pa, *pb); // "a" and "b" have been swapped inside the function.
}

int main(void) {
    int a = 21;
    int b = 17;
    
    swap(&a, &b); // The "&" unary operator is the "address-of" operator. This indicates that the address of a and b are being passed to the swap function.
    printf("main: a = %d, b = %d\n", a, b); // "a" and "b" outside of the function swapped.
    return 0;
}
