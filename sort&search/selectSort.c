void selectSort(int *arr, int n){
	for(i=0; i<n; i++){
		min = i; //–常┕玡挡程穦材i竚 
		for(j=i+1, j<n; j++)
			if(arr[j]<arr[i])  //眖材i+1ゑnゑ赣程玥传琌挡玡穐竚 
				min=j;
		if(min!=i)  //硂程Τ传杠 
			swap(arr[i], arr[min]);
	}
}
