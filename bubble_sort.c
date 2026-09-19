#include <stdio.h>
int main() {
    int a[20];
    int i, j, temp;
 
    printf("Enter 5 elements:  ");
    for (i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < 5; i++) {
    for (j = 0; j < 4; j++) {
      if (a[j] > a[j + 1]) {
        temp = a[j];
        a[j] = a[j + 1];
        a[j + 1] = temp; }
     }
    }

    printf("Sorted array:   ");
    for (i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}