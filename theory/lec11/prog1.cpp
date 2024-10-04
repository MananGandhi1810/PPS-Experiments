#include <iostream>
using namespace std;

class Complex
{
private:
    int real, imaginary;

public:
    Complex()
    {
        real = 10;
        imaginary = 100;
    }
    Complex(int r, int i)
    {
        real = r;
        imaginary = i;
    }
    ~Complex()
    {
        cout << "Destructed" << endl;
    }
    Complex(Complex &temp)
    {
        real = temp.real;
        imaginary = temp.imaginary;
    }
    void showData();
};

void Complex::showData()
{
    cout << "Complex number: " << real << " + " << imaginary << "i" << endl;
}

int main()
{
    Complex c1;
    Complex c2(10, 20);
    c1.showData();
    c2.showData();
    return 0;
}