#include <stdio.h>

void prefix(int *p){  //幾乎跟KMP長的一模一樣差別是拿自己跟自己比  
	//p[1...m], b[1...m]
	int m = p.length;  //比對字串長 
	int i,j,count=0;
	B[1]=0;
	for(i=2;i<=m;i++){
		while(count>0 && p[i]!=p[count+1])  
			count = B[count]; 
		
		//進入if的可能情況: 
		//case1: for loop一開始比就中;  	
		//case2: 前面幾個字都有中，直到這次進入while loop到最後都沒中，count變成0
		if(p[i]==p[count+1])  
			count++;
		
		B[i]=count;	
    }
}
//eg:
//i: 1 2 3 4 5 6 7 8 9
//p: a b a a b a a a a
//B: 0 0 1 1 2 3 4 1 1 

void kmp(int *t, int *p){  //幾乎跟prefix長的一模一樣差別是拿別人跟自己比 
	int n = t.length;
	int m = p.length;  //比對字串長
	int B = prefix(p); 
	int i,count=0;
	
	for(i=1;i<=n;i++)
		while(count>0 && t[i]!=p[count+1])
			count = B[count];
		
		if(t[i]==p[count+1])
			count++;
		
		if(count==m)  //如果count==比對字串長，則找到了 
			printf("BINGO\n");
			count=B[count];	
}
