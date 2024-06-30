#include<iostream>

using namespace std;

int sumOFarray(int arr[],int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}

int main()
{
    int size;
    cout << "Enter array size :- ";
    cin >> size;

    int array[1000];

    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    
    cout << "Array Sum is :- " <<sumOFarray(array,size);
    return 0;
}