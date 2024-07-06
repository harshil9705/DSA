#include <iostream>

using namespace std;

int main()
{
    int n;
    bool isPrime = 1;
    cin >> n;

    for (int i = 2; i < n; i++)
    {
        if (i % i == 0)
        {
            isPrime = 0;
            break;
        }
    }

    if (isPrime == 0)
    {
        cout << "is not a prime number" << endl;
    }
    else
    {
        cout << "is  prime number" << endl;
    }

    return 0;
}