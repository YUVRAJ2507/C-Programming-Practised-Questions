#include<stdio.h>
int square(int n);
int _square(int *n);

int main(){
    int number = 3;
    square(number);
    printf("Number is :%d\n",number);

    _square(&number);
    printf("Number is:%d\n",number);

}

int square(int n) //Call by value
{
    n = n*n;
    printf("Square is:%d\n",n);  
}

int _square(int *n) // Call by Reference
{

    *n = (*n) * (*n);
    printf("Square is :%d\n",*n); 
}