#include <iostream>
#include <stdlib.h> // for all functions of DYNAMIC MEMORY ALLOCATION...

using namespace std;

int main()
{
    int *ptr, b, c, a;

    cout << sizeof(*ptr) << endl;
    cout << sizeof(b) << endl;

    ptr = (int *)malloc(3 * sizeof(int));
    ptr[2] = 100;

    cout << ptr[1] << endl;

    ptr = (int *)calloc(5, sizeof(int));
    ptr[4] = 111;

    cout << ptr[4] << "   " << ptr[3] << endl;

    /* for(b=0;b<4;b++)
     {
         cin>>ptr[b];
     }*/
    for (a = 0; a < 4; a++)
    {
        cout << ptr[a];
    }
    cout << endl;
    free(ptr);

    cout << ptr[4];

    return 0;
}