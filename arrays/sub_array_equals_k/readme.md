I'm doing well, thanks! 😄 Hope your DSA journey is going strong.

This is one of the **most important interview problems** because it teaches **Prefix Sum + Hash Map**. Once you understand this, many hard problems become easier.

---

# Problem

**LeetCode 560 - Subarray Sum Equals K**

Given:

```cpp
nums = [1,2,3]
k = 3
```

Find how many **continuous subarrays** have sum = `k`.

---

# Brute Force

Generate every subarray.

```
[1]
[1,2] ✅
[1,2,3]

[2]
[2,3]
[3] ✅
```

Answer = 2

Time

```
O(n²)
```

We need better.

---

# Prefix Sum Idea

Prefix Sum means

```
prefix[i]

=

sum from index 0 to i
```

Example

```
nums

1  2  3  4

Prefix

1
3
6
10
```

Because

```
1

1+2 = 3

1+2+3 = 6

1+2+3+4 = 10
```

---

# How do we get subarray sum?

Suppose

```
nums

1 2 3 4

Prefix

1 3 6 10
```

Want

```
subarray

2 3
```

Its sum

```
5
```

Formula

```
Subarray Sum

=

Prefix[right] - Prefix[left-1]
```

Example

```
Prefix[2] = 6

Prefix[0] = 1

6-1 =5
```

Correct.

---

# Main Idea

Suppose current prefix is

```
currentPrefix
```

We want

```
currentPrefix - oldPrefix = k
```

Rearrange

```
oldPrefix = currentPrefix - k
```

This is the whole algorithm.

Instead of searching every previous prefix,

we store every prefix inside a HashMap.

---

# Example

```
nums

1 2 3

k=3
```

Prefix

```
1
3
6
```

At

```
Prefix = 6
```

Need

```
6-3 =3
```

Have we seen prefix

```
3 ?
```

Yes.

Then

```
6-3 =3
```

means

```
subarray

[3]
```

exists.

---

# Your Code

```cpp
vector<int> prefixSum(n,0);

prefixSum[0]=nums[0];
```

Creates

```
Prefix Array
```

---

```cpp
for(int i=1;i<n;i++)
{
    prefixSum[i]=prefixSum[i-1]+nums[i];
}
```

Builds

```
Prefix

1
3
6
```

---

HashMap

```cpp
unordered_map<int,int> m;
```

Stores

```
Prefix Sum

↓

Frequency
```

Example

```
3 → 2

means

Prefix sum 3 appeared twice.
```

---

Loop

```cpp
for(int j=0;j<n;j++)
```

Visit every prefix.

---

## Step 1

```cpp
if(prefixSum[j]==k)
    count++;
```

Why?

Suppose

```
Prefix

5

k=5
```

Then

```
0 → current
```

itself is answer.

Example

```
2 3

Prefix

2
5
```

Whole array

```
2+3=5
```

Answer.

---

## Step 2

```cpp
int val = prefixSum[j]-k;
```

Need

```
oldPrefix=currentPrefix-k
```

---

## Step 3

```cpp
if(m.find(val)!=m.end())
{
    count+=m[val];
}
```

If that prefix already exists,

then every occurrence gives one valid subarray.

---

Example

Suppose

```
HashMap

3 → 2
```

Current prefix

```
8
```

Need

```
8-5=3
```

Since prefix

```
3
```

occurred twice,

we get

```
2 new subarrays.
```

---

## Step 4

```cpp
m[prefixSum[j]]++;
```

Store current prefix for future.

---

# Dry Run

Example

```
nums

1 2 3

k=3
```

Prefix

```
1
3
6
```

Initially

```
count=0

Map={}
```

---

## j=0

Current Prefix

```
1
```

```
1==3 ?

No
```

Need

```
1-3=-2
```

Map

```
{}
```

Not found.

Store

```
1
```

Map

```
1→1
```

Count

```
0
```

---

## j=1

Current Prefix

```
3
```

```
3==3 ?

Yes
```

Count

```
1
```

Need

```
3-3=0
```

Map

```
1→1
```

No zero.

Store

```
3
```

Map

```
1→1

3→1
```

---

## j=2

Current Prefix

```
6
```

```
6==3 ?

No
```

Need

```
6-3=3
```

Map

```
3→1
```

Found.

```
count+=1
```

Count

```
2
```

Store

```
6
```

Map

```
1→1

3→1

6→1
```

Finished.

Answer

```
2
```

---

# Another Dry Run (Negative Numbers)

```
nums

1 -1 1

k=1
```

Prefix

```
1
0
1
```

| j   | Prefix | Need (Prefix-k) | Map Before |         Count | Map After |
| --- | ------ | --------------- | ---------- | ------------: | --------- |
| 0   | 1      | 0               | {}         | 1 (prefix==k) | {1:1}     |
| 1   | 0      | -1              | {1:1}      |             1 | {1:1,0:1} |
| 2   | 1      | 0               | {1:1,0:1}  |             2 | {1:2,0:1} |

Subarrays:

```
[1]

[1,-1,1]
```

Correct.

---

# Small Bug in Your Code

This part:

```cpp
if(m.find(prefixSum[j]) == m.end()){
    m[prefixSum[j]] == 0;
}
```

uses the comparison operator `==` instead of the assignment operator `=`.

It should be:

```cpp
m[prefixSum[j]] = 0;
```

However, this entire `if` block is unnecessary because `unordered_map` initializes a missing key to `0` when you use `m[key]++`.

So you can simply write:

```cpp
m[prefixSum[j]]++;
```

---

# code

You can compute the prefix sum on the fly and initialize the map with `{0:1}`:

```cpp
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();

        int count = 0 ;
        vector<int> prefixSum(n,0);

        prefixSum[0] = nums[0];

        for(int i = 1 ; i < n ; i++){
            prefixSum[i] = prefixSum[i-1] + nums[i];
        }

        unordered_map<int , int > m; // PS , Freq
        for(int j = 0 ; j < n ; j++){
            if(prefixSum[j] == k) count++;

            int val = prefixSum[j] - k;

            if(m.find(val) != m.end()){
                count += m[val];
            }

            if(m.find(prefixSum[j]) == m.end()){
                m[prefixSum[j]] == 0;
            }

            m[prefixSum[j]]++;
        }

        return count;
    }
};
```

# Even Better Solution (No Prefix Array Needed)

```cpp
int subarraySum(vector<int>& nums, int k) {
unordered_map<int, int> mp;
mp[0] = 1;

    int prefix = 0;
    int count = 0;

    for (int x : nums) {
        prefix += x;

        if (mp.find(prefix - k) != mp.end()) {
            count += mp[prefix - k];
        }

        mp[prefix]++;
    }

    return count;

}
```

This version is preferred in interviews because:

- **Time:** `O(n)`
- **Extra Space:** `O(n)` (only the hash map; no separate prefix array)
- Handles arrays with positive, negative, and zero values correctly.

The key insight to remember is:

> **If the current prefix sum is `P`, then any previous prefix sum equal to `P - k` forms a subarray ending at the current index whose sum is exactly `k`.`**

````

```

```
````
