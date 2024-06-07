#include <stdio.h>
#include <stdlib.h>

int main () {
    int a = 23;

    int *pa = &a;
    printf("Add: %p -> %d\n", pa , *pa);
    *pa = 40;
    printf("Add: %p -> %d\n", pa , *pa);
    return 0;
}