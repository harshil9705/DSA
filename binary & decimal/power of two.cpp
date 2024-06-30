#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int ans = 1;
    bool answer = false;
    
    for (int i = 0; i < 31; i++)
    {
        ans = ans * 2;

        if (ans == n)
        {
            answer = true;
        }
        
    }

    if (answer == true)
    {
        cout << "true";
    }
    else 
    {
        cout << "false";
    }

    return 0;
}