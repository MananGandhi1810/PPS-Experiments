// A program which inputs movies into an array and calculates the best movie

#include <iostream>

using namespace std;

int main() {
    int len_arr, max_rating[2];
    cout << "Enter the number of Movies: ";
    cin >> len_arr;
    cout << endl;
    float li[len_arr], ri[len_arr];
    string name[len_arr];
    for (int i; i < len_arr; i++) {
        cout << "\nEnter the movie (" << i + 1 << "): ";
        cin.ignore();
        getline(cin, name[i]);
        cout << "Enter the rating (" << name[i] << "): ";
        cin >> ri[i];
        cout << "Enter the length in minutes (" << name[i] << "): ";
        cin >> li[i];
        if ((li[i] * ri[i] > max_rating[0])) {
            max_rating[0] = li[i] * ri[i];
            max_rating[1] = i;
        } else if ((li[i] * ri[i]) == max_rating[0]) {
            if (ri[i] > ri[max_rating[1]]) {
                max_rating[0] = li[i] * ri[i];
                max_rating[1] = i;
            } else if (ri[i] == ri[max_rating[1]]) {
                if (i < max_rating[1]) {
                    max_rating[0] = li[i] * ri[i];
                    max_rating[1] = i;
                }
            }
        }
    }
    cout << "\n\n\nThe Perfect Movie is:-\n\nName: " << name[max_rating[1]] << "\nRating: " << ri[max_rating[1]] << "\nLength: " << li[max_rating[1]] << " mins\n";
    return 0;
}
