#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	string line;
	cin>>line;

	int length=line.length();

	for (int i = 0; i < length; i++)
	{
		if(line[i]=='A'||line[i]=='a'||line[i]=='E'||line[i]=='e'||line[i]=='O'||line[i]=='o'||line[i]=='I'||line[i]=='i'||line[i]=='U'||line[i]=='u'||line[i]=='Y'||line[i]=='y');
		else if(line[i]>64 && line[i]<91) printf(".%c",line[i]+32);
		else cout << "." << line[i];
	}
	cout<<endl;

	return 0;
}
