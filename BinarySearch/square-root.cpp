#include <iostream>
using namespace std;
int sqrtInt(int n){
    int s=0;
    int e=n;
    int mid=(s+e)>>1;
    int ans=-1;
    while (s<=e)
    {
        int square=mid*mid;
        if(square==n){
            return mid;
        }
        if(square<n){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=(s+e)>>1;

    }
    return ans;
    
}
double morePrecision(int n,int temp,int precision){
    double factor=1;
    double ans=temp;
    for (int i = 0; i < precision; i++)
    {
        factor/=10;
        for (double j = temp; j*j < n ; j=j+factor)
        {
            ans=j;
        }
        
    }
    return ans;
    
}
int main()
{
    int n;
    cout<<"Enter the no.: ";
    cin>>n;
    int temp=sqrtInt(n);
    cout<<"Square Root :"<<morePrecision(n,temp ,2);
    
    return 0;
}