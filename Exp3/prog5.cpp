/*
Vitamin D3 is recommended as the best indicator of vitamin D's nutritional status.
If any patient is undergone a Vitamin D3 test, its value ranges from 0 <= to >100 nm/ML.
Scott is a Pathologist, and he is doing a vitamin D3 test on his patient. You have to help him automate this process to know the status/level of vitamin D3 depending on its values in nm/mL.
Write a program to help Scott to tell the status/level to patients as given in the table below.
<20 Deficiency
20-30 Insufficiency
30-100 Sufficiency
>100 Toxicity
*/
#include <iostream>

using namespace std;
int main()
{
    int d3 = 0;
    cout << "Enter D3 level in nm/ml: ";
    cin >> d3;
    if (d3 < 20)
    {
        cout << "Deficiency" << endl;
    }
    else if (d3 >= 20 && d3 <= 30)
    {
        cout << "Insufficiency" << endl;
    }
    else if (d3 >= 30 && d3 <= 100)
    {
        cout << "Sufficiency" << endl;
    }
    else
    {
        cout << "Toxicity" << endl;
    }
    return 0;
}