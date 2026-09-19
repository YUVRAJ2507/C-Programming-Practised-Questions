#include<stdio.h>
#include<string.h>

typedef struct addressdeatilsofperson{
    int Hno;
    int Block;
    char city[100];
    char state[100];
}add;

int main(){
add p1;
printf("enter the deatils of Person 1:\n");
scanf("%d\n",&p1.Hno);
scanf("%d\n",&p1.Block);
scanf("%s\n",&p1.city);
scanf("%s",&p1.state);


add p2;
printf("enter the deatils of Person 2:\n");
scanf("%d\n",&p2.Hno);
scanf("%d\n",&p2.Block);
scanf("%s\n",&p2.city);
scanf("%s",&p2.state);

add p3;
printf("enter the deatils of Person 3:\n");
scanf("%d\n",&p3.Hno);
scanf("%d\n",&p3.Block);
scanf("%s\n",&p3.city);
scanf("%s",&p3.state);

add p4;
printf("enter the deatils of Person 4:\n");
scanf("%d\n",&p4.Hno);
scanf("%d\n",&p4.Block);
scanf("%s\n",&p4.city);
scanf("%s",&p4.state);


printf("%d ,%d ,%s ,%s \n",p1.Hno,p1.Block,p1.city,p1.state);
printf("%d ,%d ,%s ,%s \n",p2.Hno,p2.Block,p2.city,p2.state);
printf("%d ,%d ,%s ,%s \n",p3.Hno,p3.Block,p3.city,p3.state);
printf("%d ,%d ,%s ,%s \n",p4.Hno,p4.Block,p4.city,p4.state);
}