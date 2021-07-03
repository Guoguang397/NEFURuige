#include <iostream>
using namespace std;

template <typename T> class Array
{
	T data[10];
	void sort()
	{
		for(int i=0;i<9;i++)
			for(int j=0;j<9-i;j++)
			{
				if(data[j]>data[j+1]) swap(data[j],data[j+1]);
			}
	}
public:
	Array(T d[10])
	{
		for(int i=0;i<10;i++) data[i]=d[i];
		sort();
	}
	void output()
	{
		for(int i=0;i<10;i++) cout<<data[i]<<" ";
		cout<<endl;
	}
};

int main()
{
	int int_array[10]={2,4,7,10,9,5,8,6,3,1};
	double double_array[]={2.2,4.4,7.8,1.4,9.9,4.6,2.3,6.6,3.1,1.3};
	Array<int> intarr(int_array);
	intarr.output();
	Array<double> doublearr(double_array);
	doublearr.output();
	return 0;
}

