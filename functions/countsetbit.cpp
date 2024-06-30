#include<iostream>

using namespace std;

int bit1(int n)
{
    int ans = 0;
    while (n != 0)
    {
        if (n&1)
        {
            ans++;
        }
        n = n>>1;
    }
    return ans;
}

int bit2(int n)
{
    int ans = 0;
    while (n != 0)
    {
        if (n&1)
        {
            ans++;
        }
        n = n >> 1;
    }
    return ans;
}

int main()
{
    int a,b;
    cin >> a >> b;

    int answer1 = bit1(a);
    int answer2 = bit2(b);
    cout << answer1 + answer2;
}