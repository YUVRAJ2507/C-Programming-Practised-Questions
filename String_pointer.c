#include<stdio.h>
int main(){
    //Character pointer Which can be changed anytime
    char *string = "Yuvraj Singh Shekhawat";
    puts(string);

    string="Yuvraj Singh";
    puts(string);

    string="Yuvraj";
    puts(string);


    //Array Character can't be changed always fixed
    char str[]="Hello World";
    puts(str);
   // str = "Hello"; it will show erroe always because it is unmodifiable

    return 0;
}