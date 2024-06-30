#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for(int i = 1; i<= n;i++){
        int number = 0;
        for (int j = 1; j <= i; j++)
        {
            number = number * 10 + 1;
            cout << number << " ";
        }
        cout << endl;
    }

    return 0;
}