#include<iostream>
#include"Node.h"
#include"LinkList.h"
using namespace std;
int main()
{
	LinkList l;

	for (int i = 0; i < 51; i++)
	{
		l.insert(i, i);
	}

	Node * fast = l.getHeader();
	Node * slow = fast;

	while (fast->getNext() != NULL) //跳出循环条件：fast指针的下个节点为NULL.表示到达尾节点。
	{
		if (fast->getNext()->getNext() != NULL)
		{
			fast = fast->getNext()->getNext(); //快指针跳两次
			slow = slow->getNext(); //慢指针跳一次
		}
		else
		{
			fast = fast->getNext();
			slow = slow->getNext();
		}
	}

	cout << slow->getData();
	return 0;
}



