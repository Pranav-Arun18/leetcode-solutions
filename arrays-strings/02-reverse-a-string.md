## Problem: Reverse a String (Easy)

**Link:** LeetCode Reverse a String

### Approach

The program uses the **two-pointer technique** to reverse the string in-place.

- Use two pointers: `left` starts at the beginning of the string and `right` starts at the end.
- Swap the characters at `left` and `right`.
- Move `left` one position forward and `right` one position backward.
- Continue until `left` and `right` meet or cross.
- Since the string is modified directly, no additional array is required.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

**Edge Case:** A string containing only one character, such as `"a"`, remains unchanged after reversal.

**What I learned:** I learned how to reverse a string in-place using two pointers (`left` and `right`), which takes **O(n) time** and **O(1) extra space**.