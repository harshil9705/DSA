#include<iostream>

using namespace std;

int main()
{
    int n,i = 1,evensum = 0;
    cin >> n;
    while (i <= n)
    {
        if(i%2==0){
            evensum = evensum + i;
        }
        i++;
    }

    cout << evensum;
    
    return 0;
}