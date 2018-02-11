#include <stdio.h> 

void main(){
	//ªì­È³]©w 
	int type;
	int total;
	scanf("%d",&type);
	scanf("%d",&total);
	int arr[type];
	int count[total+1];
	
	int i,j,k,l;
	for(i=0; i<type; i++)
		scanf("%d",&arr[i]);
	for(i=0; i<=total; i++)
		count[i]=0;
	
	count[0]=1;
	for(i=0; i<type; i++)
		for(j=arr[i]; j<=total; j++)
			count[j] += count[j-arr[i]];
			
	for(i=0; i<=total; i++)
		printf("%d\n",count[i]);
		
	//printf("%d\n",count[total-1]);
}
