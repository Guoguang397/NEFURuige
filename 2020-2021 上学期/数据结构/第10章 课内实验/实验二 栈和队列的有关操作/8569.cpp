#include <bits/stdc++.h>
using namespace std;

int main()
{
	int nums[100],nump=0,num,calcn[100],calcnp=0,calcop=0;
	char c,o,op[100],opp=0,calco[100];
	while(cin>>c&&c!='#')
	{
		if(c>='0'&&c<='9')nums[nump++]=c-48;
		else if(c=='*'||c=='/'||c=='+'||c=='-'||c=='(')op[opp++]=c;
		else if(c==')')
		{
			while(opp&&op[opp-1]!='(')
			{
				calcn[calcnp++]=nums[--nump];
				calco[calcop++]=op[--opp];
			}
			calcn[calcnp++]=nums[--nump];
			opp--;
			while(calcop)
			{
				o=calco[--calcop];
				if(o=='+')
				{
					num=calcn[--calcnp];
					num+=calcn[--calcnp];
				}
				else if(o=='-')
				{
					num=calcn[--calcnp];
					num-=calcn[--calcnp];
				}
				else if(o=='*')
				{
					num=calcn[--calcnp];
					num*=calcn[--calcnp];
				}
				else if(o=='/')
				{
					num=calcn[--calcnp];
					num/=calcn[--calcnp];
				}
				calcn[calcnp++]=num;
			}
			nums[nump++]=calcn[--calcnp];
		}
	}
	while(opp)
	{
		calcn[calcnp++]=nums[--nump];
		calco[calcop++]=op[--opp];
	}
	calcn[calcnp++]=nums[--nump];
	while(calcop)
	{
		o=calco[--calcop];
		if(o=='*')
		{
			num=calcn[--calcnp];
			num*=calcn[--calcnp];
			calcn[calcnp++]=num;
		}
		else if(o=='/')
		{
			num=calcn[--calcnp];
			num/=calcn[--calcnp];
			calcn[calcnp++]=num;
		}
		else
		{
			num=calcn[--calcnp];
			nums[nump++]=num;
			op[opp++]=o;
		}
	}
	nums[nump++]=calcn[--calcnp];
	while(opp)
	{
		calcn[calcnp++]=nums[--nump];
		calco[calcop++]=op[--opp];
	}
	calcn[calcnp++]=nums[--nump];
	while(calcop)
	{
		o=calco[--calcop];
		if(o=='+')
		{
			num=calcn[--calcnp];
			num+=calcn[--calcnp];
		}
		else if(o=='-')
		{
			num=calcn[--calcnp];
			num-=calcn[--calcnp];
		}
		calcn[calcnp++]=num;
	}
	cout<<calcn[calcnp-1];
	return 0;
}

