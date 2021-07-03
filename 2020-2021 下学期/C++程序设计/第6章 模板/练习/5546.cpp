#include <iostream>
using namespace std;

template <typename T> class Sum
{
	T data[3];
public:
	Sum(T d[3])
	{
		for(int i=0;i<3;i++)data[i]=d[i];
	}
	void getSum(string name);
};

template <typename T>
void Sum<T>::getSum(string name)
{
	T sum=0;
	for(int i=0;i<3;i++)sum+=data[i];
	cout<<"The "<<name<<" sum is "<<sum<<endl; 
}

int main()
{
	int three_int[]={3,5,7};
	Sum<int> sint(three_int);
	sint.getSum("three_int");
	double three_double[]={12.34,34.56,56.78};
	Sum<double> sdouble(three_double);
	sdouble.getSum("three_double");
	return 0;
}

