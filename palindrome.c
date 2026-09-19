#include <stdio.h>
int main()
{
     int n, result=0, q, rem;
     printf("please enter the number:");
     scanf("%d",&n);

     q=n;

     while(q!=0)
     {
        rem=q%10;
        result = result*10 + rem;
        q=q/10;
     }

     if(result == n)
            printf("its a palindrome");
     else
             printf("Not A palindrome");
             return 0;

}
