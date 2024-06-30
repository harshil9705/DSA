#include<iostream>

using namespace std;

int main()
{

    int start,end,count = 0,arr[1000];  
    cout << "enter Start year :-";
    cin >> start;
    cout << "enter End year :-";
    cin >> end;

    for (int i = start; i<=end; i++)
    {
        if (i % 4 == 0)
        {
            arr[count++] = i;
        }
        
    }

    for (int i = 0; i < count; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "total leap year :- " << count;
    
    return 0;
}