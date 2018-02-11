#include <stdio.h>

struct node { 
	int data;
	node *link;
}

int main(){ //ªì­È³]©w 
	node *top;	
}

void push(node *top, int s, int item)
{	
	t = new node;
	t->data = item;
	t->link = top;
	top = t;
}

int pop(node *top, int s){
	if(top==NULL){
		printf("empty\n");
	}
	else{
		t = top;
		item = top->data;
		top = top->link;
		free(t);
		printf("pop_item : %d\n",item);
	}
}
