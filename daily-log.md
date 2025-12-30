# Daily LeetCode Log

Purpose: Build consistency and track learning.

---

## Day 1
- Problem: Two Sum
  
- Topic: Arrays/Vectors, Hash Map
  
- Key idea:
- For each number, compute the missing value (target - current)
- Check if missing is in hash map (seen before)
- If found: return indices
- If not found: store current number index in hash map
- Iterating vector + hash map enables one-pass O(n) solution
- What I learned:
  
- How to effectively use hash map for fast lookups
- How to check fr complements (target - current) tp find pairs efficiently
- Combining array iteration with hash map storage enables a one-pass O(n) solution
- Importance of checking the hash map **before** inserting the current number
