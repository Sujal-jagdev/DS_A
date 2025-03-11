#include <iostream>
using namespace std;

class Sport
{
    int age;
    string name, gameName, role;

public:
    void Output(string name, int age, string gameName, string role)
    {
        cout << name << endl;
        cout << age << endl;
        cout << gameName << endl;
        cout << role << endl
             << endl;
    }
};

int main()
{

    Sport S1,S2;
    S1.Output("Hardik Pandya", 29, "Cricket", "AllRounder");
    S2.Output("Ronaldo", 31, "FootBall", "FootBallPlayer");

    return 0;
}