#include<iostream>

using namespace std;

int main()
{
    char ch;
    cin >> ch;

    if(ch >= 97 && ch <=122 ){
        cout << "this is lowercase";
    }
    else if (ch >= 65 && ch <= 90)
    {
        cout << "this is uppercase";
    }
    else if (ch >= 48 && ch <= 57)
    {
        cout << "this is number";
    }
    
    return 0;
}