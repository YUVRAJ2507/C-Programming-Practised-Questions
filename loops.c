#include<stdio.h>
int main(){
      int i,j,num=5;

      printf("For Loop : \n");
      for(i =1; i<=num; i++){
             printf("%d",i);
      }

      printf("while loop :\n");
      i =  num;
      while(i>0){
            printf("%d",i);
            i--;
      }

       printf("Do While\n");
    i = 1;
    do {
        printf("Iteration %d\n", i);
        i++;
    } while (i <= 3);


    printf("Nested Loop :\n");
    for (i = 1; i <= 4; i++) {
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

     printf("Break and Continue:\n");
    for (i = 1; i <= 10; i++) {

        if (i == 3)
            continue;   

        if (i == 8)
            break;      

        printf("%d ", i);
    }

    return 0;
}