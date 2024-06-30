#include<iostream>

using namespace std;
int main()
{
    int a=1,b = 2 ;
    // a--;
    if (a-- > 0 && ++b > 2 )
    {
        cout << "ha";
        cout << a;
        cout << b;
    }
    else 
    {
        cout <<"na";
    }
    
    
    return 0;
}