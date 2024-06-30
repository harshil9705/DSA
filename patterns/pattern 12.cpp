
#include<iostream>

using namespace std;

    /*
        A B C
        B C D
        C D E
    */

int main()
{
    // int n, i = 1;
    // cin >> n;

    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= n)
    //     {
    //     char ch = 'A' + i + j - 2;  
    //         cout << ch ;
    //         // ch++;
    //         j++;
    //     }   
    //     cout << endl;
    //     i++;
    // }

    int n, i = 1;
    cin >> n;

    while (i <= n)
    {
        char ch = 'A' + i - 1;
        int j = 1;
        while (j<=n)
        {
            cout << ch ;
            ch++;
            j++;
        }
        cout << endl;
        i++;
    }
    
    return 0;
}