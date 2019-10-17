// Parameters: (Array, Start index, End index, Element to be searched)
int ternarySearch(int a[], int l, int r, int key) {
	while(l <= r) {
		int mid1 = l+(r-l)/2, mid2 = r-(r-l)/2;
		if(a[mid1] == key)
			return mid1;
		if(a[mid2] == key)
			return mid2;
		if(a[mid1] > key)
			r = mid1-1;
		else if(a[mid2] < key)
			l = mid2+1;
		else {
			l = mid1+1;
			r = mid2-1;
		}
	}
	return -1; //if element is not present in array
}

/*
	Note: Ternary search works only in sorted lists.
*/