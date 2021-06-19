#include <bits/stdc++.h>
using namespace std;

class Stock
{
	private:
		char stockcode[10];
		int quan;
		double price;
	public:
		Stock(char na[],int q=1000,double p=8.98)
		{
			memcpy(stockcode,na,strlen(na)+1);
			quan=q;
			price=p;
		}
		void print()
		{
			printf("stockcode is %s quan is %d price is %.2f\n",this->stockcode,this->quan,this->price);
		}
};

int main()
{
	Stock s1((char*)"600001",3000,5.67);
	Stock s2((char*)"600001");
	s1.print();
	s2.print();
	return 0;
}

