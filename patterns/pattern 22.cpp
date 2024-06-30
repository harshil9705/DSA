#include<iostream>

using namespace std;
    /*
        1 2 3 4
          2 3 4
            3 4
              4
    */

int main()
{
    int i = 1,n;
    cin >> n;
     while (i <= n)
     {
        int space = i - 1 ;
        while (space)
        {
            cout << "-";
            space--;
        }
        int j = n - i + 1;
        int count = i;
        while (j)
        {
            cout << count;
            count++;
            j--;
        }       
        cout << endl;
        i++;
     }
    return 0;
}