#include <iostream>
using namespace std;

int main()
{
    int number, sum = 0;
    while(number < 50)
    {
        number+=2;
        sum = sum + number;
    }
    cout<<sum;
    return 0;
}
