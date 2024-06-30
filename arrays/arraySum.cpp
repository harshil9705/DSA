#include<iostream>

using namespace std;

void average(int arr1[],int arr2[],int n)
{
    int sum[n];
    for(int i = 0; i < n; i++)
    {
        sum[i] = arr1[i] + arr2[i];
        cout << sum[i] << " ";
    }
}

int main()
{
    int arr1[5] = {1,2,20,31,3};
    int arr2[5] = {1,2,20,31,3};


    average(arr1,arr2,5);


}