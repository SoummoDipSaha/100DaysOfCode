// Intersection Of Two Sorted Arrays
/*
Problem Statement
You are given two arrays 'A' and 'B' of size 'N' and 'M' respectively. Both these arrays are sorted in non-decreasing order. You have to find the intersection of these two arrays.
Intersection of two arrays is an array that consists of all the common elements occurring in both arrays.
Note :
1. The length of each array is greater than zero.
2. Both the arrays are sorted in non-decreasing order.
3. The output should be in the order of elements that occur in the original arrays.
4. If there is no intersection present then return an empty array.
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> intersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
    int i = 0, j = 0;   // iterating variables
    vector<int> result; // resulting vector

    // Brute Force
    /*
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (arr1[i] == arr2[j])
            {
                result.push_back(arr1[i]);
                arr1[i] = -1;
                arr2[j] = -1;
            }
        }
    }
    */
    // Optimal
    // Two pointer approach
    while (i < n && j < m)
    {
        if (arr1[i] == arr2[j])
        {
            result.push_back(arr1[i]);
            i++;
            j++;
        }
        else if (arr1[i] < arr2[j])
        {
            i++;
        }
        else //(arr1[i]>arr2[j])
        {
            j++;
        }
    }

    return result;
}

int main()
{
    vector<int> arr1;
    vector<int> arr2;
    int i;              // iterating variable
    int n;              // range of vector arr1
    int m;              // range of vector arr2
    int val;            // input value
    vector<int> result; // to store resulting vector returned from function
    cout << "n = ";
    cin >> n;
    cout << "m = ";
    cin >> m;

    cout << "Enter elements for 1st array = ";
    for (i = 0; i < n; i++)
    {
        cin >> val;
        arr1.push_back(val);
    }

    cout << "Enter elements for 2nd array = ";
    for (i = 0; i < m; i++)
    {
        cin >> val;
        arr2.push_back(val);
    }

    result = intersection(arr1, n, arr2, m);

    cout << "Result = ";
    for (i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    return 0;
}