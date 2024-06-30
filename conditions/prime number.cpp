#include<iostream>

using namespace std;

int main()
{
    int n,i = 2;
    cin >> n;
    while (i < n)
    {
        if(n%i==0){
            cout << n << " is not prime " << i << endl;
        }
        else 
        {
            cout << n << " is prime " << i << endl;
        }
        i++;
    }
    
}