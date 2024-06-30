#include<iostream>

using namespace std;
    /*
        * * * *
          * * *
            * *
              * 
    */

int main()
{
    int i = 1,n;
    cin >> n;

    while (i <= n)
    {
        int space = i - 1;
        while (space)
        {
            cout << " ";
            space--;
        }
        
        int j = n - i + 1;
        while (j)
        {
            cout << "*";
            j--;
        }
        cout << endl;
        i++;
    }
    
    return 0;
}