#include <bits/stdc++.h>

using namespace std;

#define INF 0x3F3F3F3F

const int N = 101;

int n, m;
int graph[N][N];



void floyd_warshall ()
{
 	for (int k = 0; k < n; ++k)
 		for (int i = 0; i < n; ++i)
 			for (int j = 0; j < n; ++j)
 				graph[i][j] = min(graph[i][j], max(graph[i][k],graph[k][j]));
}

int main(){
	for(int k = 1;;k++)
	{
		scanf("%d%d", &n, &m);
		if(n+m == 0) break;
		int a, b, c; 
		memset(graph, INF, sizeof graph);
		for(int i = 0; i  < n; ++i)
			graph[i][i] = 0;
		for(int i = 0; i < m; ++i)
		{
			scanf("%d%d%d", &a, &b, &c);
			a--, b--;
			graph[a][b] = c;
			graph[b][a] = c;
		}
		int querys;
		scanf("%d", &querys);
		floyd_warshall();
		for(int i = 1; i <= querys; ++i)
		{
			scanf("%d%d", &a, &b);
			if(a==b) 
				printf("0\n");
			else
				printf("%d\n", graph[a-1][b-1]);
		}
	}
	return 0;
}