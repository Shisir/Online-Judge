#include <bits/stdc++.h>

using namespace std;

int main(void)
{
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);

  int test,n;
  scanf("%d\n",&test);
  for (int i = 0; i < test; i++)
  {
      scanf("%d\n",&n);
      bool f=true;
      if(n<2)  printf("Not Prime\n");
      else if(n==2) printf("Prime\n");
      else if(n%2==0)  printf("Not Prime\n");
      else
      {
        for(int j = 3, max = sqrt(n); j <= max; j += 2)
         {
           if(n % j == 0)
           {
             f=false;
             break;
           }
         }
      }
      if(f)printf("Prime\n");
      else if(!f) printf("Not Prime\n" );
  }
  return 0;
}
