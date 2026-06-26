# Split Array Largest Sum (LeetCode 410)

## Problem

Given an integer array `nums` and an integer `k`, split the array into **k non-empty contiguous subarrays**.

Return the **minimum possible largest sum** among these subarrays.

---

## Example

### Input

```cpp
nums = [7,2,5,10,8]
k = 2
```

### Output

```cpp
18
```

### Explanation

Possible splits:

```text
[7,2,5] | [10,8]
14          18
Largest = 18
```

```text
[7,2] | [5,10,8]
9           23
Largest = 23
```

```text
[7] | [2,5,10,8]
7           25
Largest = 25
```

Among all largest sums,

```text
18
23
25
```

Minimum is

```text
18
```

---

# What is a Subarray?

A subarray is a **continuous (contiguous)** part of an array.

Example

```text
nums = [1,2,3,4]
```

Valid subarrays

```text
[1]
[2]
[3]

[1,2]
[2,3]
[3,4]

[1,2,3]

[2,3,4]

[1,2,3,4]
```

Invalid

```text
[1,3]
[2,4]
[1,4]
```

Because elements are skipped.

---

# Observation

We need to

> Minimize the **largest** subarray sum.

Whenever a problem asks

- Minimize the maximum
- Maximize the minimum

Think

```text
Binary Search on Answer
```

---

# Search Space

The answer cannot be smaller than the largest element.

Example

```text
nums = [7,2,5,10,8]
```

Largest element

```text
10
```

So

```text
Minimum Answer = 10
```

---

Maximum possible answer

One subarray contains every element.

```text
7+2+5+10+8

=32
```

So

```text
Search Space

10 ----------------------32
```

---

# Binary Search

```cpp
low = maximum element

high = sum of array
```

Find

```text
Minimum valid answer
```

---

# Feasibility Check

Suppose

```text
mid = 21
```

Question

Can we split the array into at most 2 subarrays where each subarray sum is at most 21?

---

Current Sum

```text
7

7+2=9

9+5=14

14+10=24
```

Cannot include 10.

Create new subarray.

```text
Subarray 1

[7,2,5]

Sum =14
```

Second subarray

```text
10

10+8=18
```

Subarray 2

```text
[10,8]

Sum=18
```

Used

```text
2 subarrays
```

Allowed

```text
2
```

Valid

---

Suppose

```text
mid =15
```

First

```text
7

9

14
```

Next

```text
14+10

24

Not Possible
```

New subarray

```text
10
```

Next

```text
10+8

18

Again Not Possible
```

Need another subarray.

Total

```text
3 subarrays
```

Allowed

```text
2
```

Invalid

---

# Why Search Smaller?

Suppose

```text
mid =21
```

is valid.

That means

```text
Largest Sum =21
```

works.

Can a smaller answer also work?

Maybe.

Could

```text
20

19

18
```

work?

Yes.

So search left.

```cpp
high = mid-1;
```

---

Suppose

```text
mid =15
```

is invalid.

Can

```text
14

13

12
```

work?

No.

If 15 itself is impossible, every smaller value is also impossible.

So search right.

```cpp
low = mid+1;
```

---

# Dry Run

```text
nums=[7,2,5,10,8]

k=2
```

Initial

```text
low =10

high=32
```

---

### mid

```text
21
```

Valid

Store

```text
answer=21
```

Search Left

```text
10------20
```

---

### mid

```text
15
```

Invalid

Search Right

```text
16------20
```

---

### mid

```text
18
```

Valid

Store

```text
answer=18
```

Search Left

```text
16------17
```

---

### mid

```text
16
```

Invalid

Search Right

```text
17------17
```

---

### mid

```text
17
```

Invalid

Search Right

```text
18------17
```

Stop.

Final Answer

```text
18
```

---

# Algorithm

### Step 1

Find

```cpp
low = maximum element
```

### Step 2

Find

```cpp
high = sum of array
```

### Step 3

Binary Search

```cpp
while(low<=high)
```

### Step 4

Find

```cpp
mid
```

### Step 5

Check

Can we split into at most k subarrays where every subarray sum ≤ mid?

### Step 6

If Valid

```cpp
answer = mid

high = mid-1
```

Search for a smaller answer.

### Step 7

If Invalid

```cpp
low = mid+1
```

Need a larger answer.

---

# Feasibility Function

Maintain

```text
currentSum

subarrayCount
```

Traverse every element.

If

```text
currentSum + nums[i] <= mid
```

Continue current subarray.

Else

```text
Create new subarray

Increase count
```

Finally

```cpp
return subarrayCount <= k;
```

---

# Complexity

### Binary Search

```text
log(sum-max)
```

### Feasibility Check

```text
O(n)
```

### Overall

```text
O(n log(sum))
```

---

# Pattern Recognition

If a problem says

- Minimize maximum
- Maximum minimum
- Capacity
- Speed
- Time
- Continuous partition

Think

```text
Binary Search on Answer
```

---

# Similar Problems

- Painter Partition Problem
- Allocate Books
- Capacity To Ship Packages Within D Days (LeetCode 1011)
- Koko Eating Bananas (LeetCode 875)
- Minimum Limit of Balls in a Bag (LeetCode 1760)

All follow the same Binary Search on Answer pattern.
