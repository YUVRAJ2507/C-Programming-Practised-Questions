#include<stdio.h>
#include<conio.h>

int fact(int n){ 
    if(n==0) 
    return 1;
    return n*fact(n-1);
}

int main()
{    int n, factorial;
      printf("enter the value of n:");
    scanf("%d",&n);

    factorial= fact(n);
    printf("the factorial of the entered value is: %d",factorial); }

    