#include<stdio.h>

int main(){
    char arr[10];

    for(int i = 0; i < 10; i++){
        printf("Enter value at index %d: ", i);
        scanf(" %c", &arr[i]);  // space is important
    }

    printf("Array is: ");
    for(int i = 0; i < 10; i++){
        printf("%c ", arr[i]);
    }

    printf("\nCharacter at index 5: %c", arr[5]);

    return 0;
}