#include<iostream>

using namespace std;

void printArr(int arr[],int size){
    cout << "array printing" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl << "array printing done" << endl;
    
}

int main()
{
    int array[12] = {1,3,6,9,5,2,1,4,6,4,2,6};
    printArr(array,12);

    int array2[10] = {1};
    printArr(array2,10);
    
    int array3[45] = {1,2,3,4,5,6,7,8,9,0};

    cout <<sizeof(array3)/sizeof(int);
}