// Triplet Sum
/*
Problem Statement
You are given an array/list ARR consisting of N integers. Your task is to find all the distinct triplets present in the array which adds up to a given number K.
An array is said to have a triplet {ARR[i], ARR[j], ARR[k]} with sum = 'K' if there exists three indices i, j and k such that i!=j, j!=k and i!=j and ARR[i] + ARR[j] + ARR[k] = 'K'.

Note:
1. You can return the list of values in any order. For example, if a valid triplet is {1, 2, -3}, then {2, -3, 1}, {-3, 2, 1} etc is also valid triplet. Also, the ordering of different triplets can be random i.e if there are more than one valid triplets, you can return them in any order.
2. The elements in the array need not be distinct.
3. If no such triplet is present in the array, then return an empty list, and the output printed for such a test case will be "-1".
*/

#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> tripletSum(vector<int> &nums, int n, int K)
{
    // Brute Force
    // Complexity: Time= O(N³)+O(N); Space= O(N)
    /*
    int i, j, l;
    vector<vector<int>> result;
    unordered_map<int, int> ump;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            for (l = j + 1; l < n; l++)
            {
                if ((arr[i] + arr[j] + arr[l]) == K)
                {
                    if (ump.find(arr[i]) != ump.end() && ump.find(arr[j]) != ump.end() && ump.find(arr[l]) != ump.end())
                    {
                        break;
                    }
                    else
                    {
                        ump[arr[i]] = i;
                        ump[arr[j]] = j;
                        ump[arr[l]] = l;
                        result.push_back(vector<int>{arr[i], arr[j], arr[l]});
                    }
                }
            }
        }
    }
    return result;
    */

    // Two Pointer approach
    //  Complexity: Time= O(N); Space= O(1)
    vector<vector<int>> res;
    int lo, hi, i;
    sort(nums.begin(), nums.end());
    for (i = 0; i < n - 2; i++)
    {
        if (i == 0 || (i > 0 && nums[i] != nums[i - 1]))
        {
            lo = i + 1;
            hi = n - 1;
            int sum = K - nums[i];
            while (lo < hi)
            {
                if (nums[lo] + nums[hi] == sum)
                {
                    vector<int> temp; // temp variable gets new initialization every time so that it only stores 3 values at a time. If you declare temp outside, remember to free its memory after every push to 'res' vector. This will prevent duplicates.
                    temp.push_back(nums[i]);
                    temp.push_back(nums[lo]);
                    temp.push_back(nums[hi]);

                    res.push_back(temp);

                    while (lo < hi && nums[lo] == nums[lo + 1])
                        lo++;
                    while (lo < hi && nums[hi] == nums[hi - 1])
                        hi--;

                    lo++;
                    hi--;
                }
                else if (nums[lo] + nums[hi] < sum)
                {
                    lo++;
                }
                else
                {
                    hi--;
                }
            }
        }
    }
    return res;
}

int main()
{
    return 0;
}