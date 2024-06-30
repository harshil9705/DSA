#include<iostream>

using namespace std;

int fibonacci(int n)
{
    int a = 0;
    int b = 1;
    for (int i = 2; i < n; i++)
    {
        int c = a+b;
        a = b;
        b = c;
    }
    return b;
}

int main()
{
    int n;
    cin >> n;

    cout << n << "th tearm of serise is " << fibonacci(n) << endl;

}