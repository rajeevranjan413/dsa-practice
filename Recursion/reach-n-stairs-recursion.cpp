#include <iostream>
using namespace std;
int wayToStairs(int n){
    if (n==0)
    {
        return 1;
    }
    if (n<0)
    {
        return 0;
    }

    return wayToStairs(n-1)+wayToStairs(n-2);
    
    
}
int main()
{
    int n;
    cout<<"Enter the no. of stairs : ";
    cin>>n;
    cout<<"Total distinct way to reach nth stairs is : "<<wayToStairs(n);
return 0;
}