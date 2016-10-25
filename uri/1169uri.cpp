#include <bits/stdc++.h>

using namespace std;

int main(void)
{
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  unsigned long long ans;
  int test,n;
  scanf("%d\n",&test);

  for (int  i = 0; i < test; i++)
  {
      scanf("%d\n",&n);
      ans = pow(2,n)/12000;
      printf("%lld kg\n",ans);
  }
  return 0;
}
