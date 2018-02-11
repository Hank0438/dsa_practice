#include <stdio.h>
#define N 100

void merge(int arr[N], int p, int q, int m){
	int n1, n2, i, j=0, k=0;
	n1 = m-p+1; //頭 
	n2 = q-m; //尾 
	
	int left[n1]; //左子序列 
	int right[n2]; //右子序列 
	
	for(i=p; i<m+1; i++){
		left[i] = arr[j];
		j++;
	}
	
	for(i=m+1; i<q+1; i++){
		right[i] = arr[k];
		k++;
	}
	
	left[n1] = N;
	right[n2] = N+1;
	i=0;
	j=0;
	for(k=p; k<q+1; k++){  //各拿目前最小且沒比過的來比 
		if(left[i] <= right[j]){
			arr[k] = left[i];
			i++;
			if(i == n1) break;
		}
		else{
			arr[k] = right[j];
			j++;
			if(j == n2) break;
		}
		
	}
	
}

void mergeSort(int arr[N], int p, int q){
	int m;
	
	if(p<q){
		m = (p+q-((p+q)%2) )/2;
		printf("m is %d\n", m);
		mergeSort(arr, p, m);
		mergeSort(arr, m+1, q);
		merge(arr, p, q, m);	
	}
	
}

int main(){
	int n,m,i,j;
	
	scanf("%d",&n);
	
	int arr[n];
	
	for(i=0; i<n; i++){
		scanf("%d",&arr[i]);
	}
	mergeSort(arr, 0, n-1);
	
	for(i=0; i<n; i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	return 0;
}
