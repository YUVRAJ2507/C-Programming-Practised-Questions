#include<stdio.h>

void display()
{
    printf("Hello");
}

int main()
{
    void (*fptr)();

    fptr = display;

    fptr();
}