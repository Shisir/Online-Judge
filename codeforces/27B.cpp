#include<iostream>
using namespace std;
int a[51][51],w[51];
int main()
{
	int n,x,y;
	scanf("%d",&n);
	for(int i=0;i<(n*(n-1))/2-1;i++)
		scanf("%d%d",&x,&y),a[max(x,y)][min(x,y)]++,w[x]++;
	for(int i=1;i<=n;i++)
		for(int j=1;j<i;j++)
			if(a[i][j]==0)
				if(w[i]>w[j])
					cout<<i<<" "<<j<<endl;
				else cout<<j<<" "<<i;
	return 0;
}