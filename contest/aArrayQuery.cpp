#include <bits/stdc++.h>

using namespace std;
 
const int maxi = 262144;   
int t[maxi];
int n,s;
     
void initialise(int Node, int S, int E) {
	if(S == E) return;
	int L, R, M;
	L = 2*Node; R = L + 1; M = (S + E)/2;
	initialise(L, S, M);
	initialise(R, M+1, E);
	t[Node] = min(t[L],t[R]);
}

int query(int Node, int S, int E, int i, int j) {
	
    if(S==i && E==j){
    	return t[Node];
    }

    int L, R, M;
    L = 2*Node; R = L + 1; M = (S + E)/2;

    if(j <= M) return query(L, S, M, i, j);
    else if(i > M) return query(R, M+1, E, i, j);
    else return min(query(L, S, M, i, M), query(R, M+1, E, M+1, j));
}


int main(){

    int T,N,q,a,b,ans;
    scanf("%d",&T);
    for(int cases=1; cases<=T; cases++){

    	printf("Case %d:\n",cases);
    	scanf("%d%d",&n,&q);
    	s = pow(2,ceil(log(n)/log(2)));
    	N = 2*s;
    	int loop = s+n;

    	for(int i=s; i<loop; i++)
    		scanf("%d",&t[i]);

    	for(int i=loop; i<N; i++)
    		t[i] = maxi;

	    initialise(1, 0, s-1);

	    while(q--){
	        scanf("%d%d",&a,&b);
	        ans = query(1, s, N-1, a+s-1, b+s-1); 
	        printf("%d\n",ans);
	    }
    }
    return 0;
}
   