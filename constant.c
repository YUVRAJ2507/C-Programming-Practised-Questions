#include<stdio.h>
#define COMPARE(x,y)  if(x>y)\
                       printf("%f is greater than %f\n",x,y);\
                       else \
                      printf("%f is lesser than %f\n",x,y);
#define ADDITION(z,w) z+w
                        

int main()
 { 
     float a,b,sum;
     printf("Enter the value of a and b to find greater between them:");
     scanf("%f\n %f",&a,&b);
     COMPARE(a,b);

      sum=ADDITION(a,b);
      printf("%f is the addition of the given values\n",sum);

      printf("Today's Date is:%s\n",__DATE__);
      printf("Current Time is:%s\n",__TIME__);
     return 0;
     
 }











