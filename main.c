#include<stdio.h>

extern int count;
int decrement();

int main(){
     int value;
     value= decrement();
     value= decrement();
     value= decrement();
      
     printf("%d",value);
     return 0;
   
}
