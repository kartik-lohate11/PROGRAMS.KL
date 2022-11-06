#include <iostream>
using namespace std;

struct node
{
    int a, b;
} typedef com;

int main()
{
    com c1, c2;
    cout << " enter the first complex number" << endl;
    cin >> c1.a >> c1.b;
    cout << " enter the second complex number" << endl;
    cin >> c2.a >> c2.b;

    cout << " the sum = " << c1.a + c2.a << " + " << c1.b + c2.b << "i" << endl;

    return 0;
}
/*
output :-
 enter the first complex number
1
2
 enter the second complex number
3
5
 the sum = 4 + 7i
 */