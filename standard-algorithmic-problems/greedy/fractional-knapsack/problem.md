## Fractional Knapsack Problem Statement: 

Given weights and values of n items, we need to put these items in a knapsack of capacity W to get the maximum total value in the knapsack.

In Fractional Knapsack, we can break items for maximizing the total value of knapsack.

<hr>

### Naive solution -

A brute-force solution would be to try all possible subsets with all different fraction but that will be too much time taking.

An efficient solution is to use Greedy approach as follows - 

1. Calculate the ratio value/weight for each item.
2. Sort the item on basis of this ratio in descending order.
3. Take the item with the highest ratio and add them until we can’t add the next item as a whole and at the end add the next item as much as we can.