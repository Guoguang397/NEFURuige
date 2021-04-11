//注意：本题目数据与题意不符，测试数据为活动安排问题，即输出能安排下的最多线段数 
#include <bits/stdc++.h>
using namespace std;

struct point
{
	int x1,x2;
}p[100];

bool cmp(point p1,point p2)
{
	return p1.x2<p2.x2; 
}
int main()
{
	int n,cnt=0;
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
		cin>>p[i].x1>>p[i].x2;
		if(p[i].x1>p[i].x2)swap(p[i].x1,p[i].x2);
	}
	sort(p,p+n,cmp);
	
	int ct=0;
	for(int i=0;i<n;i++)
	{
		if(p[i].x1>ct)
		{
			ct=p[i].x2;
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
}

