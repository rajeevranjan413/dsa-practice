#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> pascalTriangle(int rowNums)
{
    vector<vector<int>> ans;

    for (int i = 0; i < rowNums; i++)
    {
        vector<int> rows(i + 1, 1);
        for (int j = 1; j < i; j++)
        {
            rows[j] = ans[i - 1][j] + ans[i - 1][j - 1];
        }
        ans.push_back(rows);
    }
    return ans;
}
int main()
{
    int num;
    cin >> num;
    vector<vector<int>> ans = pascalTriangle(num);
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout
                << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}