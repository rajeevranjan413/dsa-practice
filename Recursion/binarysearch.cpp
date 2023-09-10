#include <iostream>
using namespace std;
int binarySearch(int arr[],int start, int end, int key){
    if (start>end)
    {
        return -1;
    }
    int mid=start+(end-start)/2;
    if (arr[mid]==key)
    {
        return mid;
    }
    if (arr[mid]<key)
    {
        return binarySearch(arr,mid+1,end,key);
    }
    else{
        return binarySearch(arr,start,mid-1,key);
    }
    
    
    
}
int main()
{
    int arr[20]={4,6,8,13,16,18,22};
    cout<<"Element found at : "<<binarySearch(arr,0,6,22);
    
return 0;
}