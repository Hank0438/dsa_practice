

void insert(int *arr, int i){
	//�ثearr����0 ~ i-1�O�Ʀn�� 
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
