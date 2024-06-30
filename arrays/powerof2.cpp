#include<iostream>

using namespace std;

int main()
{
    int n ;
    cin >> n;

    int ans = 0;

    while (n != 0)
    {
        int bit = n&1;
        ans = (ans * 10) + bit;
        n = n >> 1;
    }
    cout << ans;
    if (ans == 1)
    {
        cout <<" power is 2" << endl;
    }
    else 
    {
        cout <<" power is not 2" << endl;    
    }
    return 0;
}