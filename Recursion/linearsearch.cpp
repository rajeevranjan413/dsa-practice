#include <iostream>
using namespace std;
bool linearSearch(int arr[], int size, int key){
    if (size==0)
    {
        return false;
    }
    if (arr[0]==key)
    {
        return true;
    }
    else return linearSearch(arr+1,size-1,key);
    
    
}
int main()
{
    int arr[20]={4,6,8,13,16,18,22};
    if (linearSearch(arr,7,16))
    {
        cout<<"found";
    }
    else
    {
        cout<<"Not found";
    }
    
    
return 0;
}