#include <stdio.h>

int main() {
    int a = 34567;
    int *ptr = &a;

    printf("Address of a: %p\n",&a);
    printf("Value stored in ptr (address of a): %p\n",ptr);
    printf("Address of ptr: %p\n",&ptr);

    return 0;
}