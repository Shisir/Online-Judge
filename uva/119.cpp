#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	map<string, int> mymap;
	int number,money,person,permoney,total,en=1;
	string namelist[100],name,contname;

	while(cin>>number)
		{
			for (int i = 0; i < number; ++i)
			{
				cin>> namelist[i];
				mymap[namelist[i]]=0;
			}

			for (int i = 0; i < number; ++i)
			{
				cin>>contname>>money>>person;
				if(person!=0)
				{
					permoney=money/person;
					total=person*permoney;

					for(int j=0; j<person; j++)
					{	
						cin>>name;
						mymap[name]+=permoney;
					}
					mymap[contname]-=total;
				}
			}

			if(en!=1) cout<<endl;en++;


			for (int i = 0; i < number; ++i)
			{
				cout << namelist[i] << " " << mymap[namelist[i]] <<endl;
			}
			

		}


	return 0;
}