#include <bits/stdc++.h>

using namespace std;

int main(void)
{
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);

  int test,ans;
  double n;
  scanf("%d\n",&test );
  for (int i = 0; i < test; i++)
  {
      scanf("%lf\n",&n);
      ans=0;
      while(n>1)
      {
        n*=.5;
        ans++;
      }
      printf("%d dias\n",ans);
  }
  return 0;
}
