#include <iostream>
using namespace std;
void insertionSort(int * arr,int size){

        if (size<=1)
        {
            return;
        }

        insertionSort(arr,size-1);

        int last=arr[size-1];
        int j=size-2;
        while (j>=0 && arr[j]>last)
        {
            arr[j+1]=arr[j];
            j--;
        }
        
        arr[j+1]=last;
}
int main()
{
    int arr[]={11,99,45};
    int size=3;
    insertionSort(arr,size);
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
    return 0;
}