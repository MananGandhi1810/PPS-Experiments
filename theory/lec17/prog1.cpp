#include <iostream>
using namespace std;

class Complex
{
    int real, imaginary;

public:
    Complex()
    {
        real = 0;
        imaginary = 0;
    }
    Complex(int r, int i)
    {
        real = r;
        imaginary = i;
    }
    void display();
};

void Complex::display()
{
    cout << real << " + " << imaginary << "i";
}

int main()
{
    
}