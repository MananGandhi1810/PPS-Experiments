#include <iostream>
using namespace std;

int minimum(int *ptr, int);

int main() {
    int size_array;
    cout << "Enter the size of the array: ";
    cin >> size_array;
    cout << "\n\n";
    int array_main[size_array];
    for(int i = 0; i < size_array; i++) {
        cout << "Enter the value (" << i + 1 << "): ";
        cin >> array_main[i];
        cout << endl;
    }
    cout << "\n\nMinimum Element: " << minimum(&array_main[0], size_array);
    return 0;
}

int minimum(int *ptr, int size) {
    int min = *ptr;
    for(int i = 1; i < size; i++) {
        if(*ptr < min) {
            min = *ptr;
        }
        ptr++;
    }
    return min;
}