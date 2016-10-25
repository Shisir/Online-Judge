#include <bits/stdc++.h>

using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif

  int test,n;
  string line;
  char letter[27];

  for (int i = 0; i < 26; i++) {
    letter[i] = 'A'+i;
  }

  scanf("%d",&test);

  for (int i = 1; i <= test; i++)
  {
    cin>>line>>n;
    cout<<"~~ "<<line<<endl;
    for (int j = 0, len=line.length(); j <len ; j++) {
      cout<<letter[(line[j]-'A'-n)%26];
    }
    printf("\n");
  }

  return 0;
}
