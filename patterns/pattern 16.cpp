#include<iostream>

using namespace std;
    /*
        D 
        C D
        B C D
        A B C D
    */
int main ()
{
    int n, i = 1;
    cin >> n;
    while (i<=n)
    {
        int j = 1;
        while (j <= i)
        {
            char ch = 'A' + n - i + j - 1;
            cout << ch;
            j++;
        }   
        cout << endl;
        i++;
    }
    return 0;
}

 
/* OR */



/*

#include<iostream>

using namespace std;

int main()
{
    int n,i = 1;
    cin >> n;

    while (i <= n)
    {
        int j = 1;
        char ch = 'A' + n - i;
        while (j <= i)
        {
            cout << ch;
            ch++;
            j++;
        }
        cout << endl;
        i++;
    }
    
    return 0;
}
*/