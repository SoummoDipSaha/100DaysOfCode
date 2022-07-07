// Flip bits
/*
You are given an array of integers ARR[] of size N consisting of zeros and ones. You have to select a subset and flip bits of that subset. You have to return the count of maximum one’s that you can obtain by flipping chosen sub-array at most once.
A flip operation is one in which you turn 1 into 0 and 0 into 1.

For Example:
If you are given an array {1, 1, 0, 0, 1} then you will have to return the count of maximum one’s you can obtain by flipping anyone chosen sub-array at most once, so here you will clearly choose sub-array from the index 2 to 3 and then flip it's bits. So, the final array comes out to be {1, 1, 1, 1, 1} which contains five ones and so you will return 5.
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int flipBits(vector<int> arr)
{
    int max = 0, sum = 0, count = 0, i;

    for (i = 0; i < arr.size(); i++)
    {
        if (arr[i] == 1)
        {
            sum--;
            count++;
        }

        if (arr[i] == 0)
        {
            sum++;
        }

        if (sum < 0)
        {
            sum = 0;
        }

        if (sum > max)
        {
            max = sum;
        }
    }
    return (count + max);
}

int main()
{
    vector<int> arr;
    int i, n, val, result; // i=iterating variable; n=range; val=input by user to be pushed in the vector; result=to store value from function
    cout << "N = ";
    cin >> n;

    cout << "Enter elements = ";
    for (i = 0; i < n; i++)
    {
        cin >> val;
        arr.push_back(val);
    }

    result = flipBits(arr);
    cout << result;
    return 0;
}