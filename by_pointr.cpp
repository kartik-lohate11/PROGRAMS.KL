#include <iostream>
using namespace std;

int main()
{
    int arr[10], size;
    int *ptr = arr, a;

    cout << "enter the size of array " << endl;
    cin >> size;
    cout << " enter the elements of array " << endl;
    for (a = 0; a < size; a++)
    {
        cin >> ptr[a];
    }
    for (a = 0; a < size; a++)
    {
        cout << " " << ptr[a];
    }

    return 0;
}
/*
output :-
enter the size of array
5
1
2
3
4
5
 1 2 3 4 5
 */