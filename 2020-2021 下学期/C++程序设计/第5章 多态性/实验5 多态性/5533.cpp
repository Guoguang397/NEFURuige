#include <iostream>
using namespace std;

class Car
{
protected:
	int distance;
public:
	double travel_time()
	{
		return distance/128.0;
	}
	void show()
	{
		cout<<"base time is "<<travel_time()<<endl;
	}
};

class Kilometre:public Car
{
public:
	Kilometre(int distance)
	{
		this->distance=distance;
	};
	double travel_time()
	{
		return distance/120.0;
	}
	void show()
	{
		Car::show();
		cout<<"derived time is "<<travel_time();
	}
};

int main()
{
	int dist;
	cin>>dist;
	Kilometre k(dist);
	k.show();
	return 0;
}

