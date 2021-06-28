#include <iostream>
using namespace std;

class Number
{
private:
    double num;
public:
    Number(double n)
    {
        num=n;
    }
    friend double pfx(Number &n1,Number &n2);
};

double pfx(Number &n1,Number &n2)
{
    return n1.num*n1.num-n2.num*n2.num;
}

int main()
{
    double d;
    cin>>d;
    Number n1(d);
    cin>>d;
    Number n2(d);
    cout<<pfx(n1,n2);
    return 0;
}
