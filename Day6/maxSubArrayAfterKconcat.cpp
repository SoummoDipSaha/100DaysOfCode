// Maximum subarray sum after K concatenation
/*
You have been given a vector/list 'ARR' consisting of ‘N’ integers. You are also given a positive integer ‘K’.
Let’s define a vector/list 'CONCAT' of size 'N * K' formed by concatenating 'ARR' ‘K’ times. For example, if 'ARR' = [0, -1, 2] and 'K' = 3, then 'CONCAT' is given by [0, -1, 2, 0, -1, 2, 0, -1, 2].
Your task is to find the maximum possible sum of any non-empty subarray (contagious) of 'CONCAT'.
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Approach - without creating arr[2*n]
// We take arr[i%n] which gives remainder. Therefore, if i==n then this will restart the value of i=0
/*
int maxSubArray(vector<int> &arr, int n, int k)
{
    int max = 0;
    int sum = 0;
    int i;
    max = arr[0];
    for (i = 0; i < n * k; i++)
    {
        sum += arr[i % n];
        if(sum>max){
            max = sum;
        }
        if(sum<0){
            sum=0;
        }
    }
    return max;
}
*/

// Approach 2 - taking 3 conditions
// find the 'sum' of arr[n]
// if(k==1), then find the kadane's of the array
// if(sum<0), then find the kadane's of arr[2*n]
// if(sum>0), then find the kadane's of arr[2*n] + (k-2)*sum
int kadanes(vector<int> &arr, int n)
{
    int max = 0, sum = 0, i;
    max = arr[0];
    for (i = 0; i < n; i++)
    {
        sum += arr[i];
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

int kadanesoftwo(vector<int> &arr, int n)
{
    vector<int> twoarr;
    int i, j = 0;
    int val;
    for (i = 0; i < (2 * n); i++)
    {
        twoarr.push_back(arr[j]);
        if (j == (n - 1))
        {
            j = 0;
        }
        else
            j++;
    }
    return kadanes(twoarr, (2 * n));
}
int maxSubArray(vector<int> &arr, int n, int k)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    if (k == 1)
    {
        return kadanes(arr, n);
    }
    else if (sum < 0)
    {
        return kadanesoftwo(arr, n);
    }
    else
    {
        return kadanesoftwo(arr, n) + (k - 2) * sum;
    }
}
int main()
{
    vector<int> arr; // vector to store elements
    int n;           // size of vector
    int sum = 0;     // sum of the elements in the vector
    int val;         // variable used to push into vector
    int i;           // iterating variable
    int t;           // no. of test cases
    int result;      // to store the max subarray sum returned by the maxSubArray function
    int k;           // no. of concatenation

    cout << "T = ";
    cin >> t;

    while (t--)
    {
        cout << "N = ";
        cin >> n;

        cout << "K = ";
        cin >> k;

        cout << "Enter elements = ";
        for (i = 0; i < n; i++)
        {
            cin >> val;
            arr.push_back(val);
        }
        result = maxSubArray(arr, n, k);
        cout << result << endl;
    }

    return 0;
}