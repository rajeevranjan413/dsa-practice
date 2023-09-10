#include <iostream>
using namespace std;
void bubbleSort(int * arr,int size){
    for (int i = 0; i < size-1; i++)
    {
        for (int j = 0; j < size-1-i; j++)
        {
            if (arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
            
        }
        
    }
    
}
int main()
{
    int arr[]={1,2,6,1,3,9};
    int size=6;
    bubbleSort(arr,size);
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
return 0;
}