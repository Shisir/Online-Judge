#include <bits/stdc++.h>

using namespace std;

char line;
char ans[4]={'N','L','S','O'};

int main(void)
{
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  int test;

  while (scanf("%d\n",&test))
  {
    if(test==0) break;
    int cnt=0;
    for (int i = 0; i < test; i++)
    {
          scanf("%c",&line );

          if(line=='D') cnt=(cnt+1)%4;
          else
          {
              if(cnt==0) cnt=3;
              else cnt--;
          }

    }
    printf("%c\n",ans[cnt]);
  }
  return 0;
}
