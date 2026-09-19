#include<stdio.h>
int main(){
       
int a=3,b=4;
if(a&b) 
       printf("bitwise is executed\n");
if(a&&b)
        printf("logical and is executed\n");   
        
// bitwise left shift
int bitw=5;
bitw =bitw<< 1;
printf("%d\n",bitw);

// bitwise left shift
int bitwe=8;
bitwe = bitwe >> 1;
printf("%d\n",bitwe);


//XOR
a=a^b;
b=a^b;
a=a^b;
printf("Result after XOR, a=%d and b=%d",a,b);
return 0;
}
