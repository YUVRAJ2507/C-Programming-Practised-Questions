#include<stdio.h>
int var = 13;

int fun(){ 
     printf("%d\n",var);
}

extern int vari;
 
int main(){
     int var=1234;
     printf("%d\n",var);
     fun();
     printf("%d\n",vari);
     return 0;
    }


