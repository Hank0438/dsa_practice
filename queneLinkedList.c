#include <stdio.h>

typedef struct node {
	int data;
    struct node *link; // points to next element
} NODE;

typedef struct queue {
    NODE *front, *rear;
} QUEUE;

void Enqueue(QUEUE *q, int y) {
    NODE * t = (NODE *) malloc(sizeof(NODE));
	t->data = y;
	t->link = NULL;
    if (q->front==NULL) q->front = t;
    else
        q->rear->link = t;
    q->rear = t;
}
int Dequeue(QUEUE *q) {
    int item;
	if(q->front==q->rear) printf("Empty\n");
	else{
		NODE *t = q->front;
		item = q->data;
		q->front = q->front->link;
		if(q->front==NULL) rear=NULL;	
	}
    free(t);
    return item;
}
void main() {
    //ªì­È³]©w 
	QUEUE q;
    q->front = q->rear = NULL;
}



