#include<stdio.h>
#include<string.h>

struct Employee{
    int ID;
    char Name[50];
    float Salary;
};

int main(){
    struct Employee TCS[10];
    struct Employee intimetec[10];
    struct Employee infosys[10];

    TCS[0].ID=1;
    strcpy(TCS[0].Name,"Alpha");
    TCS[0].Salary=32500.78;

    intimetec[0].ID=1;
    strcpy(intimetec[0].Name,"Bravo");
    intimetec[0].Salary=29532.78;


   printf("Name is the employee of intimetec at 0 index is:%s",intimetec[0].Name);
   return 0;
     
}

