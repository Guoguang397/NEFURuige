#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int score;
public:
    Student(){}
    Student(string name, int score):name(name)
    {
        this->score=score;
    }
    friend void prmm(Student s[10]);
};

void prmm(Student s[10])
{
    int mi=0,ma=0;
    for(int i=1;i<10;i++)
    {
        if(s[i].score>s[ma].score)ma=i;
        if(s[i].score<s[mi].score)mi=i;
    }
    cout<<"max="<<s[ma].name<<" min="<<s[mi].name;

}

int main()
{
    Student *s=new Student[10];
    for(int i=0;i<10;i++)
    {
        string str;
        int n;
        cin>>str>>n;
        s[i]=Student(str,n);
    }
    prmm(s);
    return 0;
}
