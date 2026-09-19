#include<stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;

}

int partition(int arr[] , int start, int end){
    int index = start-1;
    int pivot_value = arr[end];
    for(int j=start; j<end;j++){
        if(arr[j]  <=pivot_value){
            index++;
            swap(&arr[j], &arr[index]);    
        }
    }
 index++;
 swap(&arr[index], &arr[end]);
 return index;
}

void quick_sort(int arr[], int start, int end){
    if(start<end){
        int pivot_index = partition(arr,start,end);
        quick_sort(arr, start, pivot_index-1);
        quick_sort(arr, pivot_index+1, end);
    }
}


int main(){
    int arr[]={5,8,3,6,10,7};
    int length = sizeof(arr)/sizeof(arr[0]);


    quick_sort(arr, 0, length-1);

    for (int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }

    return 0;

}