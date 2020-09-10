#include <stdio.h>

/* This is an example that demonstrates that variables are not
 * being passed by reference (call-by-reference). C is a pass by value
 * (call-by-value) language.
 * 
 * The values of "a" and "b" are swapped only within the scope of 
 * the "swap" function. */

void swap(int a, int b) {
    int t = a;
    a = b;
    b = t;
    printf("swap: a = %d, b = %d\n", a, b); // "a" and "b" have been swapped inside the function.
}

int main(void) {
    int a = 21;
    int b = 17;
    
    swap(a, b);
    printf("main: a = %d, b = %d\n", a, b); // "a" and "b" outside of the function are unchanged.
    return 0;
}
