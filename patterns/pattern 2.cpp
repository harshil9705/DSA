#include<iostream>

using namespace std;
    /*
        4 3 2 1 
        4 3 2 1 
        4 3 2 1 
        4 3 2 1 
    */
int main()
{
    int n = 4,i = 1;
    while (i <= n)
    {
        int j = 1;
        while(j <= n){
            int print = n-j+1;
            cout << print;
            j++;
        }
        cout << endl;
        i++;
    }
    
    return 0;
}