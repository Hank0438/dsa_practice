#include <stdio.h>

void adjust(int *tree, int i, int n){
	x = tree[i];
	j = 2*i;
	while(j <= n){
		if(j < n) //有右子點存在 
			if(tree[j] < tree[j+1]) j++; //max{左子點, 右子點} 
		if(x >= tree[j]) break;  //父點最大 
		else{
			tree[j/2] = tree[j]; //往上移到父點 
			j*=2; //往下一個左子點，x依然是最一開始的父點 
		}
	}
	tree[j/2] = x; //x置入正確位置 
}

void bottomBuildHeap(int *tree, int n){//tree是長度為n的array 
	for(i=n/2; i>=1; i--){
		adjust(tree, i, n);
	} 
}

void deleteMax(int *tree, int n){
	x = tree[1];
	tree[1] = tree[n];
	adjust(tree, 1, n-1);
}

void insert(){
}

void findMax(){
}
