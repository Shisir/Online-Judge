#include <bits/stdc++.h>

using namespace std;

int a,b;

int main(void)
{
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  int test;

  while (scanf("%d\n",&test))
  {
    if(test==0) break;
    int cnt1=0,cnt2=0;
    for (int i = 0; i < test; i++)
    {
          scanf("%d %d\n",&a,&b);
          if(a==b) continue;
          (a>b)?cnt1++:cnt2++;
    }
    printf("%d %d\n",cnt1,cnt2);
  }
  return 0;
}
