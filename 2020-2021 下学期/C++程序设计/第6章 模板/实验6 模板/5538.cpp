#include <iostream>
using namespace std;

template <typename T> class Input
{
	T mi,ma;
	string msg;
public:
	Input(string msg,int mi,int ma):mi(mi),ma(ma),msg(msg)
	{
		T data;
		bool ok=false;
		while(!ok)
		{
			cout<<msg;
			cin>>data;
			if(data>=mi&&data<=ma)
			{
				ok=true;
				cout<<data<<endl;
			}
		}
	};
};

template <typename T> void inputData()
{
	T mi,ma;
	cin>>mi>>ma;
	Input<T> obj("",mi,ma);
}

int main()
{
	inputData<int>();
	inputData<char>();
	return 0;
}

