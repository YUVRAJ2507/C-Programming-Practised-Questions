#include<stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("newfiletowrite.txt","r");
 
    //reading the content in the file
    int  ch;
     while((ch = fgetc(fptr)) != EOF){
        printf("%c", ch);
    }

    //inserting character in a file
    fptr = fopen("newfiletowrite.txt","a");
    fprintf(fptr,"%c",'H');
    fprintf(fptr,"%c",'E');
    fprintf(fptr,"%c",'L');
    fprintf(fptr,"%c",'L');
    fprintf(fptr,"%c",'O');
    
    fclose(fptr);
}