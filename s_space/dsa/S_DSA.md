# DSA Log — Sreehitha

Goal: 1-2 problems a day, logged here. Code stays on LeetCode — this file is just proof of reps, so you can look back later and see how far you've come.

| Date       | Problem  | Difficulty | Topic           | Link                                      | Notes                                                              |
|------------|----------|------------|-----------------|--------------------------------------------|---------------------------------------------------------------------|
| 2026-06-22 | 1189. max ballons | Easy       | Hashing  | https://leetcode.com/problems/maximum-number-of-balloons | count frequnce using a hashmap then divide its frequency by the number of times it appears in given word. The minimum of these values gives the maximum number of word instances that can be formed. Time Complexity: O(n), Space Complexity: O(1)|
|2026-06-23  | 1190. Reverse Substrings Between Each Pair of Parentheses| Medium | Array,Stack,String | https://leetcode.com/problems/reverse-substrings-between-each-pair-of-parentheses | Used Stack with string dataType pushed the string reversed it(did take a hint)|
|2026-06-23  | 33. Search in Rotated Sorted Array| Medium | Binarysearch | https://leetcode.com/problems/search-in-rotated-sorted-array | use binary search to find which side is sorted and does target present in it, complexity O(logn)|
|2026-06-23  | 81. Search in Rotated Sorted Array II| Medium | Binarysearch | https://leetcode.com/problems/search-in-rotated-sorted-array-ii | use binary search to find which side is sorted and does target present in it and should add aditional check for duplicates, complexity O(logn)|
|2026-06-23  | 153. Find Minimum in Rotated Sorted Array| Medium | Binarysearch | https://leetcode.com/problems/find-minimum-in-rotated-sorted-array | use binary search to find which side contains the min, min can be at r as well complexity O(logn)|
|2026-06-24  | 2399. Check Distances Between Same Letters| Easy | Array, String | https://leetcode.com/problems/check-distances-between-same-letters | fillup the array of(26,-1) then check if it matches with given array O(n) and space O(1)|
|2026-06-24  | 869. Reordered Power of 2| Medium | String | https://leetcode.com/problems/reordered-power-of-2 | sort the given number n, loop around 31 powers of 2 sort it and check if it matches with n, O(dlogd) and space O(d) d-number of digits in n|
|2026-06-25  | 1361. Validate Binary Tree Nodes| Medium | Tree, DFS | https://leetcode.com/problems/validate-binary-tree-nodes | Build the parent array. If any node gets two parents, return false. Count the roots (parent[i] == -1). If there isn't exactly one root, return false. If DFS tries to visit an already visited node, return false.
If not all nodes were visited, return false. O(n) and space O(n)|
|2026-06-27  | 3020. Find the Maximum Number of Elements in Subset| Medium | Array, Hashmap | https://leetcode.com/problems/find-the-maximum-number-of-elements-in-subset | when 1 is present then handle is seperately out of loop, if freq is 1 then len gets 1 else it gets +2 for mirroring & check the 1e9 case and if length is even remove the last and check for num*num. complexities: O(n) both|
|2026-06-27  | 3020. Find the Maximum Number of Elements in Subset| Medium | Array, Hashmap | https://leetcode.com/problems/find-the-maximum-number-of-elements-in-subset | when 1 is present then handle is seperately out of loop, if freq is 1 then len gets 1 else it gets +2 for mirroring & check the 1e9 case and if length is even remove the last and check for num*num. complexities: O(n) both|
|2026-06-27  | 1262. Greatest Sum Divisible by Three| Medium | DP | https://leetcode.com/problems/greatest-sum-divisible-by-three | dp[i][rem] = maximum additional sum from index i when the current sum has remainder rem (sum % 3). Either skip the current element or take it, updating the remainder as (rem + nums[i]) % 3, and choose the maximum. complexities: O(n) both|
|2026-06-27  | 91. Decode Ways| Medium | DP | https://leetcode.com/problems/decode-ways | dp[i] stores the number of ways to decode the substring starting from index i.
At each index, decode either 1 digit (if it's not '0') or 2 digits (if the number is between 10 and 26), and add the number of ways from both choices complexities: O(n) both|









**Rule:** add a new row every day you solve something. Don't skip rows. Don't backfill lies.
