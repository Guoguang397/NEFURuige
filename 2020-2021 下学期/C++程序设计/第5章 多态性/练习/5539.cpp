#include <iostream>
using namespace std;

class Base
{
private:
    int price,quantity;
public:
    Base(int price, int quantity):price(price),quantity(quantity){}
    virtual void show()
    {
        cout<<"price is "<<price<<" quantity is "<<quantity<<endl;
    }
};

class Derived:public Base
{
    int life;
public:
    Derived(int price, int quantity, int life) : Base(price, quantity), life(life) {}
    void show()
    {
        Base::show();
        cout<<"life is "<<life;
    }
};

int main()
{
    Derived d(2000,2,18);
    d.show();
    return 0;
}

