#include <stdio.h>

int main(){
	s,t = stack; //�ŧi���stack��operator
	while(infix�|���ѥk�ӥ�����){
		x = �U�@�Ӧr; 
		if(x�Ooperand){ push(t,x);} 
		else{ //x�Ooperator 
			if(x=="("){	
				while(y==")"){
					y = pop(s);
					if(y!=")"){ push(t,y);}
				}
			}else{ //x�O��Loperator
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
