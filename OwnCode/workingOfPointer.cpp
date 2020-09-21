// Pointer arithmatic && Void pointer

#include <stdio.h>

int main() {
    int a = 1025;
    int *p;
    p = &a;

    // Pointer arithmetic
    printf("Value of 'p' is: %p\n", p);
    printf("Size of integer is: %zu\n", sizeof(int));
    printf("Value of 'p+1' is: %p\n", p+1);
    printf("Value at '*(p+1)' is: %d\n\n", *(p+1));

    char *p0;
    p0 = (char*)p; //Typecasting
    printf("Value of 'p0' is: %p\n", p0);
    printf("Size of integer is: %zu\n", sizeof(char));
    printf("Value of 'p0+1' is: %s\n", p0+1);
    printf("Value at '*(p0+1)' is: %d\n", *(p0+1));
}