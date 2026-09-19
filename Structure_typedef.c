#include<stdio.h>
#include<string.h>

typedef struct detailsofthestudent{
    int Sno;
    int age;
    char Name[100];
}stu;

int main(){
     stu s1;
     s1.Sno = 3;
     s1.age = 34;
     strcpy(s1.Name,"Yuvraj Singh Shekhawat");

     printf("%d , %d, %s",s1.Sno,s1.age,s1.Name);
     
}