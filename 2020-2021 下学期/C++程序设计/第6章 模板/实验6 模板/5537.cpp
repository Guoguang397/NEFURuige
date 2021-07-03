#include <iostream>
using namespace std;

template <typename T> T* bubbleSort(T arr[],int n)
{
	for(int i=0;i<9;i++)
		for(int j=0;j<9-i;j++)
		{
			if(arr[j]>arr[j+1]) swap(arr[j],arr[j+1]);
		}
	
	return arr;
}

int main()
{
	int int_array[10]={2,4,7,10,9,5,8,6,3,1};
	double double_array[10]={2.2,4.4,7.8,1.4,9.9,4.6,2.3,6.6,3.1,1.3};
	
	int *pi=bubbleSort<int>(int_array,10);
	for(int i=0;i<10;i++) cout<<pi[i]<<" ";
	cout<<endl;
	
	double *pd=bubbleSort<double>(double_array,10);
	for(int i=0;i<10;i++) cout<<pd[i]<<" ";
	return 0;
}

