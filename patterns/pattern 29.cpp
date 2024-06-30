#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for(int i = 1; i<= n;i++){
        for (int j = 1; j <= i; j++)
        {
            if (j%2 == 1)
            {
                cout << j << " ";
            }
            else 
            {
                char ch = 'A' + j - 1;
                cout << ch;
            }
        }
        cout << endl;
    }

    return 0;
}