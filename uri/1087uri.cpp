#include <bits/stdc++.h>

using namespace std;

int x1,Y1,x2,y2;

int solve()
{
  if(x1==x2 && Y1==y2) return 0;
  if(x1==x2 || Y1==y2 || fabs(x1-x2)==fabs(Y1-y2)) return 1;
  return 2;
}

int main(void)
{
//  freopen("input.txt","r",stdin);
//  freopen("output.txt","w",stdout);

  while(scanf("%d%d%d%d",&x1,&Y1,&x2,&y2))
  {
    if(x1==0 && Y1==0 && x2==0 && y2==0) break;
      printf("%d\n",solve());
  }



  return 0;
}
