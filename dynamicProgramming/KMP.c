#include <stdio.h>

void prefix(int *p){  //�X�G��KMP�����@�Ҥ@�ˮt�O�O���ۤv��ۤv��  
	//p[1...m], b[1...m]
	int m = p.length;  //���r��� 
	int i,j,count=0;
	B[1]=0;
	for(i=2;i<=m;i++){
		while(count>0 && p[i]!=p[count+1])  
			count = B[count]; 
		
		//�i�Jif���i�ౡ�p: 
		//case1: for loop�@�}�l��N��;  	
		//case2: �e���X�Ӧr�������A����o���i�Jwhile loop��᳣̫�S���Acount�ܦ�0
		if(p[i]==p[count+1])  
			count++;
		
		B[i]=count;	
    }
}
//eg:
//i: 1 2 3 4 5 6 7 8 9
//p: a b a a b a a a a
//B: 0 0 1 1 2 3 4 1 1 

void kmp(int *t, int *p){  //�X�G��prefix�����@�Ҥ@�ˮt�O�O���O�H��ۤv�� 
	int n = t.length;
	int m = p.length;  //���r���
	int B = prefix(p); 
	int i,count=0;
	
	for(i=1;i<=n;i++)
		while(count>0 && t[i]!=p[count+1])
			count = B[count];
		
		if(t[i]==p[count+1])
			count++;
		
		if(count==m)  //�p�Gcount==���r����A�h���F 
			printf("BINGO\n");
			count=B[count];	
}
