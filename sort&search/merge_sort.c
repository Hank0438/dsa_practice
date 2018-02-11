#include <stdio.h>
#define N 100

void merge(int arr[N], int p, int q, int m){
	int n1, n2, i, j=0, k=0;
	n1 = m-p+1; //�Y 
	n2 = q-m; //�� 
	
	int left[n1]; //���l�ǦC 
	int right[n2]; //�k�l�ǦC 
	
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
	for(k=p; k<q+1; k++){  //�U���ثe�̤p�B�S��L���Ӥ� 
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
