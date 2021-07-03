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
	T getMax()
	{
		return max;
	}
};

int main()
{
	int int_array[10]={2,4,7,1,9,4,2,6,3,1};
	double double_array[]={2.2,4.4,7.8,1.4,9.9,4.6,2.3,6.6,3.1,1.3};
	Maxnum<int> mint(int_array,10);
	cout<<"int max= "<<mint.getMax()<<endl;
	Maxnum<double> mdouble(double_array,10);
	cout<<"double max= "<<mdouble.getMax()<<endl;
	return 0;
}

