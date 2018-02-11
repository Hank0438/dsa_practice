#include <stdio.h>

void DFS(G){ 
	for each vertex u in G  //��ȳ]�w 
		u.color = white;
		u.pi = NULL;
	
	t=0;  //�}�l�ɶ��k�s 
	for each vertex u in G
		if(u.color == white)  //�٨S���X�L���I 
			DFS_visit(G, u);
}

void DFS_visit(G, u){
	t++;
	u.d=t;  //�����즸���X�ɶ� 
	u.color=gray;  //�즸���X��O�� 
	for each vertex v in G.adj[u]
		if(v.color == white)
			v.pi=u;  //����v�qu�L�Ӫ� 
			DFS_visit(G, v);
	
	t++;
	u.f=t;  //�^�{���W�J���ĤG��  
	u.color=black;  
}

int TopologicalSort(G){
	Linkedlist L;
	����DFS(G)�L�{���Nblack���I�[�JL(��X�|�O��J���ϦV); 
	return L;
}
