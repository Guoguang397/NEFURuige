#include<iostream>
using namespace std;

struct Node {
    int data;
	Node *next;
};

class List {
private:
	Node *first;
public:
	List();
	~List();
	void Insert(int x);
	bool SearchK(int k,int &val);
};

List::List()
{
	first = new Node();
	first->next = NULL;
}

List::~List()
{
}

void List::Insert(int x)
{
	Node *temp = first;
	while (temp->next!=NULL)
		temp = temp->next;
	Node *n = new Node();
	n->data = x;
	n->next = NULL;
	temp->next = n;
}

//write your code here


int main()
{
	List l;
	int i;
	cin >> i;
	while (i!=-1) {
		l.Insert(i);
		cin >> i;
	}
	//write your code here
    
    
	return 0;
}
