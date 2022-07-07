# Day 6

## Topics covered:
1. Kadane's Algorithm
2. Two Pointer approach

## Problems solved:
1. Maximum subarray sum after K concatenation - CodeStudio
`Intuition`: 
-> Use Kadane's algo
-> Run a single loop from (i = 0 to i < n * K), and use array elements as arr[i%n].
-> [i%n] gives the remainder. So, if i==n at any time then remainder=0, therefore `i` restarts from 0.

2. Intersection of Two Sorted arrays - CodeS
`Intuition`:
-> Use a two pointer approach using i and j 
-> There can be 3 conditions-
    (i) If arr1[i] == arr2[j], then increment both, i++ and j++.
    (ii) If arr1[i] < arr2[j], then increment i++.
    (iii) If arr1[i] > arr2[j], then increment j++.

3. Pair sum - CodeS
`Intuition`:
-> Start the 2ⁿᵈ loop from (i+1). 
-> Because there's no gain in checking (arr[i]+arr[j] == target) (where, j=i). 
This would mean (2*arr[i]) which is unnecessary.