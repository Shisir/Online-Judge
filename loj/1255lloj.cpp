#include <bits/stdc++.h>

using namespace std;
string str, substr;
int preprcs[1000001];

void kmpPreprocess(string substr)
{
	const int m = substr.length();
    int i = 0, j = -1;

    preprcs[i] = -1;
    while(i < m)
    {
        while(j >= 0 && substr[i] != substr[j])
            j = preprcs[j];

		i++;
        j++;
        preprcs[i] = j;
    }
}

int kmp(string str, string substr)
{
	int i=0, j=0, count = 0;
    const int n = str.length();
    const int m = substr.length();

	kmpPreprocess(substr);
    while (i<n)
    {
        while (j>=0 && str[i]!=substr[j]) j=preprcs[j];

        i++,j++;

        if (j==m)
        {
            count++;
            j=preprcs[j];
        }
    }
    return count;
}

int main() 
{	
	int test;
	scanf("%d",&test);
	test++;
	for(int t=1;t<test; t++)
	{
		cin>>str>>substr;
		cout<<"Case "<<t<<": "<<kmp(str,substr)<<endl;	
	}

	return 0;
}