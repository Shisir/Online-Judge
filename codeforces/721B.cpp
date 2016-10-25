#include <bits/stdc++.h>

using namespace std;

int n,m,best,worst,cnt=0;
vector<string>password;
string correct;
bool srt(string a, string b){
	return a.length()<b.length();
}
int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif

	scanf("%d %d",&n,&m);
	for (int i = 0; i <n; ++i)
	{
		cin>>correct;
		password.push_back(correct);
	}
	cin>>correct;
	sort(password.begin(), password.end(),srt);

	for (int i = 0; i <n; ++i)
	{
		if(password[i].length()<correct.length()) best++;
		else{
			break;
		}
	}

	for (int i = 0; i <n; ++i)
	{
		if(password[i].length()==correct.length()) cnt++;
			
	}
	printf("%d\n%d\n",(((best)/m)*5)+best+1,(((best+cnt-1)/m)*5)+best+cnt);





		
	return 0;
}