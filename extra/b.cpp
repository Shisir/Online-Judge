#include <bits/stdc++.h>

using namespace std;

struct P{
	int cost;
	int i,j;
	P(int a, int b, int c){
		cost = a;
		i = b;
		j = c;
	}
};

bool sortFunc(P a, P b){ return a.cost > b.cost; }

vector <P> pairs;
map <int,int> adj;

int main(){
	int n,t;
	scanf("%d",&n);
	int N = 2*n;
	for(int i=2; i<=N; i++)
		for(int j=1; j<i; j++){
			scanf("%d",&t);
			pairs.push_back(P(t,i,j));
		}
	sort(pairs.begin(),pairs.end(),sortFunc);
	int l = pairs.size();
	for(int i=0; i<l; i++)
		if(adj[pairs[i].i]==0 && adj[pairs[i].j]==0){
			adj[pairs[i].i] = pairs[i].j;
			adj[pairs[i].j] = pairs[i].i;
		}
	for(int i=1; i<=N; i++)
		printf("%d ",adj[i]);
	printf("\n");
	return 0;
}