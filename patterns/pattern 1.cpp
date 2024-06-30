#include<iostream>

using namespace std;
    /*
        1 2 3 4 
        1 2 3 4 
        1 2 3 4 
        1 2 3 4 
    */
int main(){
    int n = 4,i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << n;
            j++;
        }
        cout << endl;
        i++;
    }
    
    return 0;
}