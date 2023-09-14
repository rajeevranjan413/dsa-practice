#include <iostream>
using namespace std;
bool issorted(int arr[],int size){
    int count=0;
    for (int i = 1; i < size; i++)
    {
        if (arr[i-1]>arr[i])
        {
            count++;
        }
        
    }
    return count==0;
    
}
int main()
{
    int arr[]={1,2,3,4,5};
    int size=5;
    bool sorted=issorted(arr,size);
    if (sorted)
    {
        cout<<"Sorted Array ";
    }
    else{
        cout<<"Not Sorted Array";
    }


return 0;
}