#include<stdio.h>
int CountOddNumber(int arr[],int n);

int main(){
    int arr[]={23, 67, 86 , 78 ,65};
    printf("odd numbers in the array are: %d\n",CountOddNumber(arr,6));
    printf("value at the (arr+2) index is:%d\n",*(arr+2));
    printf("value at the (arr+5) index is:%d",*(arr+5));//as the value is not at this index
}

int CountOddNumber(int arr[],int n){
    int count = 0;
    for(int i=0; i<n;i++){
        if(arr[i] % 2 !=0){
        count++;
        }
    }

    return count;

}