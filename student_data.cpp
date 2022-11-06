#include <iostream>
using namespace std;

struct node
{
    int roll_no, marke;
    char name[10];
} typedef infm;

int student_data(infm s1)
{
    cout << "enter the name of student " << endl;
    cin >> s1.name;
    cout << "enter the Roll no. of student " << endl;
    cin >> s1.roll_no;
    cout << "enter the marke of student " << endl;
    cin >> s1.marke;

    cout << " the name of student = " << s1.name << endl;
    cout << " the roll no of student = " << s1.roll_no << endl;
    cout << " the marke of suudent = " << s1.marke << endl;

    return 0;
}

int main()
{
    infm s;
    student_data(s);
    return 0;
}
/*
OUTPUT :-
enter the name of student
kartik
enter the Roll no. of student
84
enter the marke of student
89
 the name of student = kartik
 the roll no of student = 84
 the marke of suudent = 89
 */