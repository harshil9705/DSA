#include<iostream>

using namespace std;

bool search(int arr[],int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }   
    }
    return 0;
}
int main()
{
    int arr[10] = {21,43,57,64,3,1,3,57,45,65};

    cout << "enter the search key" << endl;
    int key;
    cin >>key;

    int result = search(arr,10,key);

    if (result)
    {
        cout << "key is prasent" << endl;
    }
    else 
    {
        cout << "key is absent" << endl;
    }
    return 0;
}