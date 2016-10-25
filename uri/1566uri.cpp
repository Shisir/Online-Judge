#include <bits/stdc++.h>

using namespace std;

int n,arr[3000001];

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif

  int test;
  scanf("%d\n",&test);

  for (int i = 0; i < test; i++) {

    scanf("%d\n",&n );
    for (int j = 0; j < n; j++) {
      scanf("%d\n",&arr[j] );
    }
    sort(arr,arr+n);

    for (int j = 0; j < n-1; j++) {
      printf("%d ",arr[j]);
    }
    printf("%d\n",arr[n-1]);

  }




  return 0;
}
