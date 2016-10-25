#include <bits/stdc++.h>

using namespace std;

int main()
{
  long long n,m;
  while(cin>>n>>m)
  {
    long long ans=1,ans2=1;
    for(int i=2; i<=n; i++) ans*=i;
    for(int i=2; i<=m; i++) ans2*=i;
    cout<<ans+ans2<<endl;
  }
  return 0;
}
