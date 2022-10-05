#include<iostream>
using namespace std ;

// W.A.P to performs the file handling .

int main()
{
   
   FILE  *ptr = NULL ;
   char st[30] = " basic for file man. in c";

    cout<<"enter"<<endl;

    ptr = fopen("kartikkl.txt","w");
    fscanf(ptr,"%s",st) ;
    cout<<" string = "<<st;
    fscanf(ptr,"%s",st) ;
    cout<<" string = "<<st;

    fprintf(ptr,"%s",st);
    cout<<" string = "<<st;




       return 0 ;
}