#include <stdio.h>

int main(){
	s = stack; //�ŧi�@��stack��operator
	while(infix�|���ѥ��ӥk����){
		x = �U�@�Ӧr; 
		if(x�Ooperand){ printf(x);} 
		else{ //x�Ooperator 
			if(x==")"){	
				while(y=="("){
					y = pop(s);
					if(y!="("){ printf(y);}
				}
			}else{ //x�O��Loperator
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
