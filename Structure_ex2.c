#include <stdio.h>
#include <string.h>
typedef struct Student {
    int rollNo;
    char name[50];
    float marks;
}stu;

int main() {
    stu s1;          
    stu *ptr;        

    ptr = &s1;                  
    ptr->rollNo = 102;
    strcpy(ptr->name, "Aman");
    ptr->marks = 91.5;

    printf("Student Details:\n");
    printf("Roll Number: %d\n", ptr->rollNo);
    printf("Name: %s\n", ptr->name);
    printf("Marks: %.2f\n", ptr->marks);

    return 0;
}