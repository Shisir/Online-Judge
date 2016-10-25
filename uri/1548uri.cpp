#include <bits/stdc++.h>

using namespace std;
int arr[1001],arr2[1001],n;
bool cmp(int a, int b)
{
  return a>b;
}
int main(void)
{
  // freopen("input.txt","r",stdin);
  // freopen("output.txt","w",stdout);

  int test;
  scanf("%d\n",&test);

  for (int i = 0; i < test; i++)
  {
    int cnt =0;
    scanf("%d\n",&n);
    for (int j = 0; j < n; j++)
    {
      scanf("%d ",&arr[j] );
      arr2[j]=arr[j];
    }

    sort(arr,arr+n,cmp);

    for (int j = 0; j < n; j++) {
      if(arr[j]==arr2[j])cnt++;
    }
    printf("%d\n",cnt);

  }

  return 0;
}
