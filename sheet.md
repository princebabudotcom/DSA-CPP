# 🧠 DSA Interview Roadmap — LeetCode Master Sheet

> A single, trackable sheet from beginner → interview-ready. Covers **Arrays, Binary Search, Binary Search on Answer, Strings, and 2D Arrays/Matrix** — ~105 hand-picked, high-frequency interview questions.

**Legend:** ⬜ Not Started · 🟨 Revising · ✅ Solved · ⭐ Mastered

---

## 📑 Table of Contents

- [📊 Overall Dashboard](#-overall-dashboard)
- [🔁 Revision Plan](#-revision-plan)
- [1️⃣ Arrays](#1️⃣-arrays)
- [2️⃣ Binary Search](#2️⃣-binary-search)
- [3️⃣ Binary Search on Answer](#3️⃣-binary-search-on-answer)
- [4️⃣ Strings](#4️⃣-strings)
- [5️⃣ 2D Arrays / Matrix](#5️⃣-2d-arrays--matrix)

---

## 📊 Overall Dashboard

| Topic                   | 🟢 Easy | 🟡 Medium | 🔴 Hard | Total   | Completed   |
| ----------------------- | ------- | --------- | ------- | ------- | ----------- |
| Arrays                  | 10      | 16        | 3       | 29      | 0 / 29      |
| Binary Search           | 6       | 15        | 2       | 23      | 0 / 23      |
| Binary Search on Answer | 0       | 13        | 2       | 15      | 0 / 15      |
| Strings                 | 7       | 12        | 3       | 22      | 0 / 22      |
| 2D Arrays / Matrix      | 4       | 11        | 1       | 16      | 0 / 16      |
| **Total**               | **27**  | **67**    | **11**  | **105** | **0 / 105** |

_(Update the "Completed" column manually as you go — or track per-topic stats at the bottom of each section.)_

---

## 🔁 Revision Plan

Spaced repetition beats re-solving randomly. For every question marked ✅, revisit it on:

- [ ] **Day 1** — re-solve from scratch, no hints
- [ ] **Day 3** — re-solve, check for a cleaner/optimal approach
- [ ] **Day 7** — explain the approach out loud before coding
- [ ] **Day 15** — solve under time pressure (interview simulation)
- [ ] **Day 30** — final check, mark ⭐ Mastered if solved cleanly under 15 min

Use the **Revision** column in each table to log your current stage (e.g. `D1 ✅ | D3 ⬜`).

---

## 1️⃣ Arrays

### 🟢 Easy

| #   | LC No. | Problem Name                        | Difficulty | Pattern                | Revision | Notes |
| --- | ------ | ----------------------------------- | ---------- | ---------------------- | -------- | ----- |
| 1   | 1      | Two Sum                             | Easy       | Hash Map               | ⬜       |       |
| 2   | 121    | Best Time to Buy and Sell Stock     | Easy       | Greedy / One Pass      | ⬜       |       |
| 3   | 217    | Contains Duplicate                  | Easy       | Hash Set               | ⬜       |       |
| 4   | 283    | Move Zeroes                         | Easy       | Two Pointers           | ⬜       |       |
| 5   | 169    | Majority Element                    | Easy       | Boyer-Moore Voting     | ⬜       |       |
| 6   | 66     | Plus One                            | Easy       | Simulation             | ⬜       |       |
| 7   | 26     | Remove Duplicates from Sorted Array | Easy       | Two Pointers           | ⬜       |       |
| 8   | 136    | Single Number                       | Easy       | Bit Manipulation (XOR) | ⬜       |       |
| 9   | 88     | Merge Sorted Array                  | Easy       | Two Pointers           | ⬜       |       |
| 10  | 118    | Pascal's Triangle                   | Easy       | Simulation             | ⬜       |       |

### 🟡 Medium

| #   | LC No. | Problem Name                       | Difficulty | Pattern                     | Revision | Notes |
| --- | ------ | ---------------------------------- | ---------- | --------------------------- | -------- | ----- |
| 11  | 122    | Best Time to Buy and Sell Stock II | Medium     | Greedy                      | ⬜       |       |
| 12  | 167    | Two Sum II - Input Array Is Sorted | Medium     | Two Pointers                | ⬜       |       |
| 13  | 53     | Maximum Subarray                   | Medium     | Kadane's Algorithm          | ⬜       |       |
| 14  | 238    | Product of Array Except Self       | Medium     | Prefix / Suffix Product     | ⬜       |       |
| 15  | 15     | 3Sum                               | Medium     | Two Pointers                | ⬜       |       |
| 16  | 11     | Container With Most Water          | Medium     | Two Pointers                | ⬜       |       |
| 17  | 31     | Next Permutation                   | Medium     | Simulation                  | ⬜       |       |
| 18  | 189    | Rotate Array                       | Medium     | Array Reversal              | ⬜       |       |
| 19  | 560    | Subarray Sum Equals K              | Medium     | Prefix Sum + Hash Map       | ⬜       |       |
| 20  | 75     | Sort Colors                        | Medium     | Dutch National Flag         | ⬜       |       |
| 21  | 442    | Find All Duplicates in an Array    | Medium     | Cyclic Sort / Index Marking | ⬜       |       |
| 22  | 134    | Gas Station                        | Medium     | Greedy                      | ⬜       |       |
| 23  | 57     | Insert Interval                    | Medium     | Intervals                   | ⬜       |       |
| 24  | 56     | Merge Intervals                    | Medium     | Intervals / Sorting         | ⬜       |       |
| 25  | 215    | Kth Largest Element in an Array    | Medium     | QuickSelect / Heap          | ⬜       |       |
| 26  | 128    | Longest Consecutive Sequence       | Medium     | Hash Set                    | ⬜       |       |

### 🔴 Hard

| #   | LC No. | Problem Name           | Difficulty | Pattern         | Revision | Notes |
| --- | ------ | ---------------------- | ---------- | --------------- | -------- | ----- |
| 27  | 42     | Trapping Rain Water    | Hard       | Two Pointers    | ⬜       |       |
| 28  | 41     | First Missing Positive | Hard       | Cyclic Sort     | ⬜       |       |
| 29  | 239    | Sliding Window Maximum | Hard       | Monotonic Deque | ⬜       |       |

**📈 Arrays Stats:** 🟢 Easy: 10 · 🟡 Medium: 16 · 🔴 Hard: 3 · **Total: 29**

[⬆ Back to top](#-table-of-contents)

---

## 2️⃣ Binary Search

### 🟢 Easy

| #   | LC No. | Problem Name                 | Difficulty | Pattern       | Revision | Notes |
| --- | ------ | ---------------------------- | ---------- | ------------- | -------- | ----- |
| 1   | 704    | Binary Search                | Easy       | Binary Search | ⬜       |       |
| 2   | 35     | Search Insert Position       | Easy       | Binary Search | ⬜       |       |
| 3   | 278    | First Bad Version            | Easy       | Binary Search | ⬜       |       |
| 4   | 69     | Sqrt(x)                      | Easy       | Binary Search | ⬜       |       |
| 5   | 367    | Valid Perfect Square         | Easy       | Binary Search | ⬜       |       |
| 6   | 374    | Guess Number Higher or Lower | Easy       | Binary Search | ⬜       |       |

### 🟡 Medium

| #   | LC No. | Problem Name                                            | Difficulty | Pattern                          | Revision | Notes |
| --- | ------ | ------------------------------------------------------- | ---------- | -------------------------------- | -------- | ----- |
| 7   | 34     | Find First and Last Position of Element in Sorted Array | Medium     | Binary Search                    | ⬜       |       |
| 8   | 33     | Search in Rotated Sorted Array                          | Medium     | Binary Search                    | ⬜       |       |
| 9   | 81     | Search in Rotated Sorted Array II                       | Medium     | Binary Search                    | ⬜       |       |
| 10  | 153    | Find Minimum in Rotated Sorted Array                    | Medium     | Binary Search                    | ⬜       |       |
| 11  | 162    | Find Peak Element                                       | Medium     | Binary Search                    | ⬜       |       |
| 12  | 540    | Single Element in a Sorted Array                        | Medium     | Binary Search                    | ⬜       |       |
| 13  | 29     | Divide Two Integers                                     | Medium     | Binary Search / Bit Manipulation | ⬜       |       |
| 14  | 2300   | Successful Pairs of Spells and Potions                  | Medium     | Binary Search                    | ⬜       |       |
| 15  | 981    | Time Based Key-Value Store                              | Medium     | Binary Search + Hash Map         | ⬜       |       |
| 16  | 528    | Random Pick with Weight                                 | Medium     | Binary Search + Prefix Sum       | ⬜       |       |
| 17  | 378    | Kth Smallest Element in a Sorted Matrix                 | Medium     | Binary Search on Value           | ⬜       |       |
| 18  | 658    | Find K Closest Elements                                 | Medium     | Binary Search                    | ⬜       |       |
| 19  | 852    | Peak Index in a Mountain Array                          | Medium     | Binary Search                    | ⬜       |       |
| 20  | 275    | H-Index II                                              | Medium     | Binary Search                    | ⬜       |       |
| 21  | 287    | Find the Duplicate Number                               | Medium     | Binary Search on Value           | ⬜       |       |

### 🔴 Hard

| #   | LC No. | Problem Name                            | Difficulty | Pattern                   | Revision | Notes |
| --- | ------ | --------------------------------------- | ---------- | ------------------------- | -------- | ----- |
| 22  | 4      | Median of Two Sorted Arrays             | Hard       | Binary Search (Partition) | ⬜       |       |
| 23  | 154    | Find Minimum in Rotated Sorted Array II | Hard       | Binary Search             | ⬜       |       |

**📈 Binary Search Stats:** 🟢 Easy: 6 · 🟡 Medium: 15 · 🔴 Hard: 2 · **Total: 23**

[⬆ Back to top](#-table-of-contents)

---

## 3️⃣ Binary Search on Answer

> This is a distinct meta-pattern: instead of searching in an array, you binary search over the **space of possible answers** and use a feasibility check (`canAchieve(mid)`) to shrink the range. It rarely appears as "Easy" — treat it as an advanced but very high-yield interview pattern.

### 🟡 Medium

| #   | LC No. | Problem Name                                           | Difficulty | Pattern                              | Revision | Notes |
| --- | ------ | ------------------------------------------------------ | ---------- | ------------------------------------ | -------- | ----- |
| 1   | 875    | Koko Eating Bananas                                    | Medium     | Binary Search on Answer              | ⬜       |       |
| 2   | 1011   | Capacity To Ship Packages Within D Days                | Medium     | Binary Search on Answer              | ⬜       |       |
| 3   | 1482   | Minimum Number of Days to Make m Bouquets              | Medium     | Binary Search on Answer              | ⬜       |       |
| 4   | 1283   | Find the Smallest Divisor Given a Threshold            | Medium     | Binary Search on Answer              | ⬜       |       |
| 5   | 1552   | Magnetic Force Between Two Balls                       | Medium     | Binary Search on Answer              | ⬜       |       |
| 6   | 1802   | Maximum Value at a Given Index in a Bounded Array      | Medium     | Binary Search on Answer              | ⬜       |       |
| 7   | 1870   | Minimum Speed to Arrive on Time                        | Medium     | Binary Search on Answer              | ⬜       |       |
| 8   | 1760   | Minimum Limit of Balls in a Bag                        | Medium     | Binary Search on Answer              | ⬜       |       |
| 9   | 2226   | Maximum Candies Allocated to K Children                | Medium     | Binary Search on Answer              | ⬜       |       |
| 10  | 1300   | Sum of Mutated Array Closest to Target                 | Medium     | Binary Search on Answer              | ⬜       |       |
| 11  | 1201   | Ugly Number III                                        | Medium     | Binary Search on Answer + Math (LCM) | ⬜       |       |
| 12  | 1898   | Maximum Number of Removable Characters                 | Medium     | Binary Search on Answer              | ⬜       |       |
| 13  | 2064   | Minimized Maximum of Products Distributed to Any Store | Medium     | Binary Search on Answer              | ⬜       |       |

### 🔴 Hard

| #   | LC No. | Problem Name            | Difficulty | Pattern                              | Revision | Notes |
| --- | ------ | ----------------------- | ---------- | ------------------------------------ | -------- | ----- |
| 14  | 410    | Split Array Largest Sum | Hard       | Binary Search on Answer              | ⬜       |       |
| 15  | 878    | Nth Magical Number      | Hard       | Binary Search on Answer + Math (LCM) | ⬜       |       |

**📈 Binary Search on Answer Stats:** 🟢 Easy: 0 · 🟡 Medium: 13 · 🔴 Hard: 2 · **Total: 15**

[⬆ Back to top](#-table-of-contents)

---

## 4️⃣ Strings

### 🟢 Easy

| #   | LC No. | Problem Name                                       | Difficulty | Pattern               | Revision | Notes |
| --- | ------ | -------------------------------------------------- | ---------- | --------------------- | -------- | ----- |
| 1   | 242    | Valid Anagram                                      | Easy       | Hash Map / Counting   | ⬜       |       |
| 2   | 125    | Valid Palindrome                                   | Easy       | Two Pointers          | ⬜       |       |
| 3   | 344    | Reverse String                                     | Easy       | Two Pointers          | ⬜       |       |
| 4   | 14     | Longest Common Prefix                              | Easy       | String Traversal      | ⬜       |       |
| 5   | 28     | Find the Index of the First Occurrence in a String | Easy       | String Matching       | ⬜       |       |
| 6   | 13     | Roman to Integer                                   | Easy       | Hash Map / Simulation | ⬜       |       |
| 7   | 205    | Isomorphic Strings                                 | Easy       | Hash Map              | ⬜       |       |

### 🟡 Medium

| #   | LC No. | Problem Name                                   | Difficulty | Pattern              | Revision | Notes                                                                                                             |
| --- | ------ | ---------------------------------------------- | ---------- | -------------------- | -------- | ----------------------------------------------------------------------------------------------------------------- |
| 8   | 3      | Longest Substring Without Repeating Characters | Medium     | Sliding Window       | ⬜       |                                                                                                                   |
| 9   | 5      | Longest Palindromic Substring                  | Medium     | Expand Around Center | ⬜       |                                                                                                                   |
| 10  | 49     | Group Anagrams                                 | Medium     | Hash Map             | ⬜       |                                                                                                                   |
| 11  | 8      | String to Integer (atoi)                       | Medium     | Simulation           | ⬜       |                                                                                                                   |
| 12  | 6      | Zigzag Conversion                              | Medium     | Simulation           | ⬜       |                                                                                                                   |
| 13  | 1143   | Longest Common Subsequence                     | Medium     | Dynamic Programming  | ⬜       |                                                                                                                   |
| 14  | 647    | Palindromic Substrings                         | Medium     | Expand Around Center | ⬜       |                                                                                                                   |
| 15  | 438    | Find All Anagrams in a String                  | Medium     | Sliding Window       | ⬜       |                                                                                                                   |
| 16  | 17     | Letter Combinations of a Phone Number          | Medium     | Backtracking         | ⬜       |                                                                                                                   |
| 17  | 91     | Decode Ways                                    | Medium     | Dynamic Programming  | ⬜       |                                                                                                                   |
| 18  | 43     | Multiply Strings                               | Medium     | Simulation           | ⬜       |                                                                                                                   |
| 19  | 383    | Ransom Note                                    | Medium     | Hash Map / Counting  | ⬜       | Frequently listed Easy on trackers, but official LC tag is Medium-leaning practice; verify on LC before interview |

### 🔴 Hard

| #   | LC No. | Problem Name                | Difficulty | Pattern             | Revision | Notes |
| --- | ------ | --------------------------- | ---------- | ------------------- | -------- | ----- |
| 20  | 76     | Minimum Window Substring    | Hard       | Sliding Window      | ⬜       |       |
| 21  | 10     | Regular Expression Matching | Hard       | Dynamic Programming | ⬜       |       |
| 22  | 68     | Text Justification          | Hard       | Simulation          | ⬜       |       |

**📈 Strings Stats:** 🟢 Easy: 7 · 🟡 Medium: 12 · 🔴 Hard: 3 · **Total: 22**

[⬆ Back to top](#-table-of-contents)

---

## 5️⃣ 2D Arrays / Matrix

### 🟢 Easy

| #   | LC No. | Problem Name                              | Difficulty | Pattern                          | Revision | Notes |
| --- | ------ | ----------------------------------------- | ---------- | -------------------------------- | -------- | ----- |
| 1   | 867    | Transpose Matrix                          | Easy       | Matrix Traversal                 | ⬜       |       |
| 2   | 832    | Flipping an Image                         | Easy       | Simulation                       | ⬜       |       |
| 3   | 766    | Toeplitz Matrix                           | Easy       | Matrix Traversal                 | ⬜       |       |
| 4   | 1351   | Count Negative Numbers in a Sorted Matrix | Easy       | Matrix Traversal / Binary Search | ⬜       |       |

### 🟡 Medium

| #   | LC No. | Problem Name          | Difficulty | Pattern                             | Revision | Notes                             |
| --- | ------ | --------------------- | ---------- | ----------------------------------- | -------- | --------------------------------- |
| 5   | 74     | Search a 2D Matrix    | Medium     | Binary Search                       | ⬜       | Your current focus problem        |
| 6   | 240    | Search a 2D Matrix II | Medium     | Binary Search / Staircase Search    | ⬜       | Do right after #5 — key follow-up |
| 7   | 73     | Set Matrix Zeroes     | Medium     | Matrix Traversal / In-place Marking | ⬜       |                                   |
| 8   | 48     | Rotate Image          | Medium     | Matrix Traversal / In-place         | ⬜       |                                   |
| 9   | 54     | Spiral Matrix         | Medium     | Simulation                          | ⬜       |                                   |
| 10  | 59     | Spiral Matrix II      | Medium     | Simulation                          | ⬜       |                                   |
| 11  | 289    | Game of Life          | Medium     | Simulation / In-place               | ⬜       |                                   |
| 12  | 498    | Diagonal Traverse     | Medium     | Matrix Traversal                    | ⬜       |                                   |
| 13  | 200    | Number of Islands     | Medium     | DFS / BFS on Grid                   | ⬜       |                                   |
| 14  | 79     | Word Search           | Medium     | Backtracking / DFS                  | ⬜       |                                   |
| 15  | 221    | Maximal Square        | Medium     | Dynamic Programming on Grid         | ⬜       |                                   |

### 🔴 Hard

| #   | LC No. | Problem Name      | Difficulty | Pattern              | Revision | Notes |
| --- | ------ | ----------------- | ---------- | -------------------- | -------- | ----- |
| 16  | 85     | Maximal Rectangle | Hard       | DP + Monotonic Stack | ⬜       |       |

**📈 Matrix Stats:** 🟢 Easy: 4 · 🟡 Medium: 11 · 🔴 Hard: 1 · **Total: 16**

[⬆ Back to top](#-table-of-contents)

---

## ✅ How to Use This Sheet

1. Work topic by topic, easy → hard. Don't skip to Hard early — the patterns build on each other.
2. Update the emoji in the **Revision** column as you progress: ⬜ → 🟨 → ✅ → ⭐.
3. Once a problem is ✅, drop it into the [Revision Plan](#-revision-plan) cadence (Day 1/3/7/15/30).
4. Update the **Overall Dashboard** completion counts weekly — it's your single source of truth for how interview-ready you are.
5. For every problem, write the **pattern name** in your own words before checking the solution — pattern recognition is what interviewers are actually testing.

---

_Last structured for: Arrays → Binary Search → Binary Search on Answer → Strings → Matrix. Extend this same format for Linked List, Trees, Graphs, DP, Backtracking, and Greedy as you progress._
