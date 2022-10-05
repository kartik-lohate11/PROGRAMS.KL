#include <iostream>
#include<stdio.h>
#include <string.h>
using namespace std;

// W.A.P to input the details of 3 student and show it by using structure.

struct student
{
  int markes, age;
  char name[10];
} k1, k2, k3, k11, k12, k13; // variabels of struct student types..
int ram;                     // global variabel not a part of program it is as a test ...
int funn()
{
  ram = 11;
  cout << ram;
  return 0;
}
int main()
{
  printf("enter the name of student \n");
  gets(k1.name);
  printf("enter the name of second student \n");
  gets(k2.name);
  printf("enter the name of third student \n");
  gets(k3.name);
  strcpy(k11.name, k1.name); // copys name because the gets fun. past the string where it has ..
  strcpy(k12.name, k2.name);
  strcpy(k13.name, k3.name);
  printf("enter the age of student \n");
  scanf("%d", &k1.age);
  printf("enter the age of second student \n");
  scanf("%d", &k2.age);
  printf("enter the age of third student \n");
  scanf("%d", &k3.age);

  printf("enter the markes of student \n");
  scanf("%d", &k1.markes);
  printf("enter the markes of second student \n");
  scanf("%d", &k2.markes);
  printf("enter the markes of third student \n");
  scanf("%d", &k3.markes);

  printf("the name of student is = %s\n", k11.name);
  printf("the name of second stdudent is = %s\n", (k12.name));
  printf("the name of third stdudent is = %s\n", (k13.name));
  printf("the age of %s is = %d\n", (k11.name), k1.age);
  printf("the age of %s is = %d\n", (k12.name), k2.age);
  printf("the age of %s is = %d\n", (k13.name), k3.age);
  printf("the markes of %s is = %d\n", (k1.name), k1.markes);
  printf("the markes of %s is = %d\n", (k12.name), k2.markes);
  printf("the markes of %s is = %d\n", (k13.name), k3.markes);

  return 0;
}
/*
OUTPUT :-
enter the name of student 
kartik
enter the name of second student 
lucky
enter the name of third student 
jasiwal
enter the age of student 
18
enter the age of second student 
18
enter the age of third student 
19
enter the markes of student 
8  
enter the markes of second student 
7
enter the markes of third student 
9
the name of student is = kartik
the name of second stdudent is = lucky
the name of third stdudent is = jasiwal
the age of kartik is = 18
the age of lucky is = 18
the age of jasiwal is = 19
the markes of kartik is = 8
the markes of lucky is = 7
the markes of jasiwal is = 9
*/

