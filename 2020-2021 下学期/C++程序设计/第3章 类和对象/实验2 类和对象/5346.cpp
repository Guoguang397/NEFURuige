#include <bits/stdc++.h>
using namespace std;

const double PI=acos(-1);
class Cylinder
{
	private:
		double r,h,v;
	public:
		Cylinder(double r,double h)
		{
			this->r=r;
			this->h=h;
			v=PI*r*r*h; 
		}
		void vol()
		{
			printf("volume is %.1f\n",v);
		}
};

int main()
{
	double r,h;
	cin>>r>>h;
	Cylinder c(r,h);
	c.vol();
	return 0;
}

