# 🚀 Critix DSA Sheet — Pattern-Wise, Beginner-Sequenced Edition (v2)

**489 problems total** (added 14 new Math questions to round out that section). Same pattern-wise structure as before, same sequence order, now with a question count after every phase/sub-section so you always know how much is left in the section you're on.

**⭐ = Solve this first.** These are the "template" problems for each pattern — get these fully understood before moving to the rest of that section.

---

## How to Use This Sheet (read this first)

1. **Do NOT skip the ⭐ problems.** If you're stuck on a Medium/Hard in a pattern, go back and re-do the ⭐ problem from scratch, out loud, explaining your own logic.
2. **One pattern at a time.** Don't jump between unrelated patterns in the same day while still building the base.
3. **If stuck >20 min on ANY problem:** stop, look at just the _first line_ of a hint (the pattern name, not the code), try again for 10 more min, then look at the full solution if still stuck.
4. Apply your spaced-repetition system (Day+1, +3, +7, +15, +30) to every problem you solve.
5. Use the question counts below to pace yourself — e.g. "Phase 0 has 46 questions, I can do ~2/day on weekdays, ~4/day on weekends, so it'll take me about 2 weeks."

---

## PHASE 0: Arrays & Hashing (Absolute Foundation)

**📌 46 questions**

**Approach cue:** Before anything else, ask "do I need to remember what I've seen before?" → if yes, that's a hashmap/hashset.

