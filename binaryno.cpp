#include<iostream>
#include<math.h>

using namespace std;

int main()
{
     int a,b=0,c=0,d=0;

     cout<<"enter the binary no"<<endl;
     cin>>a;
     while(a!=0)
      {
         c=a%10;
          if(c==1)
          {
             d=d+pow(2,b);
          }
          
          a=a/10;
          b++;
      }
       cout<<d;
       return 0 ;
}