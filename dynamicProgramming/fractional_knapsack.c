#include <stdio.h>
#define N 3
#define W 10

int main(){
	int w[N+1];	//�C�Ӫ��~1~N�����q 
	int v[N+1];	//�C�Ӫ��~1~N������ 
	int cp[N+1];//�C�Ӫ��~1~N��CP�� 
	
	int i,j;
	int max_cp = -1;
	for(i=1; i<=N; i++)
		cp[i] = v[i]/w[i];
		if(cp[i] > max_cp)
			max_cp = cp[i];
	
	return max_cp*W;
 
}
