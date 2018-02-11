#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node {
	int data;
    struct node *link; // points to next element
} NODE;

typedef struct queue {
    NODE *rear;
} QUEUE;

void Enqueue(QUEUE *q, int y) {
    NODE * t = (NODE *) malloc(sizeof(NODE));
	t->data = y;
    if (q->rear==NULL) 
		t->link = t;	
    else{
    	t->link = q->rear->link;
        q->rear->link = t;	
	}
    q->rear = t;
}
int Dequeue(QUEUE *q) {
    int item;
	if(q->rear==NULL) printf("Empty\n");
	else{
		if(q->rear->link==q->rear){
			NODE *t = q->rear;
			item = q->rear->data;
			q->rear = NULL;
		}
		else{
			NODE *t = q->rear->link;
			item = q->rear->link->data;
			q->rear->link = q->rear->link->link;
		}
	}
    free(t);
    return item;
}
void main() {
    //ªì­È³]©w 
	QUEUE q;
    q->front = q->rear = NULL;
}



