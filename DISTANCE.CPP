#include <iostream>
using namespace std;

struct node
{
    int inch, feet;
} typedef dis;

int main()
{
    dis d1, d2, d3;

    cout << " enter the first distance feet & inch" << endl;
    cin >> d1.feet >> d1.inch;
    cout << " enter the second distance feet & inch  " << endl;
    cin >> d2.feet >> d2.inch;

    d3.inch = d1.inch + d2.inch;
    d3.feet = d1.feet + d2.feet;

    if (d3.inch > 12)
    {
        d3.feet = d3.feet + d3.inch / 12;
        d3.inch = d3.inch % 12;
    }
    cout << " the total distance = " << d3.feet << " feets & " << d3.inch << " inch " << endl;
    return 0;
}
/*
OUTPUT :-
 enter the first distance feet & inch
3
15
 enter the second distance feet & inch
2
3
 the total distance = 6 feets & 6 inch
 */