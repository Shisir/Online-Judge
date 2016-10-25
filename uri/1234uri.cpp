#include <bits/stdc++.h>

using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif

	string line,word;

  while(getline(cin,line))
  {
		int cnt=0;
		for(int i = 0,len=line.length(); i <len; i++) {
			if(line[i]!=' ')
			{
				cnt++;
				if(cnt&1){
					if(line[i]>='a' && line[i]<='z') line[i]-=32;
				}
				else {
					if(line[i]>='A' && line[i]<='Z') line[i]+=32;
				}
			}
		}
		cout<<line<<endl;
  }
  return 0;
}
