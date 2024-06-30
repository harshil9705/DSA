#include<iostream>

using namespace std;

void duplicate(int arr[],int n)
{
    int ans = 0;
    for (int i = 1; i < n; i++)
    {
        cout <<arr[i] << " " << arr[ans] << endl;
        if( arr[ans] == arr[i])
        {
            cout << " " <<  ans;
        }  
        ans++;
    }
}

int main()
{
    int arr[6]={7,1,2,3,4,1};

    duplicate(arr,6);

    return 0;
}