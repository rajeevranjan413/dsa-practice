#include <iostream>
#include <vector>
using namespace std;
vector<int> reverse(vector<int> v)
{
    int temp;
    int s = 0, e = v.size() - 1;
    while (s < e)
    {

        temp = v[s];
        v[s++] = v[e];
        v[e--] = temp;
    }
    return v;
}
void print(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> v;
    v.push_back(3);
    v.push_back(4);
    v.push_back(7);
    v.push_back(3);
    v.push_back(8);
    print(v);
    vector<int> ans = reverse(v);
    print(ans);

    return 0;
}