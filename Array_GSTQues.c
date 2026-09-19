#include<stdio.h>
int main(){
    float price[3];

    printf("Enter the price of 1st item:",price[0]);
    scanf("%f",&price[0]);

    printf("Enter the price of 2nd item:",price[1]);
    scanf("%f",&price[1]);

    printf("Enter the price of 3rd item:",price[2]);
    scanf("%f",&price[2]);

    printf("after GST price of 1st item is %f\n",price[0]+ (price[0]*0.18));
    printf("after GST price of 2nd item is %f\n",price[1]+ (price[1]*0.18));
    printf("after GST price of 3rd item is %f\n",price[2]+ (price[2]*0.18));
    

}