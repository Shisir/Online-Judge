#include <bits/stdc++.h>

using namespace std;

int solve(int n, int k)
{
  if(n==1) return 1;
  return (solve(n-1,k)+k-1)%n+1;
}
int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif

  int test,n,k;
  scanf("%d\n",&test);

  for (int i = 1; i <= test; i++)
  {
    scanf("%d %d\n",&n, &k);
    printf("Case %d: %d\n",i,solve(n,k));
  }

  return 0;
}
