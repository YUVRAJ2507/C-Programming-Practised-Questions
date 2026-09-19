#include<stdio.h>
#include<string.h>
int main(){
    //1
    char sentence[]="I want to know the the length of the function using the standard library function";
    printf("Length of the string is: %d\n",strlen(sentence));// it not includes \0 length
    //2
    char oldstr[100]="old String ";
    char newstr[20]="New String";
    strcpy(newstr,oldstr);
    puts(newstr);
    
    //3
    char name[100]="Yuvraj";
    char middlename[]="singh";
    char lastname[]="shekhawat";
    strcat(name,middlename);
    puts(name);
   

    //4
    char Firststr[]="Apple";
    char Secondstr[]="Banana";
    printf("%d",strcmp(Firststr,Secondstr));//-1 for a<b and +1 a>b
    return 0;
}