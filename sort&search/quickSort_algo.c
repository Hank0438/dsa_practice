

void quickSort(int *arr, int l, int u){
	if(l<u){
		q=partition(arr, l, u);
		quickSort(arr, l, q-1);
		quickSort(arr, q+1, u);
	}
}
int partition(int *arr, int l, int u){
	pk=arr[u];
	i=p-1;
	j=p;
	while(j<r){
		j++;
		if(arr[j]<=pk){
			i++;
			swap(arr[i], arr[j]);
		}
	}
	swap(arr[i+1], arr[u]);
	return i+1; 
}
