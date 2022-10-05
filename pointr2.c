#include<stdio.h>
int main () 
{
     int a=11 ;
     int *ptr = &a;
   printf("%d\n  ", ptr);
   ptr =  ptr + 1;
   printf("%d ",ptr );
    return 0 ; 
}