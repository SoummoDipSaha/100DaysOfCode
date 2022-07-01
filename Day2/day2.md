# Day 2

## Time Complexity

### What do we need to consider while thinking about complexity?

--> Always look for worst case complexity.
//A website can handle 100 users at a time. Suppose, 2 million users want to log in at the same time on this website, this will cause the website to crash. To avoid this, always plan for the worst case.

--> Always look at complexity for large/infinite data.

--> Ignore the constants.
O(2n³) ~ O(n³)

--> Always ignore less dominating terms.
O(n² + log n); (n=10²)
((10²)² + log₂10²)
(10⁴ + 6) ~ (10⁴)

For example-
O(3n³ + 4n² + 5n + 6)
= O(n³ + n² + n) // Ignore all constants
= O(n³) // Ignore less dominating terms

**Time complexities' comparison**
O(1) < O(log (N)) < O(N) < O(N log (N)) < O(N²) < O(2ⁿ)
(*Remember to see the graphical representation*)













