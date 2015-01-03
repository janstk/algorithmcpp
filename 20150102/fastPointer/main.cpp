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

	while (fast->getNext() != NULL) //����ѭ��������fastָ����¸��ڵ�ΪNULL.��ʾ����β�ڵ㡣
	{
		if (fast->getNext()->getNext() != NULL)
		{
			fast = fast->getNext()->getNext(); //��ָ��������
			slow = slow->getNext(); //��ָ����һ��
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



