#include<iostream>

using namespace std;

int main ()
{
    int total;
    cout << "Enter total amount :- ";
    cin >> total;

    switch (1)
    {
    case 1:
        cout << "100's notes :- " << (total/100) << endl;
        total = total % 100;
        if (total == 0) break;
    case 2:
        cout << "50's notes :- " << (total/50) << endl;
        total = total % 50;
        if (total == 0) break;
    case 3:
        cout << "20's notes :- " << (total/20) << endl;
        total = total % 20;
        if (total == 0) break;
    case 4:
        cout << "1 coin :- " << (total/1) << endl;
        total = total % 1;
        if (total == 0) break;
    }

    return 0;
}