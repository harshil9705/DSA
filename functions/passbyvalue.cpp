#include<iostream>

using namespace std;


int dummy (int a)
{
    int ans = a*a;
    return ans;
}

int main()
{
    int a = 14;
    a = dummy(a);
    cout << a << endl;
    return 0;
}