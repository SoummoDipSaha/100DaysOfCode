// 1.Two Sum
// https://leetcode.com/problems/two-sum/

#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    unordered_map<int, int> ump;
    vector<int> ans;
    int i;
    for (i = 0; i < nums.size(); i++)
    {
        if (ump.find(target - nums[i]) != ump.end())
        {
            ans.push_back(ump[target - nums[i]]);
            ans.push_back(i);
            return ans;
        }
        ump[nums[i]] = i;
    }
    return ans;
}

int main()
{
    vector<int> nums;
    vector<int> ans;
    int i, n, val, target;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> val;
        nums.push_back(val);
    }
    cin >> target;
    ans = twoSum(nums, target);
    for (i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }
    return 0;
}