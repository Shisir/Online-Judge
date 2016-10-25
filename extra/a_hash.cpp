#include<bits/stdc++.h>

using namespace std;

const int ns=100010;
const unsigned base=131;
char line[ns], prevstring[ns];
unsigned prefix[ns], power[ns];

void HASH(int len)
{
    prefix[0]=line[0];
    for(int i=1; i<len; i++) prefix[i]=prefix[i-1]*base + line[i];
}
int main(void)
{
    power[0]=1;
    for(unsigned i=1; i<ns; i++) power[i]=power[i-1]*base;
    while(scanf("%s",line)!=EOF)
    {
        int len=strlen(line);
        HASH(len);
        unsigned value=0,current;
        int last;

        for(int i=len-1; i>0; i--)
        {
            value=value*base+line[i];
            current = prefix[i - 1];
            current *= power[len - i];
            current = prefix[len - 1] - current;
            if(value == current) last = i;
        }
        value=value*base+line[0];
        if(value==prefix[len-1]) last=0;
        int j = 0;
		for(int i = last - 1; i >= 0; i--, j++) prevstring[j] = line[i];
		prevstring[j] = '\0';
		printf("%s%s\n", line,prevstring);
    }
    return 0;
}
