# Spiral Matrix Edge Cases

When traversing a matrix in spiral order, we must avoid printing the same element twice.

---

# Case 1: Why `if (sRow < eRow)`?

## Example Matrix (2 × 3)

```text
1  2  3
4  5  6
```

### First Layer

#### Top Row

```text
1 2 3
```

#### Right Column

```text
6
```

#### Bottom Row

```text
5 4
```

Traversal becomes

```text
1 2 3 6 5 4
```

Now update boundaries.

```text
sRow = 1
eRow = 0
```

Loop ends.

---

## But consider another example

```text
1 2 3
```

Only **one row** exists.

Current boundaries

```text
sRow = 0
eRow = 0
```

### Top Row

Prints

```text
1 2 3
```

### Bottom Row (Without Condition)

The loop runs again and prints

```text
2 1
```

Wrong Output

```text
1 2 3 2 1
```

The row is printed twice.

### Fix

```cpp
if (sRow < eRow)
```

Since

```text
0 < 0 → false
```

Bottom row is skipped.

Correct Output

```text
1 2 3
```

---

# Case 2: Why `if (sCol < eCol)`?

## Example Matrix (3 × 1)

```text
1
2
3
```

Current boundaries

```text
sCol = 0
eCol = 0
```

Only **one column** exists.

### Top Row

Prints

```text
1
```

### Right Column

Prints

```text
2
3
```

Traversal

```text
1 2 3
```

### Left Column (Without Condition)

The loop runs again and prints

```text
2
```

Wrong Output

```text
1 2 3 2
```

The middle element is printed twice.

### Fix

```cpp
if (sCol < eCol)
```

Since

```text
0 < 0 → false
```

Left column is skipped.

Correct Output

```text
1 2 3
```

---

# Easy Memory Trick

## Single Row

```text
1 2 3 4
```

Already printed from left to right.

❌ Don't print it again from right to left.

Use

```cpp
if (sRow < eRow)
```

---

## Single Column

```text
1
2
3
4
```

Already printed from top to bottom.

❌ Don't print it again from bottom to top.

Use

```cpp
if (sCol < eCol)
```

---

# Summary

| Remaining Shape | Condition          | Why?                                    |
| --------------- | ------------------ | --------------------------------------- |
| One Row         | `if (sRow < eRow)` | Prevent printing the bottom row again.  |
| One Column      | `if (sCol < eCol)` | Prevent printing the left column again. |

---

# Final Rule

```text
Top Row      ✅ Always

Right Column ✅ Always

Bottom Row   ✅ Only if there are at least 2 rows.

Left Column  ✅ Only if there are at least 2 columns.
```

```cpp
if (sRow < eRow)
{
    // Print Bottom Row
}

if (sCol < eCol)
{
    // Print Left Column
}
```
