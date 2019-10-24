## LCS Problem Statement: 

Given two sequences, find the <strong>length of longest subsequence</strong> present in both of them.

A <strong>subsequence</strong> is a sequence that appears in the same relative order, but not necessarily contiguous. For example, “abc”, “abg”, “bdf”, “aeg”, ”acefg”, .. etc are subsequences of “abcdefg”.

<hr>

### Naive solution -

The naive solution for this problem is to generate all subsequences of both given sequences and find the longest matching subsequence.

1. Let X be a sequence of length m and Y a sequence of length n.
2. Check for every subsequence of X whether it is a subsequence of Y, and return the longest common subsequence found.
3. There are 2<sup>m</sup> subsequences of X. Testing sequences whether or not it is a subsequence of Y takes O(n) time.
4. Thus, the naïve algorithm would take O(n.2<sup>m</sup>) time.

[LCS Visualization](https://www.cs.usfca.edu/~galles/visualization/DPLCS.html)

Running time of the algorithm can be improved to a complexity of O(m.n) using dynamic programming.

See solution [here](lcs-table-solution.cpp).
