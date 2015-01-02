#include<iostream>
#include<assert.h>
#include"LinkList.h"
using namespace std;
int main()
{
	LinkList l;
	cout<<"inempty test"<<endl;
	if(l.isEmpty())
	{
		cout<<"empty"<<endl;
	}
	else{
	cout<<"Not empty"<<endl;
	}
	cout<<"insert Node"<<endl;
	l.insert(1,1);
	l.insert(2,2);
	l.insert(3,3);
	l.outputList();
	cout<<endl;
	cout<<"inempty test again"<<endl;
	if(l.isEmpty())
	{
		cout<<"empty"<<endl;
	}
	else{
	cout<<"Not empty"<<endl;
	}
	cout<<"find Node"<<endl;
	int pos  = l.find(3);
	cout<<pos<<endl;
	cout<<"get Node and pos = 2"<<endl;
	cout<<l.getElem(2)->getData()<<endl;
	cout<<"del Node"<<endl;
	l.deleteNode(3);
	l.outputList();
	cout<<endl;
	cout<<"del list test"<<endl;
	l.deleteList();
	if(l.isEmpty())
	{
		cout<<"empty"<<endl;
	}
	else{
	cout<<"Not empty"<<endl;
	}

}

