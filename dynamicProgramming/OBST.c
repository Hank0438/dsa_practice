#include <stdio.h>

void OBST(int *p, int *q){//OBST有5個表格: p, q, w, s, root，只有p,q是input 
	int i,j,l,k;
	
	for(i=1; i<=N+1; i++)
		w[i,i-1] = q[i-1];
		s[i,i-1] = q[i-1]; 
	for(l=1; l<=N; l++)
		for(i=1; i<=N-(l-1); i++)
			j= i+l-1; //root的位置 
			w[i,j] = w[i,j-1]+p[j]+q[j];
			for(k=i; k<=j; k++) 
				r = s[i,k-1]+s[k+1,j]+w[i,j];
				if(r < s[i,j])
					s[i,j] = r;
					root[i,j] = k;
	return s[1,N]
}
