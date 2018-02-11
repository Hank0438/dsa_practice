#include <stdio.h>

typedef struct node {
	int data;
    struct node *Lchild; // points to left child
    struct node *Rchild; // points to right child
} NODE;

typedef struct root {
    NODE *root_pointer;
} ROOT;

void copy(ROOT *r){
	new(*t);
	if(r->root_pointer==NULL) t->root_pointer=NULL;
	else{
		new(*head);
		t->root_pointer = head;
		head->data = r->root_pointer->data;
		head->Lchild = copy(r->root_pointer->Lchild);
		head->Rchild = copy(r->root_pointer->Rchild);
			
	} 
}

int equal(ROOT *s, ROOT *t){
	int res = 0;
	if(s->root_pointer==NULL && t->root_pointer==NULL) res = 1;
	else if(s->root_pointer!=NULL && t->root_pointer!=NULL)
		if(s->root_pointer->data==t->root_pointer->data)
			if(equal(s->root_pointer->Lchild,t->root_pointer->Lchild)) 
				res = equal(s->root_pointer->Rchild,t->root_pointer->Rchild);
	return res;
	
};

int height(ROOT *r){
	if(r->root_pointer==NULL) return 0;
	else return max(count(r->root_pointer->Lchild),count(r->root_pointer->Rchild))+1;
};

void count(ROOT *r){
	if(r->root_pointer==NULL) return 0;
	else return count(r->root_pointer->Lchild) + count(r->root_pointer->Rchild) +1;
};

void swap(ROOT *r){
	if(r->root_pointer!=NULL){
		swap(r->root_pointer->Lchild);
		swap(r->root_pointer->Rchild);
		temp = r->root_pointer->Lchild;
		r->root_pointer->Lchild = r->root_pointer->Rchild;
		r->root_pointer->Rchild = temp;
	}
};

void expBTeval(ROOT *r){
	if(r->root_pointer!=NULL){{
		expBTeval(r->root_pointer->Lchild);
		expBTeval(r->root_pointer->Rchild);
		switch(r->root_pointer->data){
			case "+" : 
				r->root_pointer->res = r->root_pointer->Lchild->res + r->root_pointer->Rchild->res; 
			case "-" : 
				r->root_pointer->res = r->root_pointer->Lchild->res - r->root_pointer->Rchild->res; 
			case "*" : 
				r->root_pointer->res = r->root_pointer->Lchild->res * r->root_pointer->Rchild->res; 
			case "/" : 
				r->root_pointer->res = r->root_pointer->Lchild->res / r->root_pointer->Rchild->res;
			case number : 
				r->root_pointer->res = number;  
		}
	}
}
