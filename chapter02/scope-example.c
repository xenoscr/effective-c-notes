#include <stdio.h>

/* This program is demonstrating how scope works in C. */

int j;                              // file scope begins

void f(int i) {                     // Block scope of i begins.
    int j = 1;                      // block scope of j begins.
    i++;                            // i refers to the function parameter.
    for (int i = 0; i < 2; i++) {   // block scope of local-loop i begins.
        int j = 2;                  // block scope of inner j begins; hides outer j
        printf("%d\n", j);          // inner j is in scope, prints 2
    }                               // block scope of inner i and j ends.
    printf("%d\n", j);              // outer j is in scope, prints 1
}                                   // the block scope of i and j ends.

void g(int j);                      // j has function prototype scope; hides file-scope j

int main(void) {
    f(5);                           // Does not matter what is passed, it's going to be ignored.
    return 0;
}
