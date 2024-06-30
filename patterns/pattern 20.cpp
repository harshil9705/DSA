#include<iostream>

using namespace std;
    /*
        1 1 1 1
          2 2 2
            3 3
              4
    */
int main()
{
    int n, i = 1;
    cin >> n;
    while (i <= n)
    {
        int space = i - 1;

        while(space)
        {
            cout << " ";
            space--;
        }
        
        int j=  n - i + 1;
        while (j)
        {
            cout << i;
            j--;
        }
        cout << endl;
        i++;
    }
    
    return 0;
}