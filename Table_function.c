#include<stdio.h>
int printTable(int n);

int main(){
    int n;
    printf("Enter the number to get its table:");
    scanf("%d",&n);
 
    printTable(n);

    return 0;
}

int printTable(int n){
int i;
 for( i=1; i<=10 ; i++)
 {
    printf("%d\n", i * n);
     } 
}