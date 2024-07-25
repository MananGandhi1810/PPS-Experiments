// To Print fibonacci series

#include<iostream>

using namespace std;

int main() {
    int no, n1 = 0, n2 = 1, current_no;
    cout << "Enter number for fibonacci terms : ";
    cin >> no;
    cout << "\n\nFibonacci Series is :\n";
    for (int i = 0; i < no; i++) {
        if (i <= 1)
            current_no = i;
        else {
            current_no = n1 + n2;
            n1 = n2;
            n2 = current_no;
        }
        cout << current_no << ' ';
    }

    return 0;
}
