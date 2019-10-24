## LCS Problem Statement: 

Given two sequences, find the <strong>length of longest substring</strong> present in both of them.

A <strong>substring</strong> is a sequence that appears in the same relative order, but necessarily contiguous. For example, “abc”, “abcd”, “def”, “fg”, ”a”, .. etc are substings of “abcdefg”.

<hr>

### Naive solution -

The naive solution for this problem is to generate all substrings of both given sequences and find the longest matching substring.

1. Let X be a sequence of length m and Y a sequence of length n.
2. Check for every substring of X whether it is a substring of Y, and return the longest common substring found.
3. There are Σn+1 substrings of X. Testing sequences whether or not it is a substring of Y takes O(n) time.
4. Thus, the naïve algorithm would take O(m.n<sup>2</sup>) time.


Running time of the algorithm can be improved to a complexity of O(m.n) using dynamic programming.

See solution [here](lc-string-table-solution.cpp).
