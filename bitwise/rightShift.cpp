#include <iostream>
using namespace std;


int main()
{
    cout  << (17 >> 1) << endl;
    cout  << (17 >> 2) << endl;
    cout  << (19 >> 2) << endl;
    cout  << (21 >> 1) << endl;

    int a ,b = 2;
    a = 10;
    if (++a)
    {
        cout << b;
        /* code */
    }else{
        cout << ++b;
    }
    if (++b > 2)
    {
        cout << b;
        /* code */
    }
    
    return 0;
}