| ⭐  | #   | Problem                                  | LC # | Difficulty |
| --- | --- | ---------------------------------------- | ---- | ---------- |
| ⭐  | 1   | Two Sum                                  | 1    | Easy       |
| ⭐  | 2   | Contains Duplicate                       | 217  | Easy       |
| ⭐  | 3   | Valid Anagram                            | 242  | Easy       |
|     | 4   | Remove Duplicates from Sorted Array      | 26   | Easy       |
|     | 5   | Remove Element                           | 27   | Easy       |
|     | 6   | Plus One                                 | 66   | Easy       |
|     | 7   | Move Zeroes                              | 283  | Easy       |
|     | 8   | Find All Numbers Disappeared in an Array | 448  | Easy       |
|     | 9   | Missing Number                           | 268  | Easy       |
|     | 10  | Find Pivot Index                         | 724  | Easy       |
|     | 11  | Contains Duplicate II                    | 219  | Easy       |
|     | 12  | Concatenation of Array                   | 1929 | Easy       |
|     | 13  | Build Array from Permutation             | 1920 | Easy       |
|     | 14  | Happy Number                             | 202  | Easy       |
|     | 15  | Intersection of Two Arrays               | 349  | Easy       |
|     | 16  | Intersection of Two Arrays II            | 350  | Easy       |
|     | 17  | First Unique Character in a String       | 387  | Easy       |
|     | 18  | Isomorphic Strings                       | 205  | Easy       |
|     | 19  | Word Pattern                             | 290  | Easy       |
|     | 20  | Ransom Note                              | 383  | Easy       |
|     | 21  | Unique Number of Occurrences             | 1207 | Easy       |
|     | 22  | Group Anagrams                           | 49   | Medium     |
|     | 23  | 4Sum II                                  | 454  | Medium     |
|     | 24  | Determine if Two Strings Are Close       | 1657 | Medium     |
| ⭐  | 25  | Best Time to Buy and Sell Stock          | 121  | Easy       |
|     | 26  | Best Time to Buy and Sell Stock II       | 122  | Medium     |
|     | 27  | Majority Element                         | 169  | Easy       |
|     | 28  | Majority Element II                      | 229  | Medium     |
| ⭐  | 29  | Maximum Subarray (Kadane's)              | 53   | Medium     |
|     | 30  | Maximum Product Subarray                 | 152  | Medium     |
|     | 31  | Maximum Sum Circular Subarray            | 918  | Medium     |
|     | 32  | Subarray Sum Equals K                    | 560  | Medium     |
|     | 33  | Continuous Subarray Sum                  | 523  | Medium     |
|     | 34  | Product of Array Except Self             | 238  | Medium     |
|     | 35  | Longest Consecutive Sequence             | 128  | Medium     |
|     | 36  | Next Permutation                         | 31   | Medium     |
|     | 37  | Rotate Array                             | 189  | Medium     |
|     | 38  | Gas Station                              | 134  | Medium     |
|     | 39  | Minimum Increment to Make Array Unique   | 945  | Medium     |
|     | 40  | Maximum Units on a Truck                 | 1710 | Easy       |
|     | 41  | Candy                                    | 135  | Hard       |
|     | 42  | First Missing Positive                   | 41   | Hard       |
|     | 43  | Task Scheduler                           | 621  | Medium     |
|     | 44  | Merge Intervals                          | 56   | Medium     |
|     | 45  | Insert Interval                          | 57   | Medium     |
|     | 46  | Non-overlapping Intervals                | 435  | Medium     |

---

## PHASE 1: Two Pointers

**📌 11 questions**

**Approach cue:** Use when scanning from both ends inward, or comparing pairs without nested loops.

| ⭐  | #   | Problem                                | LC # | Difficulty |
| --- | --- | -------------------------------------- | ---- | ---------- |
| ⭐  | 47  | Valid Palindrome                       | 125  | Easy       |
| ⭐  | 48  | Reverse String                         | 344  | Easy       |
|     | 49  | Squares of a Sorted Array              | 977  | Easy       |
|     | 50  | Remove Duplicates from Sorted Array II | 80   | Medium     |
|     | 51  | Two Sum II – Input Array Is Sorted     | 167  | Medium     |
| ⭐  | 52  | 3Sum                                   | 15   | Medium     |
|     | 53  | 3Sum Closest                           | 16   | Medium     |
|     | 54  | 3Sum Smaller                           | 259  | Medium     |
|     | 55  | 4Sum                                   | 18   | Medium     |
| ⭐  | 56  | Container With Most Water              | 11   | Medium     |
|     | 57  | Trapping Rain Water                    | 42   | Hard       |

---

## PHASE 2: Sliding Window

**📌 15 questions**

**Approach cue:** "substring/subarray" + a condition (longest, shortest, count) → maintain a window that expands right, shrinks left when it breaks a rule.

| ⭐  | #   | Problem                                              | LC # | Difficulty |
| --- | --- | ---------------------------------------------------- | ---- | ---------- |
| ⭐  | 58  | Maximum Average Subarray I                           | 643  | Easy       |
| ⭐  | 59  | Longest Substring Without Repeating Characters       | 3    | Medium     |
|     | 60  | Minimum Size Subarray Sum                            | 209  | Medium     |
|     | 61  | Permutation in String                                | 567  | Medium     |
|     | 62  | Find All Anagrams in a String                        | 438  | Medium     |
|     | 63  | Longest Repeating Character Replacement              | 424  | Medium     |
|     | 64  | Max Consecutive Ones III                             | 1004 | Medium     |
|     | 65  | Longest Subarray of 1's After Deleting One Element   | 1493 | Medium     |
|     | 66  | Longest Substring with At Most K Distinct Characters | 340  | Medium     |
|     | 67  | Number of Substrings Containing All Three Characters | 1358 | Medium     |
|     | 68  | Frequency of the Most Frequent Element               | 1838 | Medium     |
|     | 69  | Grumpy Bookstore Owner                               | 1052 | Medium     |
|     | 70  | Minimum Window Substring                             | 76   | Hard       |
|     | 71  | Sliding Window Maximum                               | 239  | Hard       |
|     | 72  | Subarrays with K Different Integers                  | 992  | Hard       |

---

## PHASE 3: Sorting & Binary Search

**📌 36 questions total**

**Approach cue for Binary Search:** ask "can I define a yes/no condition where all `false`s come before all `true`s?" — that boundary is what you're searching for.

### 3A. Sorting-Based — 11 questions

| ⭐  | #   | Problem                                   | LC # | Difficulty |
| --- | --- | ----------------------------------------- | ---- | ---------- |
| ⭐  | 73  | Merge Sorted Array                        | 88   | Easy       |
|     | 74  | Sort Colors                               | 75   | Medium     |
|     | 75  | Sort an Array                             | 912  | Medium     |
|     | 76  | Sort List                                 | 148  | Medium     |
|     | 77  | Largest Number                            | 179  | Medium     |
|     | 78  | H-Index                                   | 274  | Medium     |
|     | 79  | Wiggle Sort                               | 280  | Medium     |
|     | 80  | Wiggle Sort II                            | 324  | Medium     |
|     | 81  | Reverse Pairs                             | 493  | Hard       |
|     | 82  | Maximum Gap                               | 164  | Hard       |
|     | 83  | Find the Kth Largest Integer in the Array | 1985 | Medium     |

### 3B. Binary Search on Sorted Array — 18 questions

| ⭐  | #   | Problem                                                 | LC # | Difficulty |
| --- | --- | ------------------------------------------------------- | ---- | ---------- |
| ⭐  | 84  | Binary Search                                           | 704  | Easy       |
| ⭐  | 85  | Search Insert Position                                  | 35   | Easy       |
|     | 86  | Sqrt(x)                                                 | 69   | Easy       |
|     | 87  | Valid Perfect Square                                    | 367  | Easy       |
|     | 88  | Find First and Last Position of Element in Sorted Array | 34   | Medium     |
|     | 89  | Search a 2D Matrix                                      | 74   | Medium     |
|     | 90  | Search a 2D Matrix II                                   | 240  | Medium     |
|     | 91  | Find K Closest Elements                                 | 658  | Medium     |
| ⭐  | 92  | Search in Rotated Sorted Array                          | 33   | Medium     |
|     | 93  | Search in Rotated Sorted Array II                       | 81   | Medium     |
|     | 94  | Find Minimum in Rotated Sorted Array                    | 153  | Medium     |
|     | 95  | Find Minimum in Rotated Sorted Array II                 | 154  | Hard       |
|     | 96  | Find Peak Element                                       | 162  | Medium     |
|     | 97  | Peak Index in a Mountain Array                          | 852  | Medium     |
|     | 98  | Median of Two Sorted Arrays                             | 4    | Hard       |
|     | 99  | Find K-th Smallest Pair Distance                        | 719  | Hard       |
|     | 100 | Time Based Key-Value Store                              | 981  | Medium     |
|     | 101 | Random Pick with Weight                                 | 528  | Medium     |

### 3C. Binary Search on Answer — 7 questions

| ⭐  | #   | Problem                                     | LC # | Difficulty |
| --- | --- | ------------------------------------------- | ---- | ---------- |
| ⭐  | 102 | Koko Eating Bananas                         | 875  | Medium     |
|     | 103 | Capacity To Ship Packages Within D Days     | 1011 | Medium     |
|     | 104 | Minimum Number of Days to Make m Bouquets   | 1482 | Medium     |
|     | 105 | Find the Smallest Divisor Given a Threshold | 1283 | Medium     |
|     | 106 | Split Array Largest Sum                     | 410  | Hard       |
|     | 107 | Divide Chocolate                            | 1231 | Hard       |
|     | 108 | Minimize Max Distance to Gas Station        | 774  | Hard       |

---

## PHASE 4: Stack & Queue

**📌 27 questions total**

**Approach cue for Stack:** "does the most recently seen thing matter most right now?" → stack. For "next greater/smaller," use a **monotonic stack**.
**Approach cue for Queue:** "do I need strict first-in-first-out order?" → queue.

### 4A. Stack — 20 questions

| ⭐  | #   | Problem                                  | LC # | Difficulty |
| --- | --- | ---------------------------------------- | ---- | ---------- |
| ⭐  | 109 | Valid Parentheses                        | 20   | Easy       |
| ⭐  | 110 | Min Stack                                | 155  | Medium     |
|     | 111 | Implement Queue using Stacks             | 232  | Easy       |
|     | 112 | Implement Stack using Queues             | 225  | Easy       |
|     | 113 | Remove All Adjacent Duplicates In String | 1047 | Easy       |
|     | 114 | Make The String Great                    | 1544 | Easy       |
|     | 115 | Next Greater Element I                   | 496  | Easy       |
| ⭐  | 116 | Daily Temperatures                       | 739  | Medium     |
|     | 117 | Next Greater Element II                  | 503  | Medium     |
|     | 118 | Evaluate Reverse Polish Notation         | 150  | Medium     |
|     | 119 | Simplify Path                            | 71   | Medium     |
|     | 120 | Decode String                            | 394  | Medium     |
|     | 121 | Remove Duplicate Letters                 | 316  | Medium     |
|     | 122 | Basic Calculator II                      | 227  | Medium     |
|     | 123 | 132 Pattern                              | 456  | Medium     |
|     | 124 | Largest Rectangle in Histogram           | 84   | Hard       |
|     | 125 | Maximal Rectangle                        | 85   | Hard       |
|     | 126 | Basic Calculator                         | 224  | Hard       |
|     | 127 | Basic Calculator III                     | 772  | Hard       |
|     | 128 | Number of Atoms                          | 726  | Hard       |

### 4B. Queue — 7 questions

| ⭐  | #   | Problem                                                | LC # | Difficulty |
| --- | --- | ------------------------------------------------------ | ---- | ---------- |
| ⭐  | 129 | Number of Recent Calls                                 | 933  | Easy       |
|     | 130 | Moving Average from Data Stream                        | 346  | Easy       |
|     | 131 | Design Circular Queue                                  | 622  | Medium     |
|     | 132 | Dota2 Senate                                           | 649  | Medium     |
|     | 133 | Design Front Middle Back Queue                         | 1670 | Medium     |
|     | 134 | Longest Continuous Subarray With Absolute Diff ≤ Limit | 1438 | Medium     |
|     | 135 | Shortest Subarray with Sum at Least K                  | 862  | Hard       |

---

## PHASE 5: Linked List

**📌 27 questions**

**Approach cue:** always ask "do I need a dummy head?" Use slow/fast pointers for cycle detection. Draw pointer diagrams on paper.

| ⭐  | #   | Problem                                 | LC # | Difficulty |
| --- | --- | --------------------------------------- | ---- | ---------- |
| ⭐  | 136 | Reverse Linked List                     | 206  | Easy       |
| ⭐  | 137 | Middle of the Linked List               | 876  | Easy       |
| ⭐  | 138 | Linked List Cycle                       | 141  | Easy       |
|     | 139 | Remove Linked List Elements             | 203  | Easy       |
|     | 140 | Remove Duplicates from Sorted List      | 83   | Easy       |
|     | 141 | Merge Two Sorted Lists                  | 21   | Easy       |
|     | 142 | Palindrome Linked List                  | 234  | Easy       |
|     | 143 | Intersection of Two Linked Lists        | 160  | Easy       |
|     | 144 | Delete Node in a Linked List            | 237  | Medium     |
|     | 145 | Design Linked List                      | 707  | Medium     |
|     | 146 | Linked List Cycle II                    | 142  | Medium     |
|     | 147 | Reverse Linked List II                  | 92   | Medium     |
|     | 148 | Remove Duplicates from Sorted List II   | 82   | Medium     |
|     | 149 | Remove Nth Node From End of List        | 19   | Medium     |
|     | 150 | Add Two Numbers                         | 2    | Medium     |
|     | 151 | Add Two Numbers II                      | 445  | Medium     |
|     | 152 | Swap Nodes in Pairs                     | 24   | Medium     |
|     | 153 | Rotate List                             | 61   | Medium     |
|     | 154 | Partition List                          | 86   | Medium     |
|     | 155 | Reorder List                            | 143  | Medium     |
|     | 156 | Copy List with Random Pointer           | 138  | Medium     |
|     | 157 | Flatten a Multilevel Doubly Linked List | 430  | Medium     |
|     | 158 | Split Linked List in Parts              | 725  | Medium     |
|     | 159 | LRU Cache                               | 146  | Medium     |
|     | 160 | Reverse Nodes in k-Group                | 25   | Hard       |
|     | 161 | Merge k Sorted Lists                    | 23   | Hard       |
|     | 162 | LFU Cache                               | 460  | Hard       |

---

## PHASE 6: Recursion → Backtracking

**📌 30 questions total**

**Approach cue:** Recursion = "define the base case, trust the smaller call." Backtracking = **choose → explore → un-choose**.

### 6A. Recursion Basics — 10 questions

| ⭐  | #   | Problem                           | LC # | Difficulty |
| --- | --- | --------------------------------- | ---- | ---------- |
| ⭐  | 163 | Climbing Stairs                   | 70   | Easy       |
| ⭐  | 164 | Fibonacci Number                  | 509  | Easy       |
|     | 165 | Power of Two                      | 231  | Easy       |
|     | 166 | Power of Three                    | 326  | Easy       |
|     | 167 | Power of Four                     | 342  | Easy       |
|     | 168 | Pascal's Triangle                 | 118  | Easy       |
|     | 169 | Pow(x, n)                         | 50   | Medium     |
|     | 170 | K-th Symbol in Grammar            | 779  | Medium     |
|     | 171 | Different Ways to Add Parentheses | 241  | Medium     |
|     | 172 | Unique Binary Search Trees II     | 95   | Medium     |

### 6B. Backtracking — Subsets/Permutations/Combinations — 15 questions

| ⭐  | #   | Problem                                                        | LC # | Difficulty |
| --- | --- | -------------------------------------------------------------- | ---- | ---------- |
| ⭐  | 173 | Subsets                                                        | 78   | Medium     |
| ⭐  | 174 | Permutations                                                   | 46   | Medium     |
|     | 175 | Subsets II                                                     | 90   | Medium     |
|     | 176 | Permutations II                                                | 47   | Medium     |
|     | 177 | Combinations                                                   | 77   | Medium     |
|     | 178 | Combination Sum                                                | 39   | Medium     |
|     | 179 | Combination Sum II                                             | 40   | Medium     |
|     | 180 | Combination Sum III                                            | 216  | Medium     |
|     | 181 | Generate Parentheses                                           | 22   | Medium     |
|     | 182 | Letter Combinations of a Phone Number                          | 17   | Medium     |
|     | 183 | Palindrome Partitioning                                        | 131  | Medium     |
|     | 184 | Restore IP Addresses                                           | 93   | Medium     |
|     | 185 | Target Sum                                                     | 494  | Medium     |
|     | 186 | Partition to K Equal Sum Subsets                               | 698  | Medium     |
|     | 187 | Maximum Length of a Concatenated String with Unique Characters | 1239 | Medium     |

### 6C. Backtracking — Grid & Constraint Satisfaction — 5 questions

| ⭐  | #   | Problem        | LC # | Difficulty |
| --- | --- | -------------- | ---- | ---------- |
| ⭐  | 188 | Word Search    | 79   | Medium     |
|     | 189 | Word Search II | 212  | Hard       |
|     | 190 | N-Queens       | 51   | Hard       |
|     | 191 | N-Queens II    | 52   | Hard       |
|     | 192 | Sudoku Solver  | 37   | Hard       |

---

## PHASE 7: Trees → Binary Search Trees

**📌 60 questions total**

**Approach cue:** Tree problem = DFS (recursive) or BFS (queue, level by level). "Depth/levels?" → BFS. "Path/subtree property?" → DFS.

### 7A. Traversals — 11 questions

| ⭐  | #   | Problem                                   | LC # | Difficulty |
| --- | --- | ----------------------------------------- | ---- | ---------- |
| ⭐  | 193 | Binary Tree Inorder Traversal             | 94   | Easy       |
| ⭐  | 194 | Binary Tree Preorder Traversal            | 144  | Easy       |
|     | 195 | Binary Tree Postorder Traversal           | 145  | Easy       |
| ⭐  | 196 | Binary Tree Level Order Traversal         | 102  | Medium     |
|     | 197 | Binary Tree Level Order Traversal II      | 107  | Medium     |
|     | 198 | Binary Tree Zigzag Level Order Traversal  | 103  | Medium     |
|     | 199 | Binary Tree Right Side View               | 199  | Medium     |
|     | 200 | Maximum Width of Binary Tree              | 662  | Medium     |
|     | 201 | Binary Tree Vertical Order Traversal      | 314  | Medium     |
|     | 202 | Boundary of Binary Tree                   | 545  | Medium     |
|     | 203 | Vertical Order Traversal of a Binary Tree | 987  | Hard       |

### 7B. Properties & Paths — 16 questions

| ⭐  | #   | Problem                      | LC # | Difficulty |
| --- | --- | ---------------------------- | ---- | ---------- |
| ⭐  | 204 | Maximum Depth of Binary Tree | 104  | Easy       |
|     | 205 | Minimum Depth of Binary Tree | 111  | Easy       |
|     | 206 | Same Tree                    | 100  | Easy       |
|     | 207 | Symmetric Tree               | 101  | Easy       |
|     | 208 | Invert Binary Tree           | 226  | Easy       |
|     | 209 | Balanced Binary Tree         | 110  | Easy       |
|     | 210 | Merge Two Binary Trees       | 617  | Easy       |
|     | 211 | Path Sum                     | 112  | Easy       |
|     | 212 | Binary Tree Paths            | 257  | Easy       |
|     | 213 | Leaf-Similar Trees           | 872  | Easy       |
|     | 214 | Diameter of Binary Tree      | 543  | Easy       |
|     | 215 | Path Sum II                  | 113  | Medium     |
|     | 216 | Path Sum III                 | 437  | Medium     |
|     | 217 | Sum Root to Leaf Numbers     | 129  | Medium     |
|     | 218 | Flip Equivalent Binary Trees | 951  | Medium     |
|     | 219 | Binary Tree Maximum Path Sum | 124  | Hard       |

### 7C. Construction & Conversion — 10 questions

| ⭐  | #   | Problem                                                     | LC # | Difficulty |
| --- | --- | ----------------------------------------------------------- | ---- | ---------- |
| ⭐  | 220 | Convert Sorted Array to Binary Search Tree                  | 108  | Easy       |
|     | 221 | Convert Sorted List to Binary Search Tree                   | 109  | Medium     |
|     | 222 | Construct Binary Tree from Preorder and Inorder Traversal   | 105  | Medium     |
|     | 223 | Construct Binary Tree from Inorder and Postorder Traversal  | 106  | Medium     |
|     | 224 | Construct Binary Tree from Preorder and Postorder Traversal | 889  | Medium     |
|     | 225 | Flatten Binary Tree to Linked List                          | 114  | Medium     |
|     | 226 | Populating Next Right Pointers in Each Node                 | 116  | Medium     |
|     | 227 | Populating Next Right Pointers in Each Node II              | 117  | Medium     |
|     | 228 | Serialize and Deserialize BST                               | 449  | Medium     |
|     | 229 | Serialize and Deserialize Binary Tree                       | 297  | Hard       |

### 7D. LCA & Advanced Views — 8 questions

| ⭐  | #   | Problem                                        | LC # | Difficulty |
| --- | --- | ---------------------------------------------- | ---- | ---------- |
| ⭐  | 230 | Lowest Common Ancestor of a Binary Search Tree | 235  | Medium     |
|     | 231 | Lowest Common Ancestor of a Binary Tree        | 236  | Medium     |
|     | 232 | Lowest Common Ancestor of a Binary Tree III    | 1650 | Medium     |
|     | 233 | Lowest Common Ancestor of Deepest Leaves       | 1123 | Medium     |
|     | 234 | All Nodes Distance K in Binary Tree            | 863  | Medium     |
|     | 235 | Check Completeness of a Binary Tree            | 958  | Medium     |
|     | 236 | House Robber III                               | 337  | Medium     |
|     | 237 | Binary Tree Cameras                            | 968  | Hard       |

### 7E. Binary Search Trees — 15 questions

| ⭐  | #   | Problem                            | LC # | Difficulty |
| --- | --- | ---------------------------------- | ---- | ---------- |
| ⭐  | 238 | Search in a Binary Search Tree     | 700  | Easy       |
|     | 239 | Find Mode in Binary Search Tree    | 501  | Easy       |
|     | 240 | Minimum Absolute Difference in BST | 530  | Easy       |
|     | 241 | Minimum Distance Between BST Nodes | 783  | Easy       |
|     | 242 | Range Sum of BST                   | 938  | Easy       |
| ⭐  | 243 | Validate Binary Search Tree        | 98   | Medium     |
|     | 244 | Insert into a Binary Search Tree   | 701  | Medium     |
|     | 245 | Delete Node in a BST               | 450  | Medium     |
|     | 246 | Kth Smallest Element in a BST      | 230  | Medium     |
|     | 247 | Binary Search Tree Iterator        | 173  | Medium     |
|     | 248 | Recover Binary Search Tree         | 99   | Medium     |
|     | 249 | Unique Binary Search Trees         | 96   | Medium     |
|     | 250 | Balance a Binary Search Tree       | 1382 | Medium     |
|     | 251 | Inorder Successor in BST           | 285  | Medium     |
|     | 252 | Inorder Successor in BST II        | 510  | Medium     |

---

## PHASE 8: Heap / Priority Queue

**📌 19 questions**

**Approach cue:** "Do I repeatedly need the current min/max as things get added/removed?" → heap. "Top K" → heap of size K.

| ⭐  | #   | Problem                         | LC # | Difficulty |
| --- | --- | ------------------------------- | ---- | ---------- |
| ⭐  | 253 | Kth Largest Element in a Stream | 703  | Easy       |
|     | 254 | Last Stone Weight               | 1046 | Easy       |
| ⭐  | 255 | Kth Largest Element in an Array | 215  | Medium     |
| ⭐  | 256 | Top K Frequent Elements         | 347  | Medium     |
|     | 257 | K Closest Points to Origin      | 973  | Medium     |
|     | 258 | Top K Frequent Words            | 692  | Medium     |
|     | 259 | Ugly Number II                  | 264  | Medium     |
|     | 260 | Super Ugly Number               | 313  | Medium     |
|     | 261 | Meeting Rooms II                | 253  | Medium     |
|     | 262 | Design Twitter                  | 355  | Medium     |
|     | 263 | Reorganize String               | 767  | Medium     |
|     | 264 | Task Scheduler                  | 621  | Medium     |
|     | 265 | Single-Threaded CPU             | 1834 | Medium     |
|     | 266 | Furthest Building You Can Reach | 1642 | Medium     |
|     | 267 | Maximum Subsequence Score       | 2542 | Medium     |
|     | 268 | Merge k Sorted Lists            | 23   | Hard       |
|     | 269 | Find Median from Data Stream    | 295  | Hard       |
|     | 270 | IPO                             | 502  | Hard       |
|     | 271 | Trapping Rain Water II          | 407  | Hard       |

---

## PHASE 9: 2D Arrays / Matrix (Non-Graph Manipulation)

**📌 13 questions**

**Approach cue:** the 6 mental models — row/col traversal, transpose trick, spiral/boundary shrinking, diagonal grouping, in-place marking, corner-start search.

| ⭐  | #   | Problem                                  | LC # | Difficulty |
| --- | --- | ---------------------------------------- | ---- | ---------- |
| ⭐  | 272 | Pascal's Triangle II                     | 119  | Easy       |
| ⭐  | 273 | Toeplitz Matrix                          | 766  | Easy       |
|     | 274 | Rotate Image                             | 48   | Medium     |
|     | 275 | Spiral Matrix                            | 54   | Medium     |
|     | 276 | Spiral Matrix II                         | 59   | Medium     |
|     | 277 | Set Matrix Zeroes                        | 73   | Medium     |
|     | 278 | Valid Sudoku                             | 36   | Medium     |
|     | 279 | Game of Life                             | 289  | Medium     |
|     | 280 | Sort the Matrix Diagonally               | 1329 | Medium     |
|     | 281 | Diagonal Traverse                        | 498  | Medium     |
|     | 282 | Range Sum Query 2D – Immutable           | 304  | Medium     |
|     | 283 | Matrix Block Sum                         | 1314 | Medium     |
|     | 284 | Number of Submatrices That Sum to Target | 1074 | Hard       |

---

## PHASE 10: Graphs

**📌 47 questions total**

**Approach cue:** grid problems = DFS/BFS. "Order/dependency" = topological sort. "Shortest path with weights" = Dijkstra/BFS. "Connected/min connections" = Union-Find.

### 10A. Traversal (DFS/BFS on Grid & Graph) — 11 questions

| ⭐  | #   | Problem                     | LC # | Difficulty |
| --- | --- | --------------------------- | ---- | ---------- |
| ⭐  | 285 | Flood Fill                  | 733  | Easy       |
| ⭐  | 286 | Number of Islands           | 200  | Medium     |
|     | 287 | Max Area of Island          | 695  | Medium     |
|     | 288 | Surrounded Regions          | 130  | Medium     |
|     | 289 | Rotting Oranges             | 994  | Medium     |
|     | 290 | 01 Matrix                   | 542  | Medium     |
|     | 291 | Number of Enclaves          | 1020 | Medium     |
|     | 292 | Pacific Atlantic Water Flow | 417  | Medium     |
|     | 293 | Clone Graph                 | 133  | Medium     |
|     | 294 | Is Graph Bipartite?         | 785  | Medium     |
|     | 295 | Keys and Rooms              | 841  | Medium     |

### 10B. Topological Sort — 6 questions

| ⭐  | #   | Problem                                       | LC # | Difficulty |
| --- | --- | --------------------------------------------- | ---- | ---------- |
| ⭐  | 296 | Course Schedule                               | 207  | Medium     |
|     | 297 | Course Schedule II                            | 210  | Medium     |
|     | 298 | Find Eventual Safe States                     | 802  | Medium     |
|     | 299 | Parallel Courses                              | 1136 | Medium     |
|     | 300 | Find All Possible Recipes from Given Supplies | 2115 | Medium     |
|     | 301 | Alien Dictionary                              | 269  | Hard       |

### 10C. Shortest Path — 9 questions

| ⭐  | #   | Problem                                 | LC # | Difficulty |
| --- | --- | --------------------------------------- | ---- | ---------- |
| ⭐  | 302 | Shortest Path in Binary Matrix          | 1091 | Medium     |
|     | 303 | Network Delay Time                      | 743  | Medium     |
|     | 304 | Path With Minimum Effort                | 1631 | Medium     |
|     | 305 | Path with Maximum Probability           | 1514 | Medium     |
|     | 306 | Cheapest Flights Within K Stops         | 787  | Medium     |
|     | 307 | Number of Ways to Arrive at Destination | 1976 | Medium     |
|     | 308 | The Maze II                             | 505  | Medium     |
|     | 309 | Minimum Knight Moves                    | 1197 | Medium     |
|     | 310 | Bus Routes                              | 815  | Hard       |

### 10D. Union-Find / MST — 11 questions

| ⭐  | #   | Problem                                          | LC # | Difficulty |
| --- | --- | ------------------------------------------------ | ---- | ---------- |
| ⭐  | 311 | Number of Provinces                              | 547  | Medium     |
|     | 312 | Redundant Connection                             | 684  | Medium     |
|     | 313 | Graph Valid Tree                                 | 261  | Medium     |
|     | 314 | Number of Operations to Make Network Connected   | 1319 | Medium     |
|     | 315 | Accounts Merge                                   | 721  | Medium     |
|     | 316 | Satisfiability of Equality Equations             | 990  | Medium     |
|     | 317 | The Earliest Moment When Everyone Become Friends | 1101 | Medium     |
|     | 318 | Min Cost to Connect All Points                   | 1584 | Medium     |
|     | 319 | Connecting Cities With Minimum Cost              | 1135 | Medium     |
|     | 320 | Redundant Connection II                          | 685  | Hard       |
|     | 321 | Number of Islands II                             | 305  | Hard       |

### 10E. Advanced Graph — 10 questions

| ⭐  | #   | Problem                                                | LC # | Difficulty |
| --- | --- | ------------------------------------------------------ | ---- | ---------- |
|     | 322 | Shortest Path with Alternating Colors                  | 1129 | Medium     |
|     | 323 | Validate Binary Tree Nodes                             | 1361 | Medium     |
|     | 324 | Flower Planting With No Adjacent                       | 1042 | Medium     |
|     | 325 | Nearest Exit from Entrance in Maze                     | 1926 | Medium     |
|     | 326 | Reorder Routes to Make All Paths Lead to the City Zero | 1466 | Medium     |
|     | 327 | Word Ladder                                            | 127  | Hard       |
|     | 328 | Word Ladder II                                         | 126  | Hard       |
|     | 329 | Reconstruct Itinerary                                  | 332  | Hard       |
|     | 330 | Critical Connections in a Network                      | 1192 | Hard       |
|     | 331 | Swim in Rising Water                                   | 778  | Hard       |

---

## PHASE 11: Trie

**📌 10 questions**

**Approach cue:** prefix problems (autocomplete, word search across many words) → Trie beats a hashmap because it shares prefix storage.

| ⭐  | #   | Problem                                    | LC # | Difficulty |
| --- | --- | ------------------------------------------ | ---- | ---------- |
| ⭐  | 332 | Implement Trie (Prefix Tree)               | 208  | Medium     |
|     | 333 | Design Add and Search Words Data Structure | 211  | Medium     |
|     | 334 | Replace Words                              | 648  | Medium     |
|     | 335 | Map Sum Pairs                              | 677  | Medium     |
|     | 336 | Search Suggestions System                  | 1268 | Medium     |
|     | 337 | Longest Word in Dictionary                 | 720  | Medium     |
|     | 338 | Maximum XOR of Two Numbers in an Array     | 421  | Medium     |
|     | 339 | Word Search II                             | 212  | Hard       |
|     | 340 | Stream of Characters                       | 1032 | Hard       |
|     | 341 | Prefix and Suffix Search                   | 745  | Hard       |

---

## PHASE 12: Greedy & Intervals

**📌 18 questions**

**Approach cue:** "if I make the locally best choice right now, does it never hurt me later?" → greedy. Interval problems: **sort by start (or end) time** first.

| ⭐  | #   | Problem                                    | LC # | Difficulty |
| --- | --- | ------------------------------------------ | ---- | ---------- |
| ⭐  | 342 | Lemonade Change                            | 860  | Easy       |
| ⭐  | 343 | Merge Intervals                            | 56   | Medium     |
|     | 344 | Insert Interval                            | 57   | Medium     |
|     | 345 | Non-overlapping Intervals                  | 435  | Medium     |
|     | 346 | Minimum Number of Arrows to Burst Balloons | 452  | Medium     |
|     | 347 | Partition Labels                           | 763  | Medium     |
|     | 348 | Queue Reconstruction by Height             | 406  | Medium     |
|     | 349 | Jump Game                                  | 55   | Medium     |
|     | 350 | Jump Game II                               | 45   | Medium     |
|     | 351 | Jump Game III                              | 1306 | Medium     |
|     | 352 | Gas Station                                | 134  | Medium     |
|     | 353 | Monotone Increasing Digits                 | 738  | Medium     |
|     | 354 | Minimum Add to Make Parentheses Valid      | 921  | Medium     |
|     | 355 | Maximize Sum Of Array After K Negations    | 1005 | Easy       |
|     | 356 | Remove K Digits                            | 402  | Medium     |
|     | 357 | Two City Scheduling                        | 1029 | Medium     |
|     | 358 | Dota2 Senate                               | 649  | Medium     |
|     | 359 | Candy                                      | 135  | Hard       |

---

## PHASE 13: Bit Manipulation & Math

**📌 43 questions total**

### 13A. Bit Manipulation — 12 questions

**Approach cue:** XOR cancels duplicates (`a ^ a = 0`) — solves half of "single number" style problems instantly.

| ⭐  | #   | Problem                                           | LC # | Difficulty |
| --- | --- | ------------------------------------------------- | ---- | ---------- |
| ⭐  | 360 | Number of 1 Bits                                  | 191  | Easy       |
| ⭐  | 361 | Single Number                                     | 136  | Easy       |
|     | 362 | Reverse Bits                                      | 190  | Easy       |
|     | 363 | Counting Bits                                     | 338  | Easy       |
|     | 364 | Convert Binary Number in a Linked List to Integer | 1290 | Easy       |
|     | 365 | Single Number II                                  | 137  | Medium     |
|     | 366 | Single Number III                                 | 260  | Medium     |
|     | 367 | Sum of Two Integers                               | 371  | Medium     |
|     | 368 | Repeated DNA Sequences                            | 187  | Medium     |
|     | 369 | Bitwise AND of Numbers Range                      | 201  | Medium     |
|     | 370 | Maximum XOR of Two Numbers in an Array            | 421  | Medium     |
|     | 371 | Find Unique Binary String                         | 1980 | Medium     |

### 13B. Math — 31 questions ⬅️ _(expanded — 14 new problems added)_

**Approach cue:** look for a formula/pattern before brute-forcing. Digit-manipulation problems (`% 10` and `/ 10`) are their own recurring sub-pattern — get comfortable extracting digits one at a time.

| ⭐  | #   | Problem                                              | LC # | Difficulty |
| --- | --- | ---------------------------------------------------- | ---- | ---------- |
| ⭐  | 372 | Palindrome Number                                    | 9    | Easy       |
| ⭐  | 373 | Add Digits                                           | 258  | Easy       |
|     | 374 | Ugly Number                                          | 263  | Easy       |
|     | 375 | Count Odd Numbers in an Interval Range               | 1523 | Easy       |
|     | 376 | Add to Array-Form of Integer                         | 989  | Easy       |
|     | 377 | Add Binary                                           | 67   | Easy       |
|     | 378 | Add Strings                                          | 415  | Easy       |
| 🆕  | 379 | Self Dividing Numbers                                | 728  | Easy       |
| 🆕  | 380 | Base 7                                               | 504  | Easy       |
| 🆕  | 381 | Excel Sheet Column Title                             | 168  | Easy       |
| 🆕  | 382 | Excel Sheet Column Number                            | 171  | Easy       |
| 🆕  | 383 | Subtract the Product and Sum of Digits of an Integer | 1281 | Easy       |
| 🆕  | 384 | Nim Game                                             | 292  | Easy       |
| 🆕  | 385 | GCD of Strings                                       | 1071 | Easy       |
| ⭐  | 386 | Reverse Integer                                      | 7    | Medium     |
|     | 387 | Divide Two Integers                                  | 29   | Medium     |
|     | 388 | Factorial Trailing Zeroes                            | 172  | Medium     |
|     | 389 | Count Primes                                         | 204  | Medium     |
|     | 390 | Ugly Number II                                       | 264  | Medium     |
|     | 391 | Check if Number is a Sum of Powers of Three          | 1780 | Medium     |
|     | 392 | String to Integer (atoi)                             | 8    | Medium     |
|     | 393 | Multiply Strings                                     | 43   | Medium     |
| 🆕  | 394 | Bulb Switcher                                        | 319  | Medium     |
| 🆕  | 395 | Minimum Moves to Equal Array Elements II             | 462  | Medium     |
| 🆕  | 396 | Mirror Reflection                                    | 858  | Medium     |
| 🆕  | 397 | Count Good Numbers                                   | 1922 | Medium     |
| 🆕  | 398 | Super Pow                                            | 372  | Medium     |
| 🆕  | 399 | Water and Jug Problem                                | 365  | Medium     |
| 🆕  | 400 | Fraction to Recurring Decimal                        | 166  | Medium     |
|     | 401 | Permutation Sequence                                 | 60   | Hard       |
|     | 402 | Number of Digit One                                  | 233  | Hard       |

_(🆕 = newly added in this update)_

---

## PHASE 14: Strings (Pattern-Specific, Non-DP)

**📌 18 questions**

**Approach cue:** most string problems reduce to Two Pointers, Sliding Window, or Hashing — patterns you already have. This phase is the remaining string-specific techniques (parsing, palindrome expansion).

| ⭐  | #   | Problem                                            | LC # | Difficulty |
| --- | --- | -------------------------------------------------- | ---- | ---------- |
| ⭐  | 403 | Reverse Words in a String                          | 151  | Medium     |
| ⭐  | 404 | Longest Common Prefix                              | 14   | Easy       |
|     | 405 | Find the Index of the First Occurrence in a String | 28   | Easy       |
|     | 406 | Length of Last Word                                | 58   | Easy       |
|     | 407 | Reverse String II                                  | 541  | Easy       |
|     | 408 | Valid Palindrome II                                | 680  | Easy       |
|     | 409 | Repeated Substring Pattern                         | 459  | Easy       |
|     | 410 | Roman to Integer                                   | 13   | Easy       |
| ⭐  | 411 | Longest Palindromic Substring                      | 5    | Medium     |
|     | 412 | Palindromic Substrings                             | 647  | Medium     |
|     | 413 | Zigzag Conversion                                  | 6    | Medium     |
|     | 414 | Integer to Roman                                   | 12   | Medium     |
|     | 415 | Encode and Decode Strings                          | 271  | Medium     |
|     | 416 | Repeated String Match                              | 686  | Medium     |
|     | 417 | Scramble String                                    | 87   | Hard       |
|     | 418 | Shortest Palindrome                                | 214  | Hard       |
|     | 419 | Substring with Concatenation of All Words          | 30   | Hard       |
|     | 420 | Longest Duplicate Substring                        | 1044 | Hard       |

---

## PHASE 15: Dynamic Programming (Do This Last)

**📌 69 questions total**

**Approach cue (master framework):** (1) What decision am I making at each step? (2) What state do I need to remember? (3) Recurrence: `answer(state) = f(answer(smaller states))`? (4) Base case? Brute-force recursive first, THEN memoize, THEN bottom-up table if needed.

### 15A. 1D DP — 15 questions

| ⭐  | #   | Problem                                   | LC # | Difficulty |
| --- | --- | ----------------------------------------- | ---- | ---------- |
| ⭐  | 421 | Climbing Stairs (revisit through DP lens) | 70   | Easy       |
| ⭐  | 422 | Min Cost Climbing Stairs                  | 746  | Easy       |
| ⭐  | 423 | House Robber                              | 198  | Medium     |
|     | 424 | House Robber II                           | 213  | Medium     |
|     | 425 | Delete and Earn                           | 740  | Medium     |
|     | 426 | Decode Ways                               | 91   | Medium     |
|     | 427 | Perfect Squares                           | 279  | Medium     |
|     | 428 | Coin Change                               | 322  | Medium     |
|     | 429 | Coin Change II                            | 518  | Medium     |
|     | 430 | Combination Sum IV                        | 377  | Medium     |
| ⭐  | 431 | Longest Increasing Subsequence            | 300  | Medium     |
|     | 432 | Number of Longest Increasing Subsequence  | 673  | Medium     |
|     | 433 | Longest Arithmetic Subsequence            | 1027 | Medium     |
|     | 434 | Russian Doll Envelopes                    | 354  | Hard       |
|     | 435 | Palindrome Partitioning II                | 132  | Hard       |

### 15B. Grid / 2D DP — 9 questions

| ⭐  | #   | Problem                                  | LC # | Difficulty |
| --- | --- | ---------------------------------------- | ---- | ---------- |
| ⭐  | 436 | Unique Paths                             | 62   | Medium     |
|     | 437 | Unique Paths II                          | 63   | Medium     |
| ⭐  | 438 | Minimum Path Sum                         | 64   | Medium     |
|     | 439 | Triangle                                 | 120  | Medium     |
|     | 440 | Minimum Falling Path Sum                 | 931  | Medium     |
|     | 441 | Maximal Square                           | 221  | Medium     |
|     | 442 | Maximum Non Negative Product in a Matrix | 1594 | Medium     |
|     | 443 | Dungeon Game                             | 174  | Hard       |
|     | 444 | Cherry Pickup                            | 741  | Hard       |

### 15C. String DP — 12 questions

| ⭐  | #   | Problem                                             | LC # | Difficulty |
| --- | --- | --------------------------------------------------- | ---- | ---------- |
| ⭐  | 445 | Longest Common Subsequence                          | 1143 | Medium     |
|     | 446 | Delete Operation for Two Strings                    | 583  | Medium     |
|     | 447 | Uncrossed Lines                                     | 1035 | Medium     |
| ⭐  | 448 | Edit Distance                                       | 72   | Medium     |
|     | 449 | Longest Palindromic Subsequence                     | 516  | Medium     |
|     | 450 | Interleaving String                                 | 97   | Medium     |
|     | 451 | Distinct Subsequences                               | 115  | Hard       |
|     | 452 | Wildcard Matching                                   | 44   | Hard       |
|     | 453 | Regular Expression Matching                         | 10   | Hard       |
|     | 454 | Count Different Palindromic Subsequences            | 730  | Hard       |
|     | 455 | Shortest Common Supersequence                       | 1092 | Hard       |
|     | 456 | Minimum Insertion Steps to Make a String Palindrome | 1312 | Hard       |

### 15D. Knapsack Variants — 6 questions

| ⭐  | #   | Problem                          | LC # | Difficulty |
| --- | --- | -------------------------------- | ---- | ---------- |
| ⭐  | 457 | Partition Equal Subset Sum       | 416  | Medium     |
|     | 458 | Target Sum                       | 494  | Medium     |
|     | 459 | Ones and Zeroes                  | 474  | Medium     |
|     | 460 | Last Stone Weight II             | 1049 | Medium     |
|     | 461 | Partition to K Equal Sum Subsets | 698  | Medium     |
|     | 462 | Profitable Schemes               | 879  | Hard       |

### 15E. Stock DP — 6 questions

| ⭐  | #   | Problem                                              | LC # | Difficulty |
| --- | --- | ---------------------------------------------------- | ---- | ---------- |
| ⭐  | 463 | Best Time to Buy and Sell Stock (DP lens)            | 121  | Easy       |
|     | 464 | Best Time to Buy and Sell Stock II                   | 122  | Medium     |
|     | 465 | Best Time to Buy and Sell Stock with Cooldown        | 309  | Medium     |
|     | 466 | Best Time to Buy and Sell Stock with Transaction Fee | 714  | Medium     |
|     | 467 | Best Time to Buy and Sell Stock III                  | 123  | Hard       |
|     | 468 | Best Time to Buy and Sell Stock IV                   | 188  | Hard       |

### 15F. DP on Trees / Graphs — 4 questions

| ⭐  | #   | Problem                    | LC # | Difficulty |
| --- | --- | -------------------------- | ---- | ---------- |
| ⭐  | 469 | House Robber III           | 337  | Medium     |
|     | 470 | Tree Diameter              | 1245 | Medium     |
|     | 471 | Linked List in Binary Tree | 1367 | Medium     |
|     | 472 | Binary Tree Cameras        | 968  | Hard       |

### 15G. Interval / Partition DP — 6 questions

| ⭐  | #   | Problem                                  | LC # | Difficulty |
| --- | --- | ---------------------------------------- | ---- | ---------- |
| ⭐  | 473 | Unique Binary Search Trees (counting DP) | 96   | Medium     |
|     | 474 | Minimum Score Triangulation of Polygon   | 1039 | Medium     |
|     | 475 | Guess Number Higher or Lower II          | 375  | Medium     |
|     | 476 | Burst Balloons                           | 312  | Hard       |
|     | 477 | Remove Boxes                             | 546  | Hard       |
|     | 478 | Super Egg Drop                           | 887  | Hard       |

### 15H. Bitmask & Advanced DP (do these last of all) — 11 questions

| ⭐  | #   | Problem                                            | LC # | Difficulty |
| --- | --- | -------------------------------------------------- | ---- | ---------- |
|     | 479 | Can I Win                                          | 464  | Medium     |
|     | 480 | Toss Strange Coins                                 | 1230 | Medium     |
|     | 481 | Largest Sum of Averages                            | 813  | Medium     |
|     | 482 | Flip String to Monotone Increasing                 | 926  | Medium     |
|     | 483 | Longest Arithmetic Subsequence of Given Difference | 1218 | Medium     |
|     | 484 | Maximum Profit in Job Scheduling                   | 1235 | Hard       |
|     | 485 | Smallest Sufficient Team                           | 1125 | Hard       |
|     | 486 | Parallel Courses II                                | 1494 | Hard       |
|     | 487 | Distribute Repeating Integers                      | 1655 | Hard       |
|     | 488 | Find the Shortest Superstring                      | 943  | Hard       |
|     | 489 | Maximize Score After N Operations                  | 1799 | Hard       |

---

## 📊 Full Question Count Summary

| Phase | Topic                    | Questions |
| ----- | ------------------------ | --------- |
| 0     | Arrays & Hashing         | 46        |
| 1     | Two Pointers             | 11        |
| 2     | Sliding Window           | 15        |
| 3     | Sorting & Binary Search  | 36        |
| 4     | Stack & Queue            | 27        |
| 5     | Linked List              | 27        |
| 6     | Recursion → Backtracking | 30        |
| 7     | Trees → BST              | 60        |
| 8     | Heap / Priority Queue    | 19        |
| 9     | 2D Arrays / Matrix       | 13        |
| 10    | Graphs                   | 47        |
| 11    | Trie                     | 10        |
| 12    | Greedy & Intervals       | 18        |
| 13    | Bit Manipulation & Math  | 43        |
| 14    | Strings                  | 18        |
| 15    | Dynamic Programming      | 69        |
|       | **TOTAL**                | **489**   |

---

## Overall Sequence (unchanged from before)

```
Phase 0  → Arrays & Hashing            (46)
Phase 1  → Two Pointers                (11)
Phase 2  → Sliding Window              (15)
Phase 3  → Sorting & Binary Search     (36)
Phase 4  → Stack & Queue               (27)
Phase 5  → Linked List                 (27)
Phase 6  → Recursion → Backtracking    (30)
Phase 7  → Trees → BST                 (60)
Phase 8  → Heap / Priority Queue       (19)
Phase 9  → 2D Arrays / Matrix          (13)
Phase 10 → Graphs                      (47)
Phase 11 → Trie                        (10)
Phase 12 → Greedy & Intervals          (18)
Phase 13 → Bit Manipulation & Math     (43)
Phase 14 → Strings (remaining)         (18)
Phase 15 → Dynamic Programming         (69) — do this last
```

If you get stuck on any problem: find its Phase above, go back to the ⭐ problem in that exact sub-section, and rebuild your understanding there first before pushing forward.
