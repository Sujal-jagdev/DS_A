#include <iostream>
using namespace std;

class Employe
{
public:
    int salary, experience;
    string name, eMail;
};

int main()
{

    Employe E1, E2, E3;

    E1.eMail = "a@gmail.com";
    E1.salary = 10000;
    E1.name = "RajuBhai";
    E1.experience = 2;

    E2.eMail = "b@gmail.com";
    E2.salary = 12000;
    E2.name = "Mnoj";
    E2.experience = 3;

    E3.eMail = "c@gmail.com";
    E3.salary = 20000;
    E3.name = "ShankarBhai";
    E3.experience = 4;

    cout << E1.name << endl;
    cout << E1.eMail << endl;
    cout << E1.experience << endl;
    cout << E1.salary << endl;
    cout << endl;
    cout << E2.name << endl;
    cout << E2.eMail << endl;
    cout << E2.experience << endl;
    cout << E2.salary << endl;
    cout << endl;
    cout << E3.name << endl;
    cout << E3.eMail << endl;
    cout << E3.experience << endl;
    cout << E3.salary << endl;
    return 0;
}