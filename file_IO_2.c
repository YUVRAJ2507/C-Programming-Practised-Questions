#include<stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("Studentdeatils.txt","w");

    char name[100];
    int age;
    float CGPA;

    printf("enter the name: ");
    scanf("%s", name);

    printf("enter the age: ");
    scanf("%d", &age);

    printf("enter the CGPA: ");
    scanf("%f", &CGPA);

  fprintf(fptr,"%s\t",name);
  fprintf(fptr,"%d\t",age);
  fprintf(fptr,"%f\t",CGPA);

    fclose(fptr);
}