#include<iostream>

using namespace std;

int main()
{
	string s1,s2,a,b;
	int index1,index2,x;
	bool fw=false,bw=false;
	cin>>s1>>a>>b;
	s2=s1;
	for(int i=0; i<s1.length(); i++) s2[i]=s1[s1.length()-1-i];
	
	index1=s1.find(a);
	index2=s1.find(b,index1+a.length());
	if((index1<index2)&&index1<=s1.length()&&index2<=s1.length()) fw=true;

	index1=s2.find(a);
	index2=s2.find(b,index1+a.length());
	if((index1<index2)&&index1<=s2.length()&&index2<=s2.length()) bw=true;

	 if(fw&&bw) cout<<"both";
	else if(fw) cout<<"forward";
	else if(bw) cout<<"backward";
		  else  cout<<"fantasy";

	return 0;
}

