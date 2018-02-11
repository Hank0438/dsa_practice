#include <stdio.h>

typedef struct node {
	int data;
    struct node *Lchild; // points to left child
    struct node *Rchild; // points to right child
} NODE;

typedef struct root {
    NODE *root_pointer;
} ROOT;

void search(ROOT *r, int x){
	if(r->root_pointer!=NULL){
		switch(compare(r->root_pointer->data, x)){
			case "=" :	printf("success\n");
			case ">" :  search(r->root_pointer->Lchild, x);
			case "<" :	search(r->root_pointer->Rchild, x);
		}
	}else{
		printf("fail\n");
	}
}

void searchKth(ROOT *r, int k){
	int x;
	if(r->root_pointer!=NULL){
		lcount = count(r->root_pointer->Lchild);
		if(k = lcount+1) x = r->root_pointer->data;
		else if(k < lcount+1) x = search(r->root_pointer->Lchild, k);
		else x = search(r->root_pointer->Rchild, k-(lcount+1));	
	}
	return x;
};

int deleltex(ROOT *r, int x){
}

int insert(ROOT *r, int x){
}
