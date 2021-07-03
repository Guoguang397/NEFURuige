#include <iostream>
using namespace std;

template <typename T> T getMax(T arr[],int n)
{
	int mai=0;
	for(int i=1;i<n;i++)
	{
		if(arr[i]>arr[mai])mai=i;
	}
	return arr[mai];
}

int main()
{
	int int_array[10]={2,4,7,1,9,4,2,6,3,1};
	double double_array[]={2.2,4.4,7.8,1.4,9.9,4.6,2.3,6.6,3.1,1.3};
	cout<<"int max= "<<getMax<int>(int_array,10)<<endl;
	cout<<"double max= "<<getMax<double>(double_array,10)<<endl;
	return 0;
}

