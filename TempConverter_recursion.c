#include<stdio.h>

float TempConverter(float celsius);

int main(){
    float n;
    printf("enter the value of celsius:");
    scanf("%f",&n);


 float far = TempConverter(n);
 printf("far is :%f",far);
    return 0;

}
float TempConverter(float celsius){

    int far = (celsius* (9.0/5.0) )+32;
    return far;
    
}