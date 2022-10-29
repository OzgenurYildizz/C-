#include <iostream>
using namespace std;
 

void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (j = 1; j < n; j++)
    {
        key = arr[j]; //kıyasla
        i = j - 1;
 
       
        while (i >= 0 && arr[i] > key)
        {
            arr[i + 1] = arr[i];
            i = i - 1;
            
        }
        arr[i + 1] = key;
    }
    
}
 

void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
 
int main()
{
    int arr[] = {5,2,4,6,1,3};
    int n = sizeof(arr) / sizeof(arr[0]); //hepsinin total boyutunu tek birinin boyutuna bölerek eleman sayısını buluyo.
 
    insertionSort(arr, n);
    printArray(arr, n);
 
    return 0;
}
