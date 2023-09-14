#include <iostream>
using namespace std;
char lowerCase(char ch){
    if (ch>='a' && ch<='z')
    {
        return ch;
    }
    else{
        return ch-'A'+'a';
    }
    
}
bool palindrome(string word,int start,int end){
    if (start>end)
    {
        return true;
    }
    if (lowerCase(word[start])!=lowerCase(word[end]))
    {
        return false;
    }
    start++;
    end--;
    return palindrome(word,start,end);
    
    
}

int main()
{
    string word="NOOn";
    if (palindrome(word,0,word.length()-1))
    {
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
   
    
    
return 0;
}