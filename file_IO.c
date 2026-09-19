#include<stdio.h>

int main(){
     FILE *fptr;
     //opening a file to read
     fptr = fopen("New.txt","r");
     if(fptr == NULL){
        printf("file does not exist ");
     }
else
     {
        fclose(fptr);
     }

     //open a file to write
     fptr = fopen("newfiletowrite.txt","w");
    
}