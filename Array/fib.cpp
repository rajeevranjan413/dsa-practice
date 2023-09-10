#include <iostream>
using namespace std;
// series: 0,1,1,2,3,5,8,13

int fib(int n){

    cout<<n<<" ";
    if (n==1)
    {
        return 1;
    }
    return n*fib(n-1);   
}

int main()
{

    int n;
    cin>>n;
    // cout<<"Fib of "<<n<<"th term is :"<<fib(n);
    cout<<fib(n);
    
return 0;
}