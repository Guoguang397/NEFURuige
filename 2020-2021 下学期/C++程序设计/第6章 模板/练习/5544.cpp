#include <iostream>
using namespace std;

template <typename T> class Maxnum
{
	T max;
public:
	Maxnum(T arr[],int n)
	{
		int mai=0;
		for(int i=1;i<n;i++)
		{
			if(arr[i]>arr[mai])mai=i;
		}
		max=arr[mai];
	}
	void output(string name)
	{
		cout<<"The "<<name<<" is "<<max<<endl;
	}
};

int main()
{
	int int_array[]={11,22,33,44,55,66,77,88,99,1010};
	double double_array[]={11.1,22.2,33.3,44.4,55.5,66.6,77.7,88.8,99.9,100.10};
	Maxnum<int> mint(int_array,10);
	mint.output("int_max");
	Maxnum<double> mdouble(double_array,10);
	mdouble.output("double_max");
	return 0;
}

