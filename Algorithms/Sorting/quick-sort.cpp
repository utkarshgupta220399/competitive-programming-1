// Parameters: (Array, Start index, End index)
int partition(int a[], int l, int r) {
	int pi = l;
	int pivot = a[r];	//choose last element as pivot
	for(int i = l; i < r; ++i) {
		if(a[i] < pivot) {
			swap(a[i], a[pi]);
			++pi;
		}
	}
    swap(a[pi], a[r]);
	return pi;
}

// Parameters: (Array, Start index, End index)
void quickSort(int a[], int l, int r) {
	if(l < r) {
		int pi = partition(a, l, r);	//find partition index
		quickSort(a, l, pi-1);
		quickSort(a, pi+1, r);
	}
}

/*
	Call quickSort() to sort the list
*/