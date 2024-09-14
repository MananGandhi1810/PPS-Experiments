#include <iostream>

using namespace std;
inline void print(int);

int main()
{
    int num = 100;
    print(num);
}

inline void print(int num)
{
    cout << num << endl;
}