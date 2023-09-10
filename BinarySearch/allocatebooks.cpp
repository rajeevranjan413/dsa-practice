#include <iostream>
using namespace std;
bool isPossible(int books[],int barier,int student,int totalbooks){
    int currstudent=1,pages=0;
    for (int i = 0; i < totalbooks; i++)
    {
        if (pages+books[i]<=barier)
        {
            pages+=books[i];
        }
        else{
            currstudent+=1;
            if (currstudent>student || books[i]>barier)
            {
                return false;
            }            
            pages=books[i];
        }
        
    }
    return true;
    

}
int allocate(int books[],int student,int totoalbooks){
    int start=0,end;
    int sum=0;
    for (int i = 0; i < totoalbooks; i++)
    {
        sum+=books[i];
    }
    end=sum;
    int ans=-1;
    int mid=(start+end)>>1;
    while (start<=end)
    {
        if(isPossible(books,mid,student,totoalbooks)){
            ans=mid;
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid=(start+end)>>1;
    }
    
    return ans;

}
int main()
{
    int books[]={5,7,9,20};
    int student=2;
    int totalbooks=4;


    cout<<"The maximum allocate pages of minimum is "<<allocate(books,student,totalbooks);
    return 0;
}