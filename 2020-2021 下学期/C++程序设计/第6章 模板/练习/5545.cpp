#include <iostream>
using namespace std;

template <typename T1,typename T2> class Data
{
	T1 data1;
	T2 data2;
public:
	Data(T1 data1,T2 data2):data1(data1),data2(data2)
	{
		cout<<data1<<" "<<data2<<endl;
	};
};

int main()
{
	Data<int,string> d1(99,"zhang");
	Data<double,int> d2(123.45,888);
	return 0;
}

