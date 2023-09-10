#include<iostream>
using namespace std;
void selectionSort(int * arr, int size){
    int indexofmin;
    for (int i = 0; i < size-1; i++)
    {
        indexofmin=i;
        for (int j = i+1; j < size; j++)
        {
            if (arr[j]<arr[indexofmin])
            {
                indexofmin=j;
            }
            
        }
        swap(arr[i],arr[indexofmin]);
        
    }
    
}
int main()
{
    int arr[]={1,2,6,1,3,9};
    int size=6;
    selectionSort(arr,size);
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
return 0;
}