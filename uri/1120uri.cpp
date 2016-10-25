#include <bits/stdc++.h>

using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
  char n;
  string line;

  while (cin>>n>>line)
  {

    if(n=='0' && line=="0") break;
    bool flag = true;
    int len=line.length();
    for (int i = 0; i <len ; i++) {
      if(line[i]!=n && line[i]!='0') {flag = false;break;}
    }
    if(flag)
    {
      printf("0\n");
      continue;
    }
    for (int i = 0; i < len; i++) {
        if(line[i]!=n) printf("%c",line[i]);
    }
    printf("\n");

  }
  return 0;
}
