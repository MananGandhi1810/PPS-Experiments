// A program which inputs numbers and calculates the sum and the number of even and odd numbers

#include <iostream>

using namespace std;

int main() {
    int len_arr, sum_odd, sum_even, counter_odd, counter_even, choice;
    cout << "Enter the number of elements for the array: ";
    cin >> len_arr;
    cout << "\n\n";
    int arr[len_arr];
    for (int i; i < len_arr; i++) {
        cout << "Enter the number (" << i + 1 << ") : ";
        cin >> arr[i];
        if ((arr[i] % 2) == 0) {
            sum_even += arr[i];
            counter_even++;
        } else {
            sum_odd += arr[i];
            counter_odd++;
        }
    }
    cout << "\n\nChoices:\n1 - Print Information of Even Numbers\n2 - Print Information of Odd Numbers\nEnter your choice: ";
    cin >> choice;
    switch (choice) {
    case 1:
        cout << "\n\nNumber of Even Elements: " << counter_even;
        cout << "\nSum of Even Numbers: " << sum_even << endl;
        break;
    case 2:
        cout << "\n\nNumber of Odd Elements: " << counter_odd;
        cout << "\nSum of Odd Numbers: " << sum_odd << endl;
        break;
    }

    return 0;
}
