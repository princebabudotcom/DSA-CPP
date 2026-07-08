Let's dry run your code on the given matrix.

### Matrix

```text
      c=0  c=1  c=2  c=3  c=4
r=0    1    4    7    11   15
r=1    2    5    8    12   19
r=2    3    6    9    16   22
r=3   10   13   14    17   24
r=4   18   21   23    26   30
```

Your algorithm starts from the **top-right corner**.

```cpp
r = 0;
c = 4;
```

---

# Example 1: target = 5

### Iteration 1

```
r = 0
c = 4

mat[0][4] = 15
```

```
      1   4   7   11  [15]
```

```
5 < 15
```

Move left.

```
c = 3
```

---

### Iteration 2

```
r = 0
c = 3

mat[0][3] = 11
```

```
5 < 11
```

Move left.

```
c = 2
```

---

### Iteration 3

```
mat[0][2] = 7
```

```
5 < 7
```

Move left.

```
c = 1
```

---

### Iteration 4

```
mat[0][1] = 4
```

```
5 > 4
```

Move down.

```
r = 1
```

---

### Iteration 5

```
mat[1][1] = 5
```

```
target == mat[r][c]
```

Return **true**.

---

## Path followed

```
15
←
11
←
7
←
4
↓
5 ✓
```

---

# Example 2: target = 20 (Not Present)

Start

```
r = 0
c = 4

15
```

```
20 > 15
```

Move down.

```
r = 1
```

---

```
19
```

```
20 > 19
```

Move down.

```
r = 2
```

---

```
22
```

```
20 < 22
```

Move left.

```
c = 3
```

---

```
16
```

```
20 > 16
```

Move down.

```
r = 3
```

---

```
17
```

```
20 > 17
```

Move down.

```
r = 4
```

---

```
26
```

```
20 < 26
```

Move left.

```
c = 2
```

---

```
23
```

```
20 < 23
```

Move left.

```
c = 1
```

---

```
21
```

```
20 < 21
```

Move left.

```
c = 0
```

---

```
18
```

```
20 > 18
```

Move down.

```
r = 5
```

Now,

```
r = 5
m = 5

r < m   ❌ false
```

Loop ends.

Return **false**.

---

## Path followed

```
15
↓
19
↓
22
←
16
↓
17
↓
26
←
23
←
21
←
18
↓
Out of matrix
```

---

## Why does this algorithm work?

At every position `(r, c)`:

- **Everything to the left is smaller** than `mat[r][c]`.
- **Everything below is larger** than `mat[r][c]`.

So:

- If `target < mat[r][c]`, the current column's values below are even larger, so the entire current column can be ignored. Move **left** (`c--`).
- If `target > mat[r][c]`, the current row's values to the left are even smaller, so the entire current row can be ignored. Move **down** (`r++`).

This eliminates one **row or one column** on every step, giving a time complexity of **O(m + n)**.
