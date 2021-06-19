#include <bits/stdc++.h>
using namespace std;

class Score
{
	private:
		int mid,fin;
	public:
		void setScore(int a,int b)
		{
			mid=a;
			fin=b;
		}
		
		void printScore()
		{
			printf("mid is %d fin is %d\n",mid,fin);
			printf("total is %d\n",(int)(mid*0.3)+(int)(fin*0.7));
		}
};

int main()
{
	Score op1,op2;
	op1.setScore(80,88);
	op1.printScore();
	op2.setScore(90,92);
	op2.printScore();
	return 0;
}
