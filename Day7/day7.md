# Day 7

## Topics covered:
1. Two Pointer approach
2. Dutch National Flag Algorithm

## Problems solved:
1. 3 Sum
`Intuition`: 
-> Use two pointer approach. 

-> Run a single loop from (i = 0 to i < n-2), because it can happen that there is a triplet from index n-3 to n-1.

-> Check a condition if arr[i]!=arr[i-1], because at any index we will be checking all the possible triplets that are equal to `target`. Hence we can skip all the similar arr[i] values.
*For example*:
-2 -2 -2 -1 -1 0 0 0 1 1 2 2
Target = 0
For, i=0, arr[i]=-2
There can be only one triplet [-2, 0, 2].
Now for, i=1, arr[i]=-2, we will be getting the same triplet eventually which will invite duplicate triplets into play.

-> Keep a[i] which is constant throughout one iteration. Keep two pointers/variables low=i+1 and high=n-1. Keep a sum variable which is target-arr[i] and use this variable to check arr[low]+arr[high]==sum.

-> Run while loop (low < high)

-> Now there can be 3 conditions:
1. when arr[low]+arr[high]==sum
- push the three the values
- iterate two loops: (i)to check if arr[low]==arr[low+1], then low++. (ii) to check if arr[high]==arr[high+1], then high--. This will prevent duplicateness of values and will always give distinct triplets.
- increment low++, decrement high--
2. when arr[low]+arr[high] < sum
- as arr[low]+arr[high] is lower than sum, we must increment low++.
3. when arr[low]+arr[high]>sum
- as arr[low]+arr[high] is greater than sum, we must decrement high--.

2. Sort 0 1 2
`Intuition`:
-> Use Dutch National Flag algorithm.
- Just like the Netherlands flag, the array has three sections. O's represent the red, 1's represent the white, 2's represent the blue.

-> Iterate from i=0 to i < n.

-> Keep three variables low=0, mid=0, high=n-1.
- we will be swapping 0's to the low index.
- 2's will be swapped to the high index.
- the mid variable represent the 1's and they will get automatically sorted.

-> There are 3 conditions:
- If arr[i]==0, then swap arr[i] and arr[low] to keep 0 at the low index. Increment low++, mid++
- If arr[i]==1, then mid++
- if arr[i]==2, then swap arr[i] and arr[high] to keep 2 at the high index. Decrement high--.
