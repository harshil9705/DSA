#include<iostream>

using namespace std;

bool isEven(int num){
    if (num & 1)
    {
        return 0;
    }
        return 1;
}

int main()
{
    int n;
    cin >> n;

    if (isEven(n))
    {
        cout << "odd";
    }
    
    return 0;
}