#include <bits/stdc++.h>

using namespace std;
string line, line2;

bool isLetter(char ch){
  return ((ch>='A'&& ch<='Z') ||(ch>='a'&& ch<='z'));
}
int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif

  int test;
  scanf("%d\n",&test);

  for (int i = 1; i <= test; i++)
  {
    getline(cin,line);
    line2=line;
    for (int j = 0, len=line.length(); j < len; j++) {
      if(isLetter(line[j])) line[j]+=3;
    }

    for (int j = line.length()-1,k=0; j >-1; j--) {
      line2[k++]=line[j];
    }
    for (int j = line.length()/2; j < line.length(); j++) {
      line2[j]-=1;
    }
    cout<<line2<<endl;
  }

  return 0;
}
