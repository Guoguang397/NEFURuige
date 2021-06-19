#include <bits/stdc++.h>
using namespace std;

class People
{
	private:
		int no;
		string name;
	public:
		static int total;
		People(string n)
		{
			no=++People::total;
			name=n;
		}
		
		void print(string n)
		{
			if(n==name)
			{
				printf(" name= %s no= %d total= %d",n.c_str(),no,People::total);
			}
		}
};

int People::total=0;
int main()
{
	cout<<"input guest name query:\n";
	People p[3]={People("xdl"),People("dbz"),People("dcc")};
	string s;
	cin>>s;
	for(int i=0;i<3;i++)
	{
		p[i].print(s);
	}
	return 0;
}

