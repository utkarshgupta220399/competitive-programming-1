// Parameters: (First string, Second string)
int lcs(string s1, string s2) {
	int row = s1.length();
	int col = s2.length();
	int table[row+1][col+1] = {0};
	for(int i = 1; i < row+1; ++i) {
		for(int j = 1; j < col+1; ++j) {
			if(s1[i-1] == s2[j-1])
				table[i][j] = table[i-1][j-1]+1;	// if characters are same, then diagonal element + 1
			else
				table[i][j] = max(table[i-1][j], table[i][j-1]);	// if characters are not same, then max(element at left, element at top)
		}
	}
	return table[row][col]; 
}