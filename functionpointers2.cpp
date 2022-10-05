#include<iostream>
using namespace std;

int fun(int &k , int &l)             // pickup the add. of pointer
{
     cout<<k+l;            // addition of values of k and l by geting it's address.
     return 0 ;
}
 int main()
 {
     int a,b;
     int *b1;

     cout<<"enter the no. "<<endl;
     cin>>a>>b;
     int *a1= &a;                // address to address inalaction
     b1= &b;
     fun(*a1,*b1);
     return 0 ;
 }

