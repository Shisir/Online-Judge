#include <bits/stdc++.h>

using namespace std;

int main(void)
{
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);

  long long b,a;
  while(scanf("%lld %lld\n",&a,&b)!=EOF)
  {
    printf("%lld\n",abs(a-b));
  }
  return 0;
}
