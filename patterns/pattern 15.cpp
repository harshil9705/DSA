#include<iostream>

using namespace std;

    /*
        A 
        B C
        C D E
        D E F G
    */

int main()
{
    int n, i = 1;
    cin >> n;

    while(i <= n){
        int j = 1;
        char ch = 'A' + i + j - 2;
        while (j <= i)
        {
            cout << ch;
            ch++;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}