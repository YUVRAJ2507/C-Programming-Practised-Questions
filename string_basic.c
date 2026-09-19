#include<stdio.h>
int main(){
    char firstname[50];
    char lastname[50];
    printf("Enter your first Name: ");
    scanf("%s", firstname);
    printf("Enter your last Name: ");
    scanf("%s", lastname);
    printf("Your full name is: %s %s\n", firstname, lastname);

    getchar();

    char Fullname[100];
    printf("Enter full name again: ");
    fgets(Fullname, 100, stdin);//printing the input value
    puts(Fullname);//inputing the string Value

    return 0;
}