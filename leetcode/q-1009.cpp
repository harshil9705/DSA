#include <iostream>
using namespace std;

int main()
{
    int n, i = 0;
    cin >> n;

    while (n != 0)
    {
        int bit = (n & 1);
        cout << bit << endl;
        n = n >> 1;
        i++;
    }

    return 0;
}