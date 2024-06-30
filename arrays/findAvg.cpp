#include<iostream>

using namespace std;

void average(int arr[],int n)
{
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    cout << sum / n;
}

int main()
{
    int arr[5] = {1,2,20,31,3};


    average(arr,5);


}