## Problem: Valid Anagram (Easy)

**Link:** LeetCode Valid Anagram

### Approach

The program uses a **character frequency counting** technique.

- Create an integer array `count[26]` to store the frequency of each lowercase letter.
- For every character in string `s`, increase its corresponding count.
- For every character in string `t`, decrease its corresponding count.
- Finally, check all 26 positions.
- If all counts are `0`, both strings contain the same characters with the same frequencies, so they are anagrams.
- Otherwise, return `false`.

### Complexity

- **Time:** O(n + m)
- **Space:** O(1)

Here, `n` is the length of `s` and `m` is the length of `t`. The space is O(1) because the frequency array always contains only 26 elements.

### Notes

**Edge Case:** If the strings contain different characters or different numbers of the same character, such as `"rat"` and `"car"`, the program returns `false`.

**What I learned:** I learned how a fixed-size frequency array can be used to efficiently check whether two strings are anagrams without sorting the strings.