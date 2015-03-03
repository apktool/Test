#include<stdio.h>
#include<stdlib.h>
#define N 100
typedef struct node{
	int adjvex;
	struct node *next;
}Edge;

typedef struct vnode{
	char vertex;
	Edge *first;
}Vertex;

typedef Vertex AdjList[N];
typedef struct{
	AdjList adj;
	int n, e;
}Algraph;

void createALG(Algraph *g){
	int i, j, k;
	Edge *s = NULL;
	printf_s("Input number of vertex and edge: ");
	scanf_s("%d%d", &g->n, &g->e);
	for (i = 0; i < g->n; i++){
		scanf_s("%c", &(g->adj[i].vertex));
		g->adj[i].first = NULL;
	}
	printf_s("Input data of edge: ");
	for (k = 0; k  < g->e; k ++){
		scanf_s("%d%d", &i, &j);
		s = (Edge *)malloc(sizeof(Edge));
		s->adjvex = j;
		s->next = g->adj[i].first;
		g->adj[i].first = s;
	}
}

int main(int argc, char* argv[])
{
	Algraph g;
	system("CLS");
	createALG(&g);
}