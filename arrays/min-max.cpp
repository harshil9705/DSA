#include<iostream>

using namespace std;

int getMin(int arr[],int size)
{
    int min = INT8_MAX;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        
    }
    return min;
}

int getMax(int arr[],int size)
{
    int max = INT8_MIN;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        
    }
    return max;
}

int main()
{
    int size;
    cin >> size;

    int arr[100];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    
    cout << " minimun number is " << getMin(arr,size) << endl;
    cout << " maximun number is " << getMax(arr,size) << endl;
    return 0;
}