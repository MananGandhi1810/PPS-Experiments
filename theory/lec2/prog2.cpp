/*
Little Yash is a movie fan. He likes watching different kinds of movies from drama, comedy to horror movies.
He is planning to watch a movie this weekend.
There are N movies to watch during this weekend. Each movie can be characterized by 2 interger li and ri denoting length and rating respectively.
Yash wants to watch exactly one movie with the maximal value of Li x Ri.
If there are several such movies, he would pick the movie with maximal Ri.
If there is still a tie, he would pick the one with the minimal index among them. Your task is to help Yash to pick a movie to watch during this weekend.
*/

#include <iostream>

using namespace std;
int main()
{
    int selectedMovieIndex = 0;
    int n = 0;
    cout << "Enter number of movies: ";
    cin >> n;

    unsigned int L[n];
    unsigned int R[n];
    int product = 0, maxProduct = 0;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter length of movie " << i + 1 << ": ";
        cin >> L[i];
        cout << "Enter rating of movie " << i + 1 << ": ";
        cin >> R[i];
    }

    for (int i = 0; i < n; i++)
    {
        product = L[i] * R[i];
        maxProduct = L[selectedMovieIndex] * R[selectedMovieIndex];
        if (product > maxProduct)
        {
            selectedMovieIndex = i;
        }
        else if (product == maxProduct)
        {
            if (R[i] > R[selectedMovieIndex])
            {
                selectedMovieIndex = i;
            }
        }
    }

    cout << "Yash should select movie number: " << selectedMovieIndex + 1 << endl;
    return 0;
}