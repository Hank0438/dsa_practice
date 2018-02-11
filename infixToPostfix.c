#include <stdio.h>

int main(){
	s = stack; //宣告一個stack裝operator
	while(infix尚未由左而右掃完){
		x = 下一個字; 
		if(x是operand){ printf(x);} 
		else{ //x是operator 
			if(x==")"){	
				while(y=="("){
					y = pop(s);
					if(y!="("){ printf(y);}
				}
			}else{ //x是其他operator
				if(x > s->top){ push(s,x);}
				else{
					while(x > s->top){
						y = pop(s);
						printf(y);
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
}
