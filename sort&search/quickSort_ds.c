

void quickSort(int *arr, int l, int u){
	if(l<u){
		int i=l;
		int pk=arr[l];
		int j=u+1;
		do{
			do
				i++;
			while(arr[i]>=pk)
			do
				j--;
			while(arr[k]<=pk)
			if(i<j)
				swap(arr[i],arr[j])	
		}
		while(i>=j)
		swap(arr[l], arr[j]);
		quickSort(arr,l, j-1);
		quickSort(arr, j+1, u);
	}
}


