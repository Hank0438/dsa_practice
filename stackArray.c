#include <stdio.h>
#define N 100

int main(){ //ªì­È³]©w  
	int s[N];
	int top = 0;
}

void push(int s, int item)
{
	if(top==N){
		printf("full\n");
	}
	else{
		top++;
		s[top] = item;
	}
}

int pop(int s){
	if(top==0){
		printf("empty\n");
	}
	else{
		item = s[top];
		top--;
		printf("pop_item : %d\n",item);
	}
}
