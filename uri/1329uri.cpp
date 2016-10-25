#include <bits/stdc++.h>

using namespace std;

int a;

int main(void)
{
  // freopen("input.txt","r",stdin);
  // freopen("output.txt","w",stdout);
  int test;

  while (scanf("%d\n",&test))
  {
    if(test==0) break;
    int cnt1=0,cnt2=0;
    for (int i = 0; i < test; i++)
    {
          scanf("%d ",&a);
          (a==0)?cnt1++:cnt2++;
    }
    printf("Mary won %d times and John won %d times\n",cnt1,cnt2);
  }
  return 0;
}
