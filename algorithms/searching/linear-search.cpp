// Parameters: (Array, Array size, Element to be searched)
int linearSearch(int a[], int n, int key) {
    for(int i = 0; i < n; ++i) {
        if(a[i] == key)
            return i;
    }
    return -1; //if element is not present in array
}
