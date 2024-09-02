/*
Write a program that takes an integer n as input and calculates the product of all odd numbers between 1 and n.
The program should handle large values of n and skip even numbers in the loop.
Use a for loop to iterate over the range and an if condition ro check whether the number is odd.
If the number is less than 1, print an eror message and terminate the program.
*/
#include <iostream>
using namespace std;

class Nums
{
  long int n;
  unsigned long long prod;

public:
  Nums()
  {
    input();
    prod = 1;
  }
  Nums(unsigned long int num)
  {
    n = num;
    prod = 1;
  }
  void input();
  void calculate();
  void display();
};

void Nums::input()
{
  cout << "Enter n: ";
  cin >> n;
  if (n < 1)
  {
    cout << "Invalid input" << endl;
    exit(0);
  }
}

void Nums::calculate()
{
  for (long int i = 2; i < n; i++)
  {
    if (i % 2 == 1)
    {
      prod *= i;
    }
  }
}

void Nums::display()
{
  cout << "Product: " << prod << endl;
}

int main()
{
  Nums num;
  num.calculate();
  num.display();
}