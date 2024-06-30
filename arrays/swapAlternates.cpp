#include<iostream>

using namespace std;
// alternate swap fun
void alternate(int arr[], int n)
{
    for (int i = 0; i < n; i+=2)
    {
        if (i+1 < n)
        {
            swap(arr[i],arr[i+1]);
        }
        
    }
    
}
// print array fun
void printarray(int arr[],int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[6] = {2,4,6,8,10,12};
    int arr2[7] = {2,4,6,8,10,12,14};

    alternate(arr,6);
    printarray(arr,6);

    alternate(arr2,7);
    printarray(arr2,7);
    return 0;
}
