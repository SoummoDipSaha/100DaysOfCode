/*
Given T test cases and an array of size N. Print sum of array in each test case.
*/
// Constraints:
// Case 1
/*
1 <= T <= 1000
1 <= N <= 1000
1 <= a[i] <= 1000

Time Complexity = O(N*T) = O(N²)
*/

// Case 2
/*
1 <= T <= 1000
1 <= N <= 1000
1 <= a[i] <= 1000
Sum of N over all test cases is < 10⁷

For example-
If T=10⁶, and N=1 for all test cases then the loop will iterate only once per test case,
which will result in O(N*T) = O(1*10⁶) ~ O(10⁶)

Lets calculate the time complexity for the above constraint-
t=0 ---> n₀
t=1 ---> n₁
t=2 ---> n₂
.
.
.
t=t ---> nₜ

Given,
n₀ + n₁ + n₂ +...+ nₜ < 10⁷
n₀ + n₁ + n₂ +...+ nₜ = count
count < 10⁷

Time Complexity = O(count) ~ O(10⁷)
*/

#include <iostream>

using namespace std;

int main()
{
    int T;
    int N;
    int sum, x, count;
    cin >> T;
    while (T--)
    {
        cin >> N;
        for (int i = 0; i < N; i++)
        {
            cin >> x;
            sum += x;
            count++;
        }
        cout << sum << endl;
    }
}
