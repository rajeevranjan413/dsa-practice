#include <bits/stdc++.h>
using namespace std;
int peakIndex(vector<int> &mountain)
{
    // linear Search
    // int peakIndex = 0;
    // while (mountain[peakIndex] <= mountain[peakIndex + 1])
    // {
    //     peakIndex++;
    // }
    // return peakIndex;

    // Binary Search

    int start = 0;
    int end = mountain.size() - 1;
    int mid = (start + end) >> 1;
    while (start < end)
    {

        if (mountain[mid] < mountain[mid + 1])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = (start + end) >> 1;
    }
    return end;
}
int main()
{
    vector<int> mountain = {1, 3, 5, 6, 4};
    int peak = peakIndex(mountain);
    cout << "Peak Index in Mountain array is " << peak;
    return 0;
}