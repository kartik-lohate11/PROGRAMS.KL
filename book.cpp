
#include <iostream>
using namespace std;

// W.A.P to input a detial of book is name,no,price,copys. and calculate the total price of books

class student
{
  int bn, price, total, per;
  char bt[10];

public:
  int input()
  {
    cout << "enter the title of book" << endl;
    cin >> bt;
    cout << "enter the code of book" << endl;
    cin >> bn;
    cout << "enter the price of book" << endl;
    cin >> price;
    return 0;
  }

  int perchase()
  {
    cout << "enter how many books do you want to purchase" << endl;
    cin >> per;
    cout << "the total amount is = " << total_cost();
    return 0;
  }

  int total_cost()
  {
    total = price * per;

    return total;
  }
};

int main()
{
  student s1;
  s1.input();
  s1.perchase();
  s1.total_cost();

  return 0;
}

/*OUTPUT :-
enter the title of book
davas
enter the code of book
120
enter the price of book
100
enter how many books do you want to purchase
10

the total amount is = 100
*/