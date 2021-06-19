#include <bits/stdc++.h>
using namespace std;

class Student
{
	private:
		string name,number;
		int score,count,sum,ave;
		
	public:
		Student(string n,string nu,int s,int c,int su,int a)
		{
			name=n;
			number=nu;
			score=s;
			count=c;
			sum=su;
			ave=a;
		}
		
		void print()
		{
			cout<<"name is "<<name<<endl;
			cout<<"number is "<<number<<endl;
			cout<<"score is "<<score<<endl;
			cout<<"count is "<<count<<endl;
			cout<<"sum is "<<sum<<endl;
			cout<<"ave is "<<ave<<endl;
		}
};

int main()
{
	Student s1("liming","070201",90,1,90,90);
	Student s2("zhanghao","070202",80,2,170,85);
	s1.print();
	s2.print();
	return 0;
}

