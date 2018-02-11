#include <stdio.h>

int main(){
	s,t = stack; //宣告兩個stack裝operator
	while(infix尚未由右而左掃完){
		x = 下一個字; 
		if(x是operand){ push(t,x);} 
		else{ //x是operator 
			if(x=="("){	
				while(y==")"){
					y = pop(s);
					if(y!=")"){ push(t,y);}
				}
			}else{ //x是其他operator
				if(x > s->top){ push(s,x);}
				else{
					while(x > s->top){
						y = pop(s);
						push(t,y);
					}
					push(s,x);		
				}
			}
		} 
	}
	while(isNotEmpty(s)){
		y = pop(s);
		printf(y);
	}
	while(isNotEmpty(t)){
		y = pop(t);
		printf(y);
	}

}
