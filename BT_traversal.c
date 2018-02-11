#include <stdio.h>

typedef struct node {
	int data;
    struct node *Lchild; // points to left child
    struct node *Rchild; // points to right child
} NODE;

typedef struct root {
    NODE *root_pointer;
} ROOT;

void preorder(ROOT *r){
	if(r->root_pointer!=NULL){
		printf("%d\n",r->root_pointer->data);
		preorder(r->root_pointer->Lchild);
		preorder(r->root_pointer->Rchild);
	}
}

void inorder(ROOT *r){
	if(r->root_pointer!=NULL){
		preorder(r->root_pointer->Lchild);
		printf("%d\n",r->root_pointer->data);
		preorder(r->root_pointer->Rchild);
	}
}

void postorder(ROOT *r){
	if(r->root_pointer!=NULL){
		preorder(r->root_pointer->Lchild);
		preorder(r->root_pointer->Rchild);
		printf("%d\n",r->root_pointer->data);
	}
}
