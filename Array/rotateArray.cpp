#include <iostream>
using namespace std;
int* rotateArray(int arr[], int size,int k){
    int* newArray=new int[size];
    for (int i = 0; i < size; i++)
    {
        newArray[(i+k)%size]=arr[i];
    }
    return newArray;
    

}
int main()
{
    int arr[]={0,4,5,0,6,0,8,9};
    int size=8;
    int* Array=rotateArray(arr,size,3);
    for(int i=0; i<size; i++){
        cout<<Array[i]<<" ";
    }


return 0;
}