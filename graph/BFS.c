#include <stdio.h>

int BFS(G,s){
	//��ȳ]�w
	for each v in G
		v.d=inf;
		v.color=white;
		v.pi=NULL;
	s.d=0;
	s.color=gray;
	s.pi=NULL;
	Queue Q;
	Enqueue(Q, s);
	while Q is nonempty
		a=Dequeue(Q);
		for each v in G.adj(a) //�F�~����iQueue 
			if(v.color==white)
				Enqueue(Q, v);
				v.d=a.d+1; //unweight graph��BFS�i�H�Ψӧ�single source shortest path 
				v.color=gray;
				v.pi=a;
		a.color=black;
}


int tree_diameter(T){ //��𤤦��̻��Z�������I 
	����G���@�Is;
	BFS(T, s);
	���@�Iu�O�㦳�̤j��d��;
	BFS(T, u);
	���@�Iv�O�㦳�̤j��d��, v.d��T���̻��Z��, ���I���O��u,v; 
}
