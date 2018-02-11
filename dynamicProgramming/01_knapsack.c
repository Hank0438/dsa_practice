#include <stdio.h>
#define N 3
#define W 10

int main(){
	int w[N+1];	//每個物品1~N的重量 
	int v[N+1];	//每個物品1~N的價值 
	int s[N+1,W+1];	//table
	
	int i,j,k;
	for(i=0; i<N; i++)
		for(j=0; i<W; j++)
			s[i,j] = 0;
	
	for(j=1; j<=W; j++)
		for(i=1; i<=N; i++){
			//物品太重了，不取 
			if(w[i] > j) 
				s[i,j] = s[i-1,j];
			//放物品後，總價值是否提升 
			else{
				if(s[i-1,j-w[i]]+v[i] > s[i-1,j]) //放物品總價值有提升的狀況 
					s[i,j] = s[i-1,j-w[i]]+v[i];		
			}
		}
	return s[N,W];
	
}
