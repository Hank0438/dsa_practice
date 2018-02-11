#include <stdio.h>

void push(stack s, int item){
	Enqueue(q, item);
}

int pop(stack s){
	if(isEmpty(q)) printf("stack is empty\n");
	else{
		int i;
		for(i=1;i<length(q);i++){
			x = Dequeue(q);
			Enqueue(q,x);	
		}
		item = Dequeue(q);
		return item;
	}
}

void main(){
	Queue q;
	stack s;
}
