# C++ `unordered_map` (Short Notes)

## What is `unordered_map`?

- Stores **key-value pairs**.
- Uses a **Hash Table**.
- **Keys are unique**.
- **Order is NOT maintained**.

```cpp
#include <unordered_map>
using namespace std;

unordered_map<int, string> mp;
```

---

## Insert

```cpp
mp[1] = "Apple";
mp.insert({2, "Banana"});
mp.emplace(3, "Orange");
```

---

## Access

```cpp
cout << mp[1];
```

---

## Update

```cpp
mp[1] = "Mango";
```

---

## Search

```cpp
if (mp.find(1) != mp.end()) {
    cout << "Found";
}
```

---

## Check Key

```cpp
mp.count(1);   // 1 if exists, else 0
```

---

## Delete

```cpp
mp.erase(1);
```

---

## Size & Empty

```cpp
mp.size();
mp.empty();
mp.clear();
```

---

## Traversal

```cpp
for (auto it : mp) {
    cout << it.first << " " << it.second << endl;
}
```

---

## Time Complexity

| Operation | Average |
| --------- | ------- |
| Insert    | O(1)    |
| Search    | O(1)    |
| Delete    | O(1)    |
| Access    | O(1)    |

---

## `map` vs `unordered_map`

| `map`          | `unordered_map` |
| -------------- | --------------- |
| Sorted         | Unsorted        |
| O(log n)       | O(1) Average    |
| Red-Black Tree | Hash Table      |

---

## Common DSA Uses

### Frequency Count

```cpp
unordered_map<int,int> freq;
for(int x : nums)
    freq[x]++;
```

### Two Sum

```cpp
unordered_map<int,int> mp;
```

### Find Duplicates

```cpp
unordered_map<int,int> freq;
```

---

## Important

```cpp
mp[5];
```

If key `5` doesn't exist, it is automatically created with value `0` (for `int`).

Use `find()` if you only want to check whether a key exists.

```cpp
if (mp.find(5) != mp.end()) {
    // Key exists
}
```
