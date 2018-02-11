#include <stdio.h>
#define N 100

void Enqueue(int *queue, int item){
	if(rear==N) printf("Full\n");
	else{
		rear++;
		Q[rear-1] = item;
	}
}

int Dequeue(int *queue){
	if(front==rear) printf("Empty\n");
	else{
		front++;
		item = Q[front-1];
		return item;
	}
}

int isFull(int *queue){
	
}

int isEmpty(int *queue){
	
}

void main(){
	int queue[N];
	int front = 0;
	int rear = 0;
}  
