#include <bits/stdc++.h>
using namespace std;

// 0,1,1,2,3,5,8,13,21........ ->fib series

//                f(5)
//                / \
//            f(4)   f(3)
//           / \      / \
//       f(3)  f(2) f(2) f(1)
//        / \
//    f(2)  f(1)




int fib(int n)
{
    if (n == 1)
        return 0;
    if (n == 2)
        return 1;
    return fib(n - 1) + fib(n - 2);
}
int main()
{
    int n = 6;
    cout << fib(n);
    return 0;
}