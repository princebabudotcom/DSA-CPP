The **Painter Partition Problem** is the same pattern as:

- Painter's Partition Problem (InterviewBit, GFG)
- Allocate Books
- Capacity to Ship Packages Within D Days
- Split Array Largest Sum ← **Closest LeetCode version**

---

# Problem

You have `N` boards.

```text
boards = [10, 20, 30, 40]
painters = 2
```

Each painter paints **continuous boards only**.

Find the **minimum time** to paint all boards.

---

# Step 1: Understand what is being minimized

Suppose

```
Painter 1 : 10 20 30 = 60
Painter 2 : 40 = 40

Maximum = 60
```

Time = **60**

---

Another partition

```
Painter 1 : 10 20 = 30
Painter 2 : 30 40 = 70

Maximum = 70
```

Time = **70**

We want

```
Minimum possible maximum workload
```

---

# Step 2: Why not Greedy?

If we always divide equally,

```
10 20 30 | 40
```

Sometimes works.

But

```
5 5 5 100
```

Equal division fails.

Need another approach.

---

# Step 3: Observe the Answer

Smallest possible answer

A painter must paint the largest board.

```
boards =

10 20 30 40

Minimum answer = 40
```

Because no painter can split a board.

---

Largest possible answer

One painter paints everything.

```
10+20+30+40

=100
```

So answer always lies between

```
40 -----------100
```

This is a sorted search space.

Whenever answer lies in a sorted range,

Think

> **Binary Search on Answer**

---

# Step 4: Binary Search

```
low = max(board)

high = sum(board)
```

```
40 ------------------100
```

Take

```
mid = 70
```

Question becomes

> Can every board be painted if no painter paints more than **70** units?

---

# Step 5: Feasibility Function

Suppose

```
mid = 70

boards

10 20 30 40
```

Painter 1

```
10

10+20=30

30+30=60

60+40=100

Not possible
```

New painter

```
Painter2

40
```

Painters used

```
2
```

Allowed

```
2

Possible
```

Return

```
true
```

---

Another example

```
mid = 50
```

Painter1

```
10

30

Next =60

Stop
```

Painter2

```
30

Next=70

Stop
```

Painter3

```
40
```

Painters needed

```
3
```

Allowed

```
2

Not Possible
```

Return

```
false
```

---

# Step 6: Binary Search Decision

If

```
Possible
```

We can try a smaller answer.

```
high = mid-1
```

---

If

```
Not Possible
```

Need more time.

```
low = mid+1
```

---

# Step 7: Dry Run

```
boards

10 20 30 40

k=2
```

Initial

```
low =40

high=100
```

---

### mid

```
70
```

Possible

Store

```
ans=70
```

Search left

```
40-----69
```

---

### mid

```
54
```

Need 3 painters

Not Possible

Search right

```
55-----69
```

---

### mid

```
62
```

Possible

```
ans=62
```

Search left

---

### mid

```
58
```

Not Possible

Search right

---

### mid

```
60
```

Possible

```
ans=60
```

Search left

---

### mid

```
59
```

Not Possible

Search right

Stop

Answer

```
60
```

---

# Algorithm

```
low = maximum board

high = sum of boards

while(low<=high)

    mid

    if(canPaint(mid))
        answer=mid
        high=mid-1
    else
        low=mid+1

return answer
```

---

# Feasibility Function

```
painters = 1

currentWork = 0

For every board

    if(currentWork + board <= mid)

        currentWork += board

    else

        painters++

        currentWork = board

Return

painters <= k
```

---

# Time Complexity

Feasibility check

```
O(N)
```

Binary Search

```
O(log(sum))
```

Overall

```
O(N × log(sum))
```

---

# Pattern to Remember

Whenever you see:

- Minimize the **maximum**
- Maximize the **minimum**
- Continuous partition
- Answer lies between **max(array)** and **sum(array)**

Think:

> **Binary Search on Answer**

---

## Similar LeetCode Problems

1. Split Array Largest Sum ⭐ (Painter Partition equivalent)
2. Capacity to Ship Packages Within D Days
3. Koko Eating Bananas
4. Minimum Limit of Balls in a Bag
5. Magnetic Force Between Two Balls

These all use the same **Binary Search on Answer** technique.
