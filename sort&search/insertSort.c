

void insert(int *arr, int i){
	//目前arr中的0 ~ i-1是排好的 
	r = arr[i];
	while(r<arr[i-1]){
		arr[i]=arr[i-1];
		i--;
	}
	a[i]=r;
}
void sort(int *arr, int n){
	arr[0]=-inf;
	for(i=0; i<=n; i++)
		insert(arr, i)
}
