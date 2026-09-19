#include<stdio.h>
int main()
{
    char operator;
    printf("Choose the operator: ");
    scanf("%c",&operator);

    float num1 , num2;
    printf("Enter Number 1 and Number 2: ");
    scanf("%f %f",&num1,&num2);
 
    switch(operator){
        case'+':
        printf("Sum is: %f",num1+num2);
        break;


        case'-':
        printf("Difference is: %f ",num1-num2);
        break;


        case'*':
        printf("Product is: %f ",num1*num2);
        break;

        case '/':
            if(num2 == 0){
                printf("Division by zero is not allowed\n");
            } else {
                printf("Division is: %f\n", num1 / num2);
            }
            break;

        default:
        printf("Invalid Operator:");

    }

     return 0;
}