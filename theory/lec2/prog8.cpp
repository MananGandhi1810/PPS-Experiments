/*
Hem is struggling to pass a certain course. The test has n questions in it. Each question carries 3 marks for each correct answer, and -1 for incorrect answer. Hem decided to attempt all questions. You know that Hem got x correct questions and rest of them incorrect. For Hem to pass the course, he must score at least score at least p marks. FInd whether he will pass or fail.
*/
#include <iostream>

using namespace std;
int main()
{
    int n, x, p;
    cout << "Enter number of questions: ";
    cin >> n;
    cout << "Enter total correct questions: ";
    cin >> x;
    cout << "Enter passing marks: ";
    cin >> p;

    int total = x * 3 - (n - x);
    if (total >= p)
    {
        cout << "Hem will pass" << endl;
    }
    else
    {
        cout << "Hem will fail" << endl;
    }
    return 0;
}