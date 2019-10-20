// Parameters: (Array, Start index, Mid index, End index)
void merge(int a[], int l, int mid, int r) {
	int size1 = mid-l+1, size2 = r-mid;
	// Temporary arrays
	int left[size1], right[size2];
	for(int i = 0; i < size1; ++i)
		left[i] = a[l+i];
	for(int i = 0; i < size2; ++i)
		right[i] = a[mid+1+i];
	// Copying elements from temporary arrays to original array
	int i = 0, j = 0, k = l;
	while(i < size1 && j < size2) {
		if(left[i] <= right[j]) {
			a[k] = left[i];
			++i;
		}
		else {
			a[k] = right[j];
			++j;
		}
		++k;
	}
	while(i < size1) {
		a[k] = left[i];
		++i;
        ++k;
	}
	while(j < size2) {
		a[k] = right[j];
		++j;
        ++k;
	}
}

// Parameters: (Array, Start index, End index)
void mergeSort(int a[], int l, int r) {
	if(l < r) {
		int mid = l+(r-l)/2;
		mergeSort(a, l, mid);	// Divide array into 2 halves - left half
		mergeSort(a, mid+1, r);	// Divide array into 2 halves - right half
		merge(a, l, mid, r);	// Merge the 2 parts into one
	}
}