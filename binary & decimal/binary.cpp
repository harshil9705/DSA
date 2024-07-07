#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    // int n;
    // cin >> n;
    int n;
    cin >> n;

    int ans = 0;
    int i = 0;

    while ( n != 0)
    {
        // find bit value
        int bit = n&1;
        // store reverce bit in answer
        ans = (bit * pow(10,i)) + ans;
        n = n>>1;
        i++;
    }

    cout << ans;
    
    return 0;
}