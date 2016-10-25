#include <bits/stdc++.h>

using namespace std;

int main(void)
{
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);

  int v,a;
  while(scanf("%d %d\n",&v,&a)!=EOF)
  {
    printf("%d\n",(v*a)<<1);
  }
  return 0;
}
