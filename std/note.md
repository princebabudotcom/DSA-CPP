If your goal is to **master DSA and crack software engineering interviews**, these are the **most important STL containers and algorithms**. This is the order you should learn them.

---

# 1. `vector` (`<vector>`) ⭐⭐⭐⭐⭐

Dynamic array.

### Syntax

```cpp
#include <vector>

vector<int> arr;

vector<int> arr = {1,2,3,4};

vector<int> arr(5);      // size = 5

vector<int> arr(5,100);  // five 100s
```

### Functions

```cpp
arr.push_back(10);

arr.pop_back();

arr.size();

arr.empty();

arr.clear();

arr.front();

arr.back();

arr.at(2);

arr[2];

arr.begin();

arr.end();

arr.insert(arr.begin()+2,100);

arr.erase(arr.begin()+1);

arr.resize(10);

arr.capacity();
```

---

# 2. `pair` (`<utility>`) ⭐⭐⭐⭐⭐

Store two values together.

### Syntax

```cpp
#include <utility>

pair<int,int> p;

pair<int,int> p = {10,20};

cout << p.first;
cout << p.second;
```

### Functions

```cpp
make_pair(10,20);

swap(p1,p2);
```

---

# 3. `set` (`<set>`) ⭐⭐⭐⭐⭐

Unique + Sorted

### Syntax

```cpp
#include <set>

set<int> s;
```

### Functions

```cpp
s.insert(10);

s.erase(10);

s.find(10);

s.count(10);

s.size();

s.empty();

s.clear();

s.begin();

s.end();

s.lower_bound(10);

s.upper_bound(10);
```

---

# 4. `unordered_set` (`<unordered_set>`) ⭐⭐⭐⭐⭐

Unique + Unsorted

### Syntax

```cpp
#include <unordered_set>

unordered_set<int> us;
```

### Functions

```cpp
us.insert(5);

us.erase(5);

us.find(5);

us.count(5);

us.size();

us.empty();

us.clear();

us.begin();

us.end();
```

---

# 5. `multiset` (`<set>`) ⭐⭐⭐⭐

Sorted + Duplicates allowed

### Syntax

```cpp
multiset<int> ms;
```

### Functions

```cpp
ms.insert(10);

ms.erase(10);

ms.find(10);

ms.count(10);

ms.lower_bound(10);

ms.upper_bound(10);

ms.size();
```

---

# 6. `map` (`<map>`) ⭐⭐⭐⭐⭐

Key → Value (Sorted)

### Syntax

```cpp
#include <map>

map<int,string> mp;
```

### Functions

```cpp
mp[1] = "Prince";

mp.insert({2,"Babu"});

mp.erase(1);

mp.find(2);

mp.count(2);

mp.size();

mp.empty();

mp.clear();

mp.begin();

mp.end();

mp.lower_bound(2);

mp.upper_bound(2);
```

---

# 7. `unordered_map` (`<unordered_map>`) ⭐⭐⭐⭐⭐

Hash Map

### Syntax

```cpp
#include <unordered_map>

unordered_map<int,int> mp;
```

### Functions

```cpp
mp[10]++;

mp.insert({5,100});

mp.erase(5);

mp.find(5);

mp.count(5);

mp.size();

mp.empty();

mp.clear();

mp.begin();

mp.end();
```

---

# 8. `multimap` (`<map>`)

### Syntax

```cpp
multimap<int,string> mp;
```

### Functions

```cpp
mp.insert({1,"A"});

mp.insert({1,"B"});

mp.find(1);

mp.count(1);

mp.erase(1);

mp.begin();

mp.end();
```

---

# 9. `queue` (`<queue>`) ⭐⭐⭐⭐

FIFO

### Syntax

```cpp
#include <queue>

queue<int> q;
```

### Functions

```cpp
q.push(10);

q.pop();

q.front();

q.back();

q.size();

q.empty();
```

---

# 10. `stack` (`<stack>`) ⭐⭐⭐⭐⭐

LIFO

### Syntax

```cpp
#include <stack>

stack<int> st;
```

### Functions

```cpp
st.push(10);

st.pop();

st.top();

st.size();

st.empty();
```

---

# 11. `priority_queue` (`<queue>`) ⭐⭐⭐⭐⭐

Max Heap

### Syntax

```cpp
priority_queue<int> pq;
```

### Functions

```cpp
pq.push(10);

pq.pop();

pq.top();

pq.size();

pq.empty();
```

### Min Heap

```cpp
priority_queue<int, vector<int>, greater<int>> pq;
```

---

# 12. `deque` (`<deque>`)

### Syntax

```cpp
#include <deque>

deque<int> dq;
```

### Functions

```cpp
dq.push_front(10);

dq.push_back(20);

dq.pop_front();

dq.pop_back();

dq.front();

dq.back();

dq.at(2);

dq.size();

dq.empty();
```

---

# 13. `list` (`<list>`)

### Syntax

```cpp
#include <list>

list<int> li;
```

### Functions

```cpp
li.push_back(10);

li.push_front(20);

li.pop_back();

li.pop_front();

li.insert(it,100);

li.erase(it);

li.remove(10);

li.reverse();

li.sort();

li.size();

li.empty();
```

---

# 14. `array` (`<array>`)

### Syntax

```cpp
#include <array>

array<int,5> arr = {1,2,3,4,5};
```

### Functions

```cpp
arr.size();

arr.front();

arr.back();

arr.fill(100);

arr.at(2);

arr.begin();

arr.end();
```

---

# 15. `string`

### Syntax

```cpp
string s = "Prince";
```

### Functions

```cpp
s.length();

s.size();

s.empty();

s.push_back('A');

s.pop_back();

s.substr(1,3);

s.find("abc");

s.erase(2,3);

s.insert(2,"xyz");

s.replace(2,3,"abc");

s.clear();

s.front();

s.back();
```

---

# Common STL Algorithms (`<algorithm>`)

```cpp
sort(v.begin(), v.end());

reverse(v.begin(), v.end());

swap(a,b);

find(v.begin(),v.end(),10);

count(v.begin(),v.end(),5);

binary_search(v.begin(),v.end(),10);

lower_bound(v.begin(),v.end(),10);

upper_bound(v.begin(),v.end(),10);

max(a,b);

min(a,b);

max_element(v.begin(),v.end());

min_element(v.begin(),v.end());

next_permutation(v.begin(),v.end());

prev_permutation(v.begin(),v.end());

rotate(v.begin(),v.begin()+k,v.end());

fill(v.begin(),v.end(),0);

copy(v.begin(),v.end(),ans.begin());

merge(a.begin(),a.end(),b.begin(),b.end(),c.begin());

unique(v.begin(),v.end());

remove(v.begin(),v.end(),5);

remove_if(v.begin(),v.end(),condition);
```

---

# Numeric Functions (`<numeric>`)

```cpp
accumulate(v.begin(),v.end(),0);

iota(v.begin(),v.end(),1);

gcd(a,b);

lcm(a,b);

partial_sum(v.begin(),v.end(),ans.begin());

adjacent_difference(v.begin(),v.end(),ans.begin());
```

---

# Best Learning Order for DSA

1. `vector`
2. `pair`
3. `unordered_map`
4. `unordered_set`
5. `map`
6. `set`
7. `stack`
8. `queue`
9. `priority_queue`
10. `deque`
11. `multiset`
12. `multimap`
13. `list`
14. `array`
15. STL algorithms (`sort`, `lower_bound`, `upper_bound`, etc.)

Learning these thoroughly will prepare you for the majority of array, hashing, two-pointer, binary search, heap, graph, and tree problems on LeetCode and in technical interviews.
