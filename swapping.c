#include<stdio.h>
#include<conio.h>
void swap(int *a, int *b){
    int temp;
    temp= *a;
    *a= *b;
    *b= temp;
}

int main(){
    int a , b;
    printf("enter the value of a:");
    scanf("%d",&a);

    printf("enter the value of b:");
    scanf("%d",&b);

    swap(&a, &b);
    printf("after swapping the number:\n");
    printf("a=%d, b=%d", a,b);

}



