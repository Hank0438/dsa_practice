

int binarySearch(int *arr, int l, int u, int k){
	if(l<u){
		m=(l+u)/2;
		switch(compare(A[m], k)){
			case "<": return binarySearch(arr, l, m-1, k);
			case ">": return binarySearch(arr, m+1, u, k);
			case "==": return m;
		}
	}
	return 0;
}
