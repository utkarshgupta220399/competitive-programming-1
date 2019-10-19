// Parameters: (Array, Array size)
void bubbleSort(int a[], int n) {
	for(int i = 0; i < n-1; ++i) {
		bool swapped = false;
		for(int j = 0; j < n-i-1; ++j) {
			if(a[j] > a[j+1]) {
				swap(a[j], a[j+1]);
				swapped = true;
			}
		}
		if(!swapped)	// No swap in iteration => Array is already sorted
			break;
	}
}