#include <stdio.h>

void DFS(G){ 
	for each vertex u in G  //初值設定 
		u.color = white;
		u.pi = NULL;
	
	t=0;  //開始時間歸零 
	for each vertex u in G
		if(u.color == white)  //還沒拜訪過的點 
			DFS_visit(G, u);
}

void DFS_visit(G, u){
	t++;
	u.d=t;  //紀錄初次拜訪時間 
	u.color=gray;  //初次拜訪後記錄 
	for each vertex v in G.adj[u]
		if(v.color == white)
			v.pi=u;  //紀錄v從u過來的 
			DFS_visit(G, v);
	
	t++;
	u.f=t;  //回程路上遇見第二次  
	u.color=black;  
}

int TopologicalSort(G){
	Linkedlist L;
	執行DFS(G)過程中將black的點加入L(輸出會是輸入的反向); 
	return L;
}
