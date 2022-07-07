// Pair Sum (Two Sum)
/*
Problem Statement
You are given an integer array 'ARR' of size 'N' and an integer 'S'. Your task is to return the list of all pairs of elements such that each sum of elements of each pair equals 'S'.
Note:
Each pair should be sorted i.e the first value should be less than or equals to the second value.

Return the list of pairs sorted in non-decreasing order of their first value. In case if two pairs have the same first value, the pair with a smaller second value should come first.
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> pairSum(vector<int> &arr, int n, int s)
{
    int i, j;
    vector<vector<int>> result;
    sort(arr.begin(), arr.end());

    // Brute Force - O(n²)
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if ((arr[i] + arr[j]) == s)
            {
                result.push_back(vector<int>{arr[i], arr[j]});
            }
        }
    }

    // Another approach using unordered map - O(n²)
    return result;
}

int main()
{
    return 0;
}