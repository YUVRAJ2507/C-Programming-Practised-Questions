#include<stdio.h>
#include<limits.h>
/*int main()
{ 
    int var1=INT_MIN;
    int var2=INT_MAX;

    unsigned int var3= 0;
    unsigned int var4=UINT_MAX;

    short int var5=SHRT_MIN;
    short int var6=SHRT_MAX;

    short unsigned int var7=0;
    short unsigned int var8=USHRT_MAX;



    printf("the signed value is %d to %d\n",var1,var2);
    printf("the unsigned value is %u to %u\n",var3,var4);
    printf("the signed value is %d to %d\n",var5,var6);
    printf("the unsigned value is %u to %u\n",var7,var8);
    return 0;
}*/
/*int main()
{
     char var=-26;
     printf("%c",var);
}

/*float main()
{
    float a,b,c,result;
    printf("enter the value of a: ");
    scanf("%f",&a);

    printf("enter the value of b: ");
    scanf("%f",&b);

    printf("enter the value of c: ");
    scanf("%f",&c);



    result = a*b/c;
    printf("the result is :%f",result);
    return 0;

}*/
int main(){
     int var=4/6;
     printf("%d\n",sizeof(int));
     printf("%d\n",var);

     float var1=4/6;
      printf("%d\n",sizeof(float));
     printf("%.2f\n",var1);

     double var2=4.0/6.0;
      printf("%d\n",sizeof(double));
     printf("%.2f",var2);
      
     long double var3=4.933/8.444;
     printf("%d\n",sizeof(long double));
    printf("%.5f",var3);
}





