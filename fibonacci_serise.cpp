#include<iostream>
using namespace std;

// Print the series of FIBONACCI.

 int main()
 {
     int a,c=0,i=0,d=0;
     cout<<"enter"<<endl;
    
     for(a=0;a<10;a++)
     {
           if(a==0)
           {
                cout<<a<<endl;
                c=a;
           }
            else if(a==1){
                i=a;
                cout<<i<<endl;
                 }
                 else{
                     d=i+c;
                     cout<<d<<endl;
                     c=i;
                     i=d;
                 }
     }
    return 0 ;
 }
 /*
 OUTPUT :-
 0
1
1
2
3
5
8
13
21
34
*/
