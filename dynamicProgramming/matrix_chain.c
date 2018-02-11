#include <stdio.h>

void matrixChain(int *p){
	int s[N,N],c[N,N];
	int i,j,k,l;
	for(i=1; i<=N; i++)
		s[i,i]=0;
	for(l=2; l<=N; l++)
		for(i=1; i<=N-(l-1); i++)
			j=i+l-1;
			for(k=i; k<=j; k++)
				r = s[i,k] +s[k+1,j] +p[i]*p[k]*p[j];
				if(r < s[i,j])
					s[i,j] = r;
					c[i,j] = k;
	return s[1,N];
}
