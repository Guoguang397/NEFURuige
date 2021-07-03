#include <iostream>
using namespace std;

class Person
{
protected:
    string name,id;
public:
    Person(string name, string id) : name(name), id(id) {}
    void show()
    {
        cout<<"name is "<<name<<" id is "<<id<<endl;
    }
};

class Teacher: public Person
{
protected:
    string degree,dep;
public:
    Teacher(string name, string id, string degree, string dep) : Person(name, id), degree(degree), dep(dep) {}
    void show()
    {
        Person::show();
        cout<<"degree is "<<degree<<" dep is "<<dep<<endl;
    }
};

class Student: public Person
{
protected:
    int old;
    string sno;
public:
    Student(string name, string id, int old, string sno) : Person(name, id), old(old), sno(sno) {}
    void show()
    {
        Person::show();
        cout<<"old is "<<old<<" sno is "<<sno<<endl;
    }
};

class Stud
{
protected:
    string addr,tel;
public:
    Stud(string addr, string tel) : addr(addr), tel(tel) {}
    void show()
    {
        cout<<"addr is "<<addr<<" tel is "<<tel<<endl;
    }
};

class Score: public Student,Stud
{
private:
    int math,eng;
public:
    Score(string name, string id, int old, string sno, string addr, string tel, int math, int eng) : Student(name, id, old, sno), Stud(addr, tel), math(math), eng(eng) {}
    void show()
    {
        Student::show();
        Stud::show();
        cout<<"math is "<<math<<" eng is "<<eng<<endl;
    }
};

int main()
{
    Score c1("dcc", "23010620071122", 10, "201304", "Haping Road", "13804582160", 94, 100);
    c1.show();
    Teacher t1("dbz","23010719750412","Ph.D","Computer");
    t1.show();
    return 0;
}

