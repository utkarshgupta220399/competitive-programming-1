// Parameters: (Set of numbers, Set size, Target sum)
bool subsetSum(int set[], int n, int target) {
	bool dp[n+1][target+1];
	for(int i = 0; i < n+1; ++i) {
		for(int j = 0; j < target+1; ++j) {
			if(i == 0)
				dp[i][j] = true;
			else {
				if(set[i-1] > j)
					dp[i][j] = dp[i-1][j];
				else
					dp[i][j] = dp[i-1][j] || dp[i-1][j-set[i-1]];
			}
		}
	}
	return dp[n][target];
}