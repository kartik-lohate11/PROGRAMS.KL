#include<iostream>
using namespace std;

int main()
{
     int a=11,b=12,arr[1]={1111};
     

    int  *ptr = &a;
    cout<<"&a = "<<&a<<endl;
    cout<<"&ptr = "<<&ptr<<endl;
    cout<<"*ptr = "<<*ptr<<endl;
    cout<<"a = "<<a<<endl;
cout<<"ptr = "<<ptr<<endl;
cout<<arr[0]<<endl;
cout<<*(arr + 0);

int *c;
c= &b;
cout<<"c "<<c<<endl<<" &c "<<&c<<endl<<" &b "<<&b<<endl<<" b "<<b<<endl;
int a=11;


// void pointers 
 float b=11.22;
      void *ptr;
      
      //(int*)ptr;
      
    ptr = &a;
 cout<< *((int*)ptr)<<endl;
 cout<<&b<<endl;
 ptr = &b;
 cout<<*((float*)ptr);


return 0 ;

}