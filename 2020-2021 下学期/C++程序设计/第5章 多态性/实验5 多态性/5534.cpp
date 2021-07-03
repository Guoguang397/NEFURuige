#include <iostream>
using namespace std;

class Matrix
{
	int arr[3][3];
public:
	Matrix(int d[][3])
	{
		for(int i=0;i<3;i++)for(int j=0;j<3;j++)arr[i][j]=d[i][j];
	}
	void output()
	{
		for(int i=0;i<3;i++)
		{
			for(int j=0;j<3;j++)
			{
				cout<<arr[i][j]<<" ";
			}
			cout<<endl;
		}
	}
	Matrix operator+(Matrix m)
	{
		for(int i=0;i<3;i++)for(int j=0;j<3;j++)m.arr[i][j]=arr[i][j]+m.arr[i][j];
		return m;
	}
	Matrix operator-(Matrix m)
	{
		for(int i=0;i<3;i++)for(int j=0;j<3;j++)m.arr[i][j]=arr[i][j]-m.arr[i][j];
		return m;
	}
};

int main()
{
	int data[3][3]={1,2,3,4,5,6,7,8,9};
	Matrix m1(data);
	for(int i=0;i<3;i++)for(int j=0;j<3;j++)cin>>data[i][j];
	Matrix m2(data);
	(m1+m2).output();
	(m1-m2).output();
	return 0;
}

