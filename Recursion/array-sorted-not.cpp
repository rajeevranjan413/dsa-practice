#include <iostream>
using namespace std;
bool isSorted(int * arr,int size){
    if (size==1 || size==0)
    {
        return true;
    }
    if (arr[0]>arr[1])
    {
        return false;
    }
    else 
    return isSorted(arr+1,size-1);
    
    

}
int main()
{
    int arr[10]={1,11,12};
    int size=3;
    if (isSorted(arr,size))
    {
        cout<<"Sorted"<<endl;
    }
    else{
        cout<<"Not Sorted"<<endl;
    }
    
return 0;
}