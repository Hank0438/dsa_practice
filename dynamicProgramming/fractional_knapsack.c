#include <stdio.h>
#define N 3
#define W 10

int main(){
	int w[N+1];	//每個物品1~N的重量 
	int v[N+1];	//每個物品1~N的價值 
	int cp[N+1];//每個物品1~N的CP值 
	
	int i,j;
	int max_cp = -1;
	for(i=1; i<=N; i++)
		cp[i] = v[i]/w[i];
		if(cp[i] > max_cp)
			max_cp = cp[i];
	
	return max_cp*W;
 
}
