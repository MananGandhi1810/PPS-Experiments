/*
Develop a program using inheritance by creating a class Player with player name and number of matches played.
Then, create derived class Cricket Player with additional data members as run achieved, catches taken along with read() & display() functions to input and output the complete details of the cricket player.
Write a complete program to demonstrate inheritance.
*/
#include <iostream>
using namespace std;

class Player
{
protected:
    string name;
    int matches;

public:
    void read();
    void display();
};

class CricketPlayer : private Player
{
private:
    int runs;
    int catches;

public:
    void read();
    void display();
};

void Player::read()
{
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter matches played: ";
    cin >> matches;
}

void Player::display()
{
    cout << "Name: " << name << endl
         << "Matches Played: " << matches << endl;
}

void CricketPlayer::read()
{
    Player::read();
    cout << "Enter runs scored: ";
    cin >> runs;
    cout << "Enter catches caught: ";
    cin >> catches;
}

void CricketPlayer::display()
{
    Player::display();
    cout << "Runs: " << runs << endl
         << "Catches: " << catches << endl;
}

int main()
{
    CricketPlayer c;
    c.read();
    c.display();
    return 0;
}