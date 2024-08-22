// Classes in C++
#include <iostream>

using namespace std;
class Cricket
{
    string player_name;
    string team_name;

public:
    float batting_avg;
    void getData();
    void showData();
};

void Cricket::getData()
{
    fflush(stdin);
    cout
        << "Enter Player Name: ";
    getline(cin, player_name);
    cout << "Enter Team Name: ";
    getline(cin, team_name);
    cout << "Enter Batting Average: ";
    cin >> batting_avg;
}

void Cricket::showData()
{
    cout << "Player name: " << player_name << endl;
    cout << "Team name: " << team_name << endl;
    cout << "Batting average: " << batting_avg << endl;
}

int main()
{
    int n = 0;
    cout << "Enter n: ";
    cin >> n;
    Cricket player[n];
    for (int i = 0; i < n; i++)
    {
        player[i].getData();
    }
    for (int i = 0; i < n; i++)
    {
        if (player[i].batting_avg > 100)
        {
            cout << endl
                 << "Player " << i + 1 << ": " << endl;
            player[i].showData();
        }
    }
    return 0;
}