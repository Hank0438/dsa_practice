#include <stdio.h>

typedef struct node {
	int data;
	int Lthread;
	int Rthread;
    struct node *Lchild; // points to left child
    struct node *Rchild; // points to right child
} NODE;

typedef struct head {
    int data = NULL;
	int Lthread = 0;
	int Rthread = 0;
    struct node *Lchild; 
    struct node *Rchild = head;
} HEAD;

void insuc(NODE *x){ 
	if(x->Rthread==1){ //若X的右引線為1，則右兒子為中序後繼者 
		printf("%c\n",x->Rchild);
	}else{ //若X的右引線為0 
		x = x->Rchild; //則從右兒子出發 
		while(x->Lthread!=1){ //判斷左引線為1即為中序後繼者 
			x = x->Lchild; //左引線為0則往左兒子尋找 
		}
		printf("%c\n",x);
	}
}

void inpre(NODE *x){
	//insuc()左右顛倒 
}

void inorder(HEAD *h)){
	temp = NULL; 
	while(temp!=h){
		temp = insuc(h);
		if(temp!=h) printf("%c\n",temp);
	}
}

void insertRight(NODE *x, NODE *t){ //插入t為x的右兒子 
	t->Rchild = x->Rchild; //t的右兒子為x原本的右兒子 
	t->Rthread = x->Rthread;
	t->Lchild = x; //t的左引線指到x，表示t為x的中序後繼者 
	t->Lthread = 1;
	x->Rchild = t; //t為x的右兒子 
	x->Rthread = 0;
	if(t->Rthread==0){ //如果X本來有右兒子 
		temp = insuc(t); //t的中序後繼者會存在 
		temp->Lchild = t; //那t的中序後繼者應該將左引線指到t 
	}
}
void insertLeft(NODE *x, NODE *t){
	//左右相反
	//insuc()改為inpre() 
}
