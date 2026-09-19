#include<stdio.h>
int main(){
    int x;
    int *ptr;
    
    ptr = &x;
    *ptr = 0;

    printf("%d\n",x);
   printf("%d\n",*ptr);

*ptr +=15;
printf("%d\n",x);
printf("%d\n",*ptr);

(*ptr)++;
printf("%d\n",x);
printf("%d\n",*ptr);


}