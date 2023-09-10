#include <iostream>
using namespace std;
void insertionSort(int * arr , int size){
    
    for (int i = 1; i < size; i++)
    {
        int pivot=arr[i];
        int position=i;
        
        for ( int j = i-1; j >=0; j--)
        {
            
            
            if (arr[j]>pivot)
            {
                arr[j+1]=arr[j];
                position=j;                
            }
            else{break;}
            
            
        }
        arr[position]=pivot;
        
    }
                    
}
int main()
{
    int arr[]={1,2,6,1,3,9};
    int size=6;
    insertionSort(arr,size);
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
return 0;
}