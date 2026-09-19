#include<stdio.h>
#include<string.h>

struct patient{
    int id;
    char name[50];
    int age;
    float bill;
};

void patientdeatils(struct patient p1);

int main(){
struct patient s1={1,"Charlie",49,9873.768};
struct patient s2={2,"Delta",56,34567.23};
patientdeatils(s1);
patientdeatils(s2);

return 0;
}

void patientdeatils(struct patient p1){
    printf("Patient Deatils\n");
    printf("Patient Id: %d\n",p1.id);
    printf("Patient Name: %s\n",p1.name);
    printf("Patient age: %d\n",p1.age);
    printf("Patient bill: %f\n",p1.bill);
}