#include <bits/stdc++.h>

using namespace std;

int main(void)
{
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);

  int a,b,c,i=0;

  while (scanf("%d%d%d\n",&a,&b,&c)!=EOF)
  {
      i++;
      if(i==4) break;
      if(a==b && b==c) printf("*\n");
      else if(a==b) printf("C\n");
      else if(a==c) printf("B\n");
      else printf("A\n");
  }
  return 0;
}
