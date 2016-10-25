#include <bits/stdc++.h>

using namespace std;

void BFS(vector< vector<int> > graph, int parent[], int level[], int start)
{
	vector<int>:: iterator it;
	int lev=0,newVerteces;
	level[start]=lev;
	queue<int> vertecesQueue;
	vertecesQueue.push(start);
	while(!vertecesQueue.empty())
	{
		newVerteces=vertecesQueue.front();
		it=graph[newVerteces].begin();
		while(it!=graph[newVerteces].end())
		{
			if(level[*it]==-1)
			{
				level[*it]=level[newVerteces]+1;
				parent[*it]=newVerteces;
				vertecesQueue.push(*it);
			}
			it++;
		}
		vertecesQueue.pop();
	}
}

int main() 
{	
	int vertecs,edge,v1,v2;
	scanf("%d%d",&vertecs,&edge);
	vector< vector<int> > graph(vertecs+1);
	for(int i=0; i<edge; i++) 
	{
		scanf("%d%d",&v1,&v2);
		graph[v1].push_back(v2);
	}
	printf("the graph is:\n");
	for(int i=1; i<graph.size(); i++)
	{
		printf("adjacency[%d] ",i);
		vector<int>::iterator it=graph[i].begin();
		while(it != graph[i].end())	printf("-> %d",*it),it++;
		printf("\n");
	}
	int parent[vertecs+1],level[vertecs+1];
	for(int i=0; i<=vertecs; i++) parent[i]=0,level[i]=-1;

	printf("Enter Starting vertecs:\n");
	scanf("%d",&v1);

	BFS(graph,parent,level,v1);	

	printf("\nLevel and Parent Arrays -\n");
    for (int i = 1; i <= vertecs; ++i) printf("Level of Node %d is %d, Parent is %d\n", i, level[i], parent[i]);
    
	return 0;
}