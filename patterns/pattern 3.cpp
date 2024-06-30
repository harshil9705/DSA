#include<iostream>

using namespace std;
    /*
        1 2 3
        4 5 6 
        7 8 9
    */
int main()
{
    int n = 3, i = 1 , count = 1;

    while(i <= n){
        int j = 1;
        while (j <= n)
        {
            cout << count << " ";
            count++;
            j++;
            /* code */
        }
        cout << endl;
        i++;
    }

    return 0;
}