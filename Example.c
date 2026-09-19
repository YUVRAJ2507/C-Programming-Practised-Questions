#include<stdio.h>
#include<string.h>
int main(){

    char a[20];
    printf("Enter a String :");
    scanf("%[^\n]s",a);

    int length = strlen(a);

    for(int i = length-1 ; i>=0 ;i--){
        printf("%c",a[i]);
    }
    printf("\n");
    return 0;

}