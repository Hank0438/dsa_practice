#include <stdio.h>
#define N 3
#define W 10

int main(){
	int w[N+1];	//�C�Ӫ��~1~N�����q 
	int v[N+1];	//�C�Ӫ��~1~N������ 
	int s[N+1,W+1];	//table
	
	int i,j,k;
	for(i=0; i<N; i++)
		for(j=0; i<W; j++)
			s[i,j] = 0;
	
	for(j=1; j<=W; j++)
		for(i=1; i<=N; i++){
			//���~�ӭ��F�A���� 
			if(w[i] > j) 
				s[i,j] = s[i-1,j];
			//�񪫫~��A�`���ȬO�_���� 
			else{
				if(s[i-1,j-w[i]]+v[i] > s[i-1,j]) //�񪫫~�`���Ȧ����ɪ����p 
					s[i,j] = s[i-1,j-w[i]]+v[i];		
			}
		}
	return s[N,W];
	
}
