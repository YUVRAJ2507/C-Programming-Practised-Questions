#include<stdio.h>

float AreaofCicle(float rad){
     return 3.14*rad*rad;
}

int Areaofsquare(int side){
     return side*side;

}
float AreaofRectangle(float len, float breadth){
     return len*breadth;
}

int main(){
     int side;
     float radius, length, breadth;

     printf("enter the side of square:");
     scanf("%d",&side);
     printf("Area of Square is: %d\n",Areaofsquare(side));


     printf("enter the radius of circle:");
     scanf("%f",&radius);
     printf("Area of circle is :%f\n",AreaofCicle(radius));
     

     printf("enter the Length and breadth: ");
     scanf("%f %f",&length,&breadth);
     printf("Area of Rectangle is: %.2f\n",AreaofRectangle(length,breadth));
     return 0;

}

