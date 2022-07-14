// Maximum sub array sum
// Kadane's Algorithm

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

// Brute Force - O(n³)
/*
int maxSubArray(vector<int> nums)
{
    int i, j, k, sum = 0, max = 0;

    for (i = 0; i < nums.size(); i++)
    {
        for (j = 0; j < nums.size(); j++)
        {
            sum = 0;
            for (k = i; k <= j; k++)
            {
                sum += nums[k];
            }
            if (sum > max)
                max = sum;
        }
    }
    return max;
}
*/

// Brute Force - O(n²)
/*
int maxSubArray(vector<int> nums)
{
    int i, j, k, sum = 0, max = 0;

    for (i = 0; i < nums.size(); i++)
    {
        sum = 0;
        for (j = i; j < nums.size(); j++)
        {
            sum += nums[j];

            if (sum > max)
                max = sum;
        }
    }
    return max;
}
*/

// Optimized - Kadane's Algorithm - O(n)
int maxSubArray(vector<int> nums)
{
    int i, j, k, sum = 0, max = 0;

    max = nums[0];
    for (i = 0; i < nums.size(); i++)
    {
        sum += nums[i];
        if (sum > max)
        {
            max = sum;
        }
        if (sum < 0)
        {
            sum = 0;
        }
    }
    return max;
}

int main()
{
    vector<int> nums{1, -2, -5, 3, 1, -2, -5, 3, 1, -2, -5, 3, 1, -2, -5, 3, 1, -2, -5, 3};
    int n, i, val, result;
    // cout << "N = ";
    // cin >> n;

    // cout << "Enter elements = ";
    // for (i = 0; i < n; i++)
    // {
    //     cin >> val;
    //     nums.push_back(val);
    // }

    result = maxSubArray(nums);
    cout << result;
    return 0;
}
