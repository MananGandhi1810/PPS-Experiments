#include <iostream>
using namespace std;

class Test
{
public:
    int x = 100;
    Test()
    {
        cout << "Constructor" << endl;
    }
    Test(int a)
    {
        cout << "Constructor " << a << endl;
    }
    Test(Test &t)
    {
        x = t.x;
        cout << t.x << endl;
    }
    ~Test()
    {
        cout << "Destructor" << endl;
    }
};

int main()
{
    Test t1;
    t1.x = 1000;
    Test t2(t1);
    Test t3(100000);
    return 0;
}