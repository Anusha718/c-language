#include <stdio.h>

void basic_pointer() {
    int a = 1;
    int* b = NULL;

    b = &a;  // assign address of a to b

    printf("a value = %d, address of a = %p\n", a, (void*)&a);
    printf("b points to = %p, address of b = %p\n", (void*)b, (void*)&b);

    *b = 5;  // changing value at address which b points → modifies 'a'

    printf("a value = %d, address of a = %p\n", a, (void*)&a);
    printf("b points to = %p, address of b = %p\n", (void*)b, (void*)&b);
}
