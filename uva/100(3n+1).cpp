#include <iostream>
#include <map>

using namespace std;

int main(void)
{
	map<int, int> mymap;
	mymap[1]=1;
	int first,last;

	while(cin>>first>>last)
	{
		int max=0;
		for(int i=first; i<= last; i++)
		{
			int count=0,num=i;
			while(1)
			{
				if(mymap.find(num) != mymap.end())
				{
					count+=mymap[num];
					break;
				}

				if(num%2==0)
				{
					count++;
					num=num/2;
				}
				else
				{
					count+=1;
					num=num*3+1;

					if(mymap.find(num) != mymap.end())
					{
						count+=mymap[num];
						break;
					}
					else{
						count+=1;
						num=num/2;
					}
				}
			}
			if(max<count) max=count;
			mymap[i]=count;
		}

		cout << first << " " << last << " " << max <<endl;
	}

	return 0;
}
