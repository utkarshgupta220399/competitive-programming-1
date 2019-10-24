## Subset-Sum Problem Statement:

Given a set of non-negative integers and a target value, determine if there is a subset of the given set with sum equal to given target.

This is an NP-complete problem.

### Naive-Solution -

We can use recursion to find subsets of the set but this is too costly (exponential time complexity), since there can be total 2<sup>n</sup> subsets of a given set.

However we can use dynamic programming to solve the problem in pseudo-polynomial time.
See solution [here](solution.cpp)