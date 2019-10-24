// Structure for grouping item value and weight together
struct Item {
	int value;
	int weight;
};

// Parameters: (Value-Weight array, Number of items, Total capacity of knapsack)
int knapsack01(Item item[], int n, int capacity) {
	int dp[n+1][capacity+1] = {0};
	for(int i = 1; i < n+1; ++i) {
		for(int j = 1; j < capacity+1; ++j) {
			if(item[i-1].weight <= j)
				dp[i][j] = max(item[i-1].value + dp[i-1][j-item[i-1].weight], dp[i-1][j]);
			else
				dp[i][j] = dp[i-1][j];
		}
	}
	return dp[n][capacity];
}