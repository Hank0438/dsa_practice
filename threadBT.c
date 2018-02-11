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
	if(x->Rthread==1){ //�YX���k�޽u��1�A�h�k��l�����ǫ��~�� 
		printf("%c\n",x->Rchild);
	}else{ //�YX���k�޽u��0 
		x = x->Rchild; //�h�q�k��l�X�o 
		while(x->Lthread!=1){ //�P�_���޽u��1�Y�����ǫ��~�� 
			x = x->Lchild; //���޽u��0�h������l�M�� 
		}
		printf("%c\n",x);
	}
}

void inpre(NODE *x){
	//insuc()���k�A�� 
}

void inorder(HEAD *h)){
	temp = NULL; 
	while(temp!=h){
		temp = insuc(h);
		if(temp!=h) printf("%c\n",temp);
	}
}

void insertRight(NODE *x, NODE *t){ //���Jt��x���k��l 
	t->Rchild = x->Rchild; //t���k��l��x�쥻���k��l 
	t->Rthread = x->Rthread;
	t->Lchild = x; //t�����޽u����x�A���t��x�����ǫ��~�� 
	t->Lthread = 1;
	x->Rchild = t; //t��x���k��l 
	x->Rthread = 0;
	if(t->Rthread==0){ //�p�GX���Ӧ��k��l 
		temp = insuc(t); //t�����ǫ��~�̷|�s�b 
		temp->Lchild = t; //��t�����ǫ��~�����ӱN���޽u����t 
	}
}
void insertLeft(NODE *x, NODE *t){
	//���k�ۤ�
	//insuc()�אּinpre() 
}
