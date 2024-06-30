#include<iostream>

using namespace std;

void update(int arr[],int n)
{
    cout <<  "inside the finction" << endl; 

    arr[1] = 1212;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl << "goback to Main funtion" << endl;

}
int main(){

    int arr[5] = {4,6,2,8,38};

    update(arr,5);

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;    
} // namespace int;
