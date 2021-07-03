#include <iostream>
using namespace std;

class Building
{
public:
    Building(int floors, int rooms, double square) : floors(floors), rooms(rooms), square(square) {}
    void show()
    {
        cout<<"floor is "<<floors<<" house is "<<rooms<<" square is "<<square<<endl;
    }
protected:
    int floors,rooms;
    double square;
};

class House:public Building
{
public:
    House(int floors, int rooms, double square, int bedrooms, int bathrooms) : Building(floors, rooms, square), bedrooms(bedrooms), bathrooms(bathrooms) {}
    void show()
    {
        Building::show();
        cout<<"bedroom is "<<bedrooms<<" bathroom is "<<bathrooms<<endl;
    }
private:
    int bedrooms,bathrooms;
};

class Office:public Building
{
public:
    Office(int floors, int rooms, double square, int fireExtinguishers, int phones) : Building(floors, rooms, square), fireExtinguishers(fireExtinguishers), phones(phones) {}
    void show()
    {
        Building::show();
        cout<<"extinguisher is "<<fireExtinguishers<<" telephone is "<<phones<<endl;
    }
private:
    int fireExtinguishers,phones;
};

int main()
{
    House h(32,4,600.0,8,4);
    h.show();
    Office o(15,40,2000.0,40,40);
    o.show();
    return 0;
}

