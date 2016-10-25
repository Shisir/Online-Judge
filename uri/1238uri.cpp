#include <bits/stdc++.h>

using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif

  int test,l1,l2;
  string a,b;
  scanf("%d",&test);

  for (int i = 1; i <= test; i++)
  {
    cin>>a>>b;
    l1=a.length();
    l2 = b.length();

    for (int j = 0; j < min(l1,l2); j++) {
      cout<<a[j]<<b[j];
    }
    if(l1<l2) a=b;
    for (int j = min(l1,l2); j < max(l1,l2); j++) {
      cout<<a[j];
    }
    printf("\n" );
  }

  return 0;
}
