#include<iostream>

using namespace std;

int main()
{
    int n,i = 1;
    cin >> n;
    /*
        1 2 3 4 5 5 4 3 2 1 
        1 2 3 4 * * 4 3 2 1 
        1 2 3 * * * * 3 2 1 
        1 2 * * * * * * 2 1 
        1 * * * * * * * * 1
    */

    while (i <= n)
    {
        // step 1
        int A = 1 ;
        while (A <= n-i+1)
        {
            cout << A << " ";
            A++;
        }

        // step 2
        int space1 = n - n + i - 1 ;
        while (space1)
        {
            cout << "*" << " ";
            space1--;
        }
                
        // step 3
        int space2 = n - n + i - 1 ;
        while (space2)
        {
            cout << "*" << " ";
            space2--;
        }

        // step 4
        int j = n - i + 1 ;
        while (j)
        {
            cout << j << " ";
            j--;
        }

        cout << endl;
        i++;
    }
    

    return 0;
}