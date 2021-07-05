#include <bits/stdc++.h>
using namespace std;

class Person
{
	int age;
public:
	Person(int age)
	{
		this->age=age;
	}
	void setage(int age)
	{
		this->age=age;
	}
	void show()
	{
		cout<<"age is "<<age<<endl;
	}
};

class Student:private Person
{
	int age;
	int credit;
public:
	Student(int age, int credit):Person(age)
	{
		this->credit=credit;
	}
	void setage_cre(int age, int credit)
	{
		this->credit=credit;
		this->age=age;
	}
	void show()
	{
		//Person::show();
		cout<<"age is "<<age<<endl;
		cout<<"credit is "<<credit<<endl;
	}
};

int main()
{
	Student stu1(19,166);
	stu1.setage_cre(20,168);
	stu1.show();
	return 0;
}

