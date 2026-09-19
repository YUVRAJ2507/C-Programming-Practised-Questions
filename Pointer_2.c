#include<stdio.h>

void Mathsoperation(int a, int b , int *sum, int *product, int *average);

int main(){
    int a = 21 , b = 3;
    int sum, product, average;

    Mathsoperation(a,b, &sum,&product,&average);
    printf("sum =%d , product = %d, average = %d \n",sum,product, average);
    return 0;
}

void Mathsoperation(int a, int b , int *sum, int *product, int *average){
    *sum = a+b;
    *product = a*b;
    *average =(a+b)/2;
    
}
