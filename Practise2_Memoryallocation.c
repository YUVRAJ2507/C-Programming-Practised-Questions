#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr = (int*)malloc(sizeof(int) * 3);

    ptr[0] = 10;
    ptr[1] = 20;
    ptr[2] = 30;

    free(ptr);

    printf("%d", ptr[1]);
}