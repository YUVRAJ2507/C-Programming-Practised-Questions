#include <stdio.h>

int main() {
    int a = 34567;
    int *ptr = &a;
    int **pptr =&ptr;

    // for printing address
    printf("Address of a: %p\n",&a);
    printf("Value stored in ptr (address of a): %p\n",ptr);
    printf("Address of ptr: %p\n",&ptr);
     printf("Address of pptr: %p\n",&pptr);

    // for printing Value
    printf("Value at ptr is : %d\n", *ptr);
    printf("Value at ptr is : %d\n", *(&a));
    printf("value at pptr is: %d",**pptr);

    return 0;
}