#include <stdio.h>
#define N 100

void Enqueue(int *queue, int item){
	if(rear==front && tag==1){
		printf("Full\n");	
	}
	
	else{
		rear = (rear+1)%n; 
		Q[rear] = item;
		if(rear==front) tag=1;
	}
}

int Dequeue(int *queue){
	if(front==rear && tag==0) printf("Empty\n");
	else{
		front = (front+1)%n;
		item = Q[front];
		if(front==rear) tag=0;
		return item;
	}
}

int isFull(int *queue){
	
}

int isEmpty(int *queue){
	
}

void main(){
	int queue[N];//0 ~ (N-1)
	int front = 0;
	int rear = 0;
	int tag = 0;
}  
