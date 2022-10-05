#include<stdio.h>
int main()
{
     int a=11;
     //int *ptr;

    int *ptr = &a ;
     printf("&a add. of a = %x \n ",&a);
     printf("&ptr add. of pointer = %x\n",&ptr);
     printf(" a value of a %d \n",a);
     printf("ptr actual add. of pointer %p\n",ptr);
     printf("*ptr = %x \n ",*ptr);
     printf("ptr = %x",ptr);

     return 0 ;
}