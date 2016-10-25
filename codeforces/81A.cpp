#include <bits/stdc++.h>

using namespace std;
stack<char>myStack;

void printStack()
{
	if(myStack.empty()) return;
	char ch=myStack.top();
	myStack.pop();
	printStack();
	cout<<ch;
}
int main(void)
{
	string line;
	getline(cin,line);
	for(int i=0,len=line.length(); i<len; i++)
	{
		if(myStack.empty()||myStack.top()!=line[i])myStack.push(line[i]);
		else myStack.pop();
	}	
	printStack();
	return 0;
}