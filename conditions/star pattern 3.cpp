#include<iostream>

using namespace std;
    /*
        1 1 1 1 
        2 2 2 2
        3 3 3 3
        4 4 4 4
    */
int main()
{
    int n,i =1;
    cin >> n;
    
    while (i <= n)
    {

        int p1 = 1;

        while (p1 <= n - i + 1)
        {
            cout << p1 << " " ;
            p1++;
        }
         
        int space1 =  i - 1;
        while (space1)
        {
            cout << "* ";
            space1--; 
        }

        int space2 =  i - 1;
        while (space2)
        {
            cout << "* ";
            space2--; 
        }

        int p2 = n - i + 1;
        while (p2)
        {
            cout << p2 << " ";
            p2--;
        }
    
        cout << endl;
        i++;
    }
    
}