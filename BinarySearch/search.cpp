#include <iostream>
#include <vector>
#include<string>
#include<conio.h>
using namespace std;
bool binarySearch(vector<string> v, string element)
{
    
    int start = 0;
    int end = v.size();
    while (start < end)
    {
        if (v.at(start)==element)
        {
            return true;
        }
        start++;
        
    }
    getch();
    return false;
}
int main()
{
    vector<string> v;

    v.push_back("rajeev");
    v.push_back("anshu");
    v.push_back("shubham");
    v.push_back("vivek");
    v.push_back("suraj");
    
    string element;
    cout << "Enter the name for search: ";
    cin >> element;
    if (binarySearch(v,element))
    {
        cout<<"found";
    }
    else{
        cout<<"not found";
    }
    
}