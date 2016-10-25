#include <bits/stdc++.h>

using namespace std;
int arr[5];
char letter[6]={'A','B','C','D','E'};
int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif

  int test;

  while (scanf("%d\n",&test))
  {
		if(test==0) break;
		for (int l = 0; l < test; l++) {

	    int cnt=0;
	    for (int i = 0; i < 5; i++) {
	      scanf("%d ",&arr[i]);
	      if(arr[i]<=127)
				{
					cnt++;
					arr[i] = 1;
				}
				else arr[i] = 0;
	    }
			if(cnt==1){
				for (int i = 0; i < 5; i++) {
					if(arr[i]==1) {
						printf("%c\n",letter[i]);
						break;
					}
				}
			}
			else printf("*\n");
		}
  }

  return 0;
}
