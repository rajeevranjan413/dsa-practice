#include <iostream>
using namespace std;
bool isSortedRotated(int arr[], int size){
    int count=0;
    for (int i = 1; i < size; i++)
    {
        if (arr[i-1]>arr[i])
        {
            count++;
        }
    }
    if (arr[size-1]>arr[0])
    {
        count++;
    }
    return count<=1;
    
    
}
int main()
{
    int arr[]={4,5,1,2,3};
    int size=5;
    bool sortedRotated=isSortedRotated(arr,size);
    if (sortedRotated)
    {
        cout<<"Sorted and rotated Array ";
    }
    else{
        cout<<"Not Sorted and rotated Array";
    }


return 0;
}
