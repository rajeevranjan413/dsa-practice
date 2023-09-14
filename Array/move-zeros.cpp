#include <iostream>
using namespace std;
void moveZeros(int arr[],int size){
    int i=0,temp;
    for (int j = 0; j < size; j++)
    {
        if (arr[j]!=0)
        {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            i++;
        }
        
    }
    
}
int main()
{
    int arr[]={0,4,5,0,6,0,8,9};
    int size=8;
    moveZeros(arr,size);
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }


return 0;
}