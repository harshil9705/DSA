#include<iostream>

using namespace std;
    /*
              1 
            1 2 1
          1 2 3 2 1
        1 2 3 4 3 2 1
    */

int main ()
{
    int n,i = 1;
    cin >> n;
    while (i <= n)
    {
        // stape 1
        int space = n - i;
        while (space)
        {
            cout << "  ";
            space--;
        }

        // stape 2

        int j = 1;

        while (j <= i)
        {
            cout << j << " ";
            j++;
        }

        // stape 3
        int t = i - 1;
        while (t)
        {
            cout << t << " ";
            t--;
        }
        
        cout << endl; 
        i++;
    }
    return 0;
}