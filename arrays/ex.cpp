#include<iostream>

using namespace std;

int getmax(int arr[],int n)
{
    int max = arr[0];
    // 4 [42,5,78,97]
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max) // 97 > 78
        {
            max = arr[i];
        }
    }
    return max;
}

int getmin(int arr[],int n)
{
    int min = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (min > arr[i])  
        {
            min = arr[i];
        }
    }
    return min;
}
int main()
{
    int size;
    cout <<"enter array size :- ";
    cin >> size ;

    int array[100000];

    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    
    cout <<"this is min :- " << getmin(array,size) << endl;
    cout <<"this is max :- " << getmax(array,size) << endl;

    return 0;
}