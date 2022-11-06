#include <iostream>
using namespace std;

int fun(int *p, int *q)
{
    int t;
    t = *p;
    *p = *q;
    *q = t;
    return 0;
}
int main()
{
    int a, b;
    cout << "enter the numbers" << endl;
    cin>>a>>b;
    cout << a << " " << b << endl;
    fun(&a, &b);
    cout<<" after the swaping "<<endl;
    cout << a << " " << b << endl;

    return 0;
}
