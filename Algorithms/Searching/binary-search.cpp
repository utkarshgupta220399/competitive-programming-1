// Parameters: (Array, Start index, End index, Elements to be searched)
int binarySearch(int a[], int l, int r, int key) {
    while(l <= r) {
        int mid = l+(r-l)/2;
        if(a[mid] == key)
            return mid;
        if(a[mid] < key)
            l = mid+1;
        else
            r = mid-1;
    }
    return -1; //if element is not present in array
}

/*
    Note: Binary search works only in sorted lists.
*/
