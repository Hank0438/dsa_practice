#include <stdio.h>

void adjust(int *tree, int i, int n){
	x = tree[i];
	j = 2*i;
	while(j <= n){
		if(j < n) //���k�l�I�s�b 
			if(tree[j] < tree[j+1]) j++; //max{���l�I, �k�l�I} 
		if(x >= tree[j]) break;  //���I�̤j 
		else{
			tree[j/2] = tree[j]; //���W������I 
			j*=2; //���U�@�ӥ��l�I�Ax�̵M�O�̤@�}�l�����I 
		}
	}
	tree[j/2] = x; //x�m�J���T��m 
}

void bottomBuildHeap(int *tree, int n){//tree�O���׬�n��array 
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
