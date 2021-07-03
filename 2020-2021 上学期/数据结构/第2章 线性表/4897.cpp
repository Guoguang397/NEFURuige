#include<iostream>
using namespace std;

struct Node {
    int data;
	Node *rLink;
	Node *lLink;
};

class DList {
private:
	Node *first;
	Node *rear;
public:
	DList();
	~DList();
	Node *First();
	Node *Rear();
	void Insert(int val);
	void outputByRLink();
};

DList::DList()
{
	first = new Node();
	rear = first;
	rear->rLink = first;
	first->lLink = rear;
}

DList::~DList()
{
}

Node *DList::First()
{
	return first;
}

Node *DList::Rear()
{
	return rear;
}

void DList::Insert(int val)
{
	Node *n = new Node();
	n->data = val;
	n->rLink = rear->rLink;
	n->lLink = rear;
	rear->rLink->lLink = n;
	rear->rLink = n;
	rear = rear->rLink;
}

void DList::outputByRLink()
{
	Node *t = first->rLink;
	while (t!=first) {
		cout << t->data << " ";
		t = t->rLink;
	}
	cout << endl;
}

void changeLink(DList &l)
{
    //write your code here
    Node *tail,*p,*np;
    tail=l.Rear();
    p=l.First()->rLink->rLink;
    while(p&&p->rLink&&p->rLink->rLink&&p!=tail&&p!=tail->rLink&&p!=l.First()->rLink)
    {
    	if(p->rLink!=tail)np=p->rLink->rLink;
    	else np=NULL;
    	p->lLink->rLink=p->rLink;
    	p->rLink->lLink=p->lLink;
    	tail->rLink->lLink=p;
    	p->lLink=tail;
    	p->rLink=tail->rLink;
    	tail->rLink=p;
    	p=np;
	}
}

int main()
{
	DList l;
	int val;
	cin >> val;
	while (val != -1) {
		l.Insert(val);
		cin >> val;
	}
	changeLink(l);
	l.outputByRLink();
	return 0;
}
