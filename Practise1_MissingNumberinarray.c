#include<stdio.h>

int main()
{
    int arr[]={1,2,3,5};
     int n=5;
    int sum=0,i;

    for(i=0;i<4;i++)
           sum+=arr[i];
    
         int total=n*(n+1)/2;

           printf("Missing = %d", total-sum);
}