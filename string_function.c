#include<stdio.h>

void printString(char arr[]);

int main(){
    char FirstName[]="Yuvraj";
    char MiddleName[]="Singh";
    char LastName[]="Shekhawat";

    printString(FirstName);
    printString(MiddleName);
    printString(LastName);
}

void printString(char arr[]){
    for(int i=0;arr[i] !=0 ;i++){
      printf("%c",arr[i]);
    }
     printf("\n");
}
