#include<stdio.h>
int main(){
    int marks[2][3];//marks of 2 students and of 3 Subjects
    //Student 1
    marks[0][0]=45;
    marks[0][1]=98;
    marks[0][2]=67;

    //Student 2
    marks[1][0]=86;
    marks[1][1]=23;
    marks[1][2]=12;

    printf("Marks of student 2nd subject 3rd is: %d",marks[1][2]);
    return 0;
}