#include <iostream>
using namespace std;
void bubbleSort(int *arr,int size){
    if (size==1)
    {
        return;
    }
    int temp;
    for (int i = 0; i < size-1; i++)
    {
        
        if (arr[i]>arr[i+1])
        {
            temp=arr[i+1];
            arr[i+1]=arr[i];
            arr[i]=temp;
        }
        
    }
    bubbleSort(arr,size-1);
    
    
    
}

int main()
{
    int arr[]={12,44,33};
    int size=3;
    bubbleSort(arr,size);
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
   
   

    
return 0;
}