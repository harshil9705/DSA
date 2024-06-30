#include<iostream>

using namespace std;

    /*
        A A A
        B B B
        C C C
    */

int main()
{
    int n = 3, i = 1;
    // cin >> n;

    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            char ch = 'A' + i - 1; 
            cout << ch;
            j++;
        }
        cout << endl;
        i++;
    }
    
    return 0;
}