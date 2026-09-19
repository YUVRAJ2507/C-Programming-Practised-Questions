#include<stdio.h>
#include<string.h>
struct student{
    char name[100];
    int age;
    int roll_no;
};

int main(){
    struct student s1;
    strcpy(s1.name,"Yuvraj Singh Shekhawat");
    s1.age=20;
    s1.roll_no=71;

    printf("Name is: %s\n",s1.name);
    printf("Age is: %d\n",s1.age);
    printf("Roll_no is: %d\n",s1.roll_no);

    return 0;
}