#include<stdio.h>
int main(){
     int age = 22;
     int _age = 23;
     int *ptr = &age;
     int *_ptr = &_age;
     
     //difference
     printf("value of ptr: %u , value of _ptr:%u..... value of ptr-_ptr :%u\n",ptr,_ptr,ptr-_ptr);
     
     //Comparison(0 for false and 1 for true)
     _ptr = &age;
     printf("%u",ptr == _ptr);
     
}