#include <stdio.h>

int BFS(G,s){
	//砞﹚
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
		for each v in G.adj(a) //綟﹡常秈Queue 
			if(v.color==white)
				Enqueue(Q, v);
				v.d=a.d+1; //unweight graphいBFSノㄓтsingle source shortest path 
				v.color=gray;
				v.pi=a;
		a.color=black;
}


int tree_diameter(T){ //т攫いΤ程环禯瞒ㄢ翴 
	ヴGい翴s;
	BFS(T, s);
	翴u琌ㄣΤ程d;
	BFS(T, u);
	翴v琌ㄣΤ程d, v.dTい程环禯瞒, ㄢ翴だu,v; 
}
