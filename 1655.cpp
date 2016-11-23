#include <bits/stdc++.h>

using namespace std;


int n, m;

double graph[101][101];

void floyd_warshall ()
{
 	for (int k = 0; k < n; ++k)
 		for (int i = 0; i < n; ++i)
 			for (int j = 0; j < n; ++j)
 				graph[i][j] = max(graph[i][j], graph[i][k]*graph[k][j]);
}

int main(){
	while(1)
	{
		scanf("%d", &n);
		if(!n) break;
		scanf("%d", &m);
		memset(graph, 0, sizeof graph);
		for(int i = 0; i < n; ++i) graph[i][i] = 1;
		for(int i = 0; i < m; ++i)
		{
			int a, b, c;
			scanf("%d%d%d", &a, &b, &c);
			a--; b--;
			graph[a][b] = c*0.01;
			graph[b][a] = c*0.01;
		}
		floyd_warshall();
		printf("%.6lf percent\n", graph[0][n-1]*100);
	}
}
