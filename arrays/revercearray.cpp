#include<iostream>

using namespace std;

void reverce(int arr[],int n){

    int start = 0;
    int end = n-1;

    while (start <= end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}


void printarr(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout <<arr[i] << " " ;
    }

    cout << endl;
    
}

int main()
{
    int arr1[5] = {2,78,-21,34,56};
    int arr2[6] = {3,7,-5,2,1,8};

    reverce(arr1,5);
    reverce(arr2,6);
    
    printarr(arr1,5);
    printarr(arr2,6);

    
    return 0;
}