
void bubbleSort(int *arr, int n){
	for(i=1; i<n; i++){
		f=0;
		for(j=1; j<n-i; j++){
			if(arr[j]>arr[j+1]){
				swap(arr[j],arr[j+1]);
				f=1;	
			}
		}	
		if(f==0) break;
	}
}
