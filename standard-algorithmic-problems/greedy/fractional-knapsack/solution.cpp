// Structure for grouping item value and weight together
struct Item {
	int value;
	int weight;
};

// Comparison function for sorting
bool compare(struct Item a, struct Item b) {
	double x = (double)a.value/a.weight;
	double y = (double)b.value/b.weight;
	return x>y;
}

// Parameters: (Value-Weight array, Number of items, Total capacity of Knapsack)
double fractionalKnapsack(Item items[], int n, int capacity) {
	sort(items, items+n, compare);	// Sort array in order of descreasing ratio of value/weight
	int filledKnapsack = 0;
	double answer = 0;
	for(int i = 0; i < n; ++i) {
		if(filledKnapsack + items[i].weight <= capacity) {
			filledKnapsack += items[i].weight;
			answer += items[i].value;
		}
		else {
			int freeKnapsack = capacity-filledKnapsack;
			answer += freeKnapsack*(items[i].value/items[i].weight);
			break;
		}
	}
	return answer;
}