#include<stdio.h>
void StoreTables(int arr[][10], int n , int m, int number);

int main(){
int Tables[2][10];
StoreTables(Tables,0,10,2);
StoreTables(Tables,1,10,3);


for(int i =0;i<10;i++){
    printf("%d\t",Tables[0][i]);
    }
printf("\n"); 

for(int i =0;i<10;i++){
     printf("%d\t",Tables[1][i]);
    }

    return 0;

}

void StoreTables(int arr[][10], int n , int m, int number){
    for(int i =0;i<m;i++){
    arr[n][i]= number*(i+1);
    }
}