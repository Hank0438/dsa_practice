#include <stdio.h>

int main(){
	int n,i,j,r,max;
	scanf("%d",&n);
	
	int arr[n];
	
	for(i=0; i<n; i++){
		scanf("%d",&arr[i]);
	}
	
	max = arr[1]; //�s�̤j��,�C�Ӧ^�X�|��s 
	r = arr[1];
	for(i=2; i<n; i++){
		if(r+arr[i] < arr[i]) r = arr[i];
		else r+=arr[i];
		if(r > max) max = r;
	}
	printf("%d",max);
	return 0;
}
