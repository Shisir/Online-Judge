#include <bits/stdc++.h>

using namespace std;

int H1,M1,H2,M2,result;

int solve()
{
  if(H2==0) H2=24;
  if (H1==0) H1 = 24;
  result = (H2*60+M2)-(H1*60+M1);
  if(result<0) return result+24*60;
  return result;
}

int main(void)
{
   //freopen("input.txt","r",stdin);
  // freopen("output.txt","w",stdout);

  while(scanf("%d%d%d%d",&H1,&M1,&H2,&M2))
  {
    if(H1==0 && M1==0 && H2==0 && M2==0) break;
      printf("%d\n",solve());
  }



  return 0;
}
