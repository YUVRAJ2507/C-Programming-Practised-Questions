#include<stdio.h>
void ReverseArray(int arr[],int n);
void printreversedarray(int arr[],int n);

int main(){
int arr[]={2,5,7,8,9,7,5};
ReverseArray(arr,7);
printreversedarray(arr,7);
}

void ReverseArray(int arr[],int n){
for(int i=0;i<n/2;i++){
    int firstValue=arr[i];
    int SecondValue=arr[n-i-1];
   arr[i]=SecondValue;
   arr[n-i-1]=firstValue;
       }
}

void printreversedarray(int arr[],int n){
for(int i=0;i<n;i++){
    printf("%d\t",arr[i]);
    }
}