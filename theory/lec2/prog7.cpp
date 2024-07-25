/*
There is an ATM. Initially it contains k unit of money. n people want to people want to withdraw money from the ATM on daily basis. Each of them can withdraw a[i] money from the ATM. People come in and try to withdraw money one by one in the increasing order of the indices. Whenever someone tries to withdraw money, if ATM has atleast the required amount of money, it will give out the amount, otherwise it will throw an error. In that case the person will return home without doing anything else. For each person determine whether they will get the required amount of money or not. Also find total number of people who couldn't withdraw the money.
*/

#include <iostream>

using namespace std;
int main()
{
    int k = 0, n = 0, count = 0, withdrawal = 0;
    cout << "Enter k: ";
    cin >> k;
    cout << "Enter n: ";
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter how much person " << i + 1 << " can withdraw: ";
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << "Enter how much money person" << i + 1 << " wants to withdraw: ";
        cin >> withdrawal;
        if (withdrawal > k || withdrawal > a[i])
        {
            count += 1;
            cout << "Cannot withdraw" << endl;
        }
        else
        {
            cout << "Person " << i + 1 << " withdrew " << withdrawal << endl;
            k -= withdrawal;
        }
    }
    cout << count << " people could not withdraw required amount" << endl;
    return 0;
}