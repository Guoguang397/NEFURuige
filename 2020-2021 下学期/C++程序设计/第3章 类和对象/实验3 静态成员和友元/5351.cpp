#include <bits/stdc++.h>
using namespace std;

class People
{
    int id,avg;
    string name;

public:
    People(int id,string name,int score[3]):name(name)
    {
        this->id=id;
        avg=0;
        for(int i=0;i<3;i++)avg+=score[i];
        avg/=3;
    }
    bool operator < (People &pp)
    {
        return avg < pp.avg;
    }
    void print()
    {
        cout<<id<<" "<<name<<" "<<avg<<endl;
    }
};

int main() {
    People **p;
    int n;
    cin>>n;
    p=new People*[n];
    for(int i=0;i<n;i++)
    {
        int id,score[3];
        string name;
        cin>>id>>name;
        for(int j=0;j<3;j++)cin>>score[j];
        p[i]=new People(id,name,score);
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(*p[j]<*p[j+1])
            {
                People *tmp=p[j];
                p[j]=p[j+1];
                p[j+1]=tmp;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        p[i]->print();
    }
    return 0;
}
