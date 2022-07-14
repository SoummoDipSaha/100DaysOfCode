// Sort Colors
/*
Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.
We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.

**You must solve this problem without using the library's sort function.

Example 1:

Input: nums = [2,0,2,1,1,0]
Output: [0,0,1,1,2,2]
*/

// Dutch National Flag algorithm

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void sort012(vector<int> &nums)
{

    // Approach 1 - O(2N)
    //  Complexity = Time: O(N) + O(N) ; Space = O(1)
    /*
    int c0 = 0, c1 = 0, c2 = 0;
    int i;

    for (i = 0; i < nums.size(); i++)
    {
        switch (nums[i])
        {
        case 0:
            c0++;
            break;
        case 1:
            c1++;
            break;
        case 2:
            c2++;
            break;
        }

        i = 0;
        while (c0 > 0)
        {
            nums[i++] = 0;
            c0--;
        }

        while (c1 > 0)
        {
            nums[i++] = 1;
            c1--;
        }

        while (c2 > 0)
        {
            nums[i++] = 2;
            c2--;
        }
    }
    */

    // Dutch National Flag algorithm
    // Complexity = Time: O(N) ; Space: O(1)
    int low = 0, mid = 0, high = nums.size() - 1;
    while (mid <= high)
    {
        switch (nums[mid])
        {
        case 0:
            swap(nums[mid], nums[low]);
            low++;
            mid++;
            break;
        case 1:
            mid++;
            break;
        case 2:
            swap(nums[mid], nums[high]);
            high--;
            break;
        }
    }
}

int main()
{
    return 0;
}
