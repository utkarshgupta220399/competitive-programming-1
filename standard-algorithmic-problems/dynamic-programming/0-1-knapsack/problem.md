## 0/1 Knapsack Problem Statement:

Given weights and values of n items, we need to put these items in a knapsack of capacity W to get the maximum total value in the knapsack.

Unlike [Fractional Knapsack Problem](/standard-algorithmic-problems/greedy/fractional-knapsack/problem.md), we can't break items for maximizing the total value of knapsack i.e. we either take the item complete or don't pick it.

<hr>

### Naive solution -

A naive solution would be to find all subsets from the set of items and look for the ones whose sum of values are less than the capacity of the knapsack. Out of these subsets, choose the subset with the maximum value.

But this is too slow and takes exponential time.

An efficient solution is to use dynamic programming.
See solution [here](solution.cpp)