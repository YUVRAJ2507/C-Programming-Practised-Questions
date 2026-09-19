#include<stdio.h>

void printnumbers(int *arr, int n);
int main(){
    int arr[]={4,5,4,3,5,8,7,9,6,8};
   printnumbers(arr,8);
   return 0;

}
void printnumbers(int *arr, int n){
    for(int i=0; i<n; i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
}