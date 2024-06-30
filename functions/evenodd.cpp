#include<iostream>

using namespace std;

bool evenodd(int num)
{
    if (num&1)
    {
        return 0;
    }
    else{
        return 1;
    }
    
}
int main()
{
    int n;
    cin >> n;

    if (evenodd(n)) cout << n <<" is even number" << endl;
    else cout << n << " is odd number" << endl;
    
    
}