#include<iostream>

using namespace std;

int main()
{
    int n;
    cout << "enter the value of n :-";
    cin >> n;
    int ans = 0;
    while (n!= 0)
    {
       int lastdiigit = n % 10;
       ans = (ans * 10) + lastdiigit;
       if(ans > INT32_MAX/10 || ans < INT32_MIN/10){
               ans = 0;
       }
       n = n / 10;
    }


    cout << ans << endl;
     
}