#include <bits/stdc++.h>
using namespace std;

int main()
{
	char sta[100];
	int sp=0;
	char tmp;
	while(cin>>tmp)
	{
		if(tmp=='('||tmp=='['||tmp=='{')sta[sp++]=tmp;
		else if(tmp==')'||tmp==']'||tmp=='}')
		{
			if(sp)
			{
				if(tmp==')'&&sta[sp-1]=='('||tmp==']'&&sta[sp-1]=='['||tmp=='}'&&sta[sp-1]=='{')sp--;
				else
				{
					cout<<0;
					return 0;
				}
			}
			else
			{
				cout<<0;
				return 0;
			}
		}
		else if(tmp=='#')break;
	}
	if(!sp)cout<<1;
	else cout<<0;
	return 0;
}

