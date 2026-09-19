#include<stdio.h>
int main(){
     int a=4,b=5,c=5;
     //Logical Operator &&
     if((a==b) && (b==c)){
           printf("Logical and&& executes Successfully");
     }
 
     //Logical Operator ||
     if((a==b) || (b==c)){
           printf("Logical or|| executes Successfully\n");
     }
  
     //not
     if(!(a==b)){
           printf("logical Not executes Successfully\n");
     }
     //Short Circuit Logical Operator
     c= (a<b) && (b++) || (a++);
     printf("it will return 1 fot true and 0 for false :%d\n",c);
     printf("%d\n",b);
     printf("%d\n",a);

     return 0;
}