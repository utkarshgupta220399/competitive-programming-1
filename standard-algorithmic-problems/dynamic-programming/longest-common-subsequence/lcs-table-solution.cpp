// Parameters: (First string, Second string)
int longestCommonSubsequence(string s1, string s2) {
	int rows = s1.length();
	int cols = s2.length();
	int table[rows+1][cols+1] = {0};
	for(int i = 1; i < rows+1; ++i) {
		for(int j = 1; j < cols+1; ++j) {
			if(s1[i-1] == s2[j-1])
				table[i][j] = table[i-1][j-1]+1;	// if characters are same, then diagonal element + 1
			else
				table[i][j] = max(table[i-1][j], table[i][j-1]);	// if characters are not same, then max(element at left, element at top)
		}
	}
	return table[rows][cols]; 
}