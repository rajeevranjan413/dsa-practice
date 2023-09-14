#include <iostream>
#include<string>
using namespace std;

void reverseString(string &name){
    int start=0;
    int end=name.length()-1;
    char temp;
    
    while (start<end)
    {
        temp=name[start];
        name[start]=name[end];
        name[end]=temp;
        start++;
        end--;
    }
    
    
}

int main()
{
    string name;
    cout<<"Enter the String: ";
    cin>>name;
    reverseString(name);
    cout<<name;
    // cout<<"length :"<<length(name);
return 0;
}