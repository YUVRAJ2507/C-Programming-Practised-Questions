#include<stdio.h>
#include<string.h>

struct student{
    int id;
    char name[20];
    float attendence;
};


int main(){
    struct student s1={101,"Yuvraj",93.2};
    printf("Name of student s1 is: %s\n",s1.name);

    //using pointer
    struct student *ptr = &s1;
    printf("Attendence is :%f\n",(*ptr).attendence);

    // using Arrow pointer
    printf("id is  :%d",ptr->id);
}