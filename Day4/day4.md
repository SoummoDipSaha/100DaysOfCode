# Day 4

## Arrays

**Array is a collection of elements of similar data-type with contiguous memory location. It is the simplest of data structures.**

### Advantages of array
1. Simple to use
2. We implement arrays where we require fast access time, because it provides O(1) complexity.
3. Arrays provide multidimensional scalability.

### Disadvantages of array
1. Arrays are of fixed size(static allocation). This creates a problem when the number of elements needed is unknown.
2. We have to pre-allocate a fixed amount of space for arrays. This leads to wastage of memory blocks when the number of elements is actually lesser than the array size.
3. Insertion and deletion of elements in arrays is complex. Suppose we want to insert an element at the beginning of an array then it requires every element to be shifted right(if memory is available).

### Time Complexities

*Inserting an element*: O(1)
*Inserting an element at iᵗʰ position*: We have to shift all the elements after iᵗʰ position to the right. O(N-i)
*Inserting an element at the beginning*: We have to shift all the elements after to the right. O(N)

*Deleting an element*: O(1)
*Deleting an element at iᵗʰ position*: We have to shift all the elements after iᵗʰ position to the left. O(N-i-1)
*Deleting an element at the beginning*: We have to shift all the elements after to the left. O(N)

*Search for an element*: O(N)

*Access an element*: O(1)


