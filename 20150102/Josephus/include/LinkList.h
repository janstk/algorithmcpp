#ifndef LINKLIST_H
#define LINKLIST_H
#include"Node.h"

class LinkList
{
public:
	LinkList(); //���췽��
	bool isEmpty(); //�ж��Ƿ�Ϊ��
	void insert(int data, int pos); //ָ��λ�ò���Ԫ�أ�ֱ�Ӳ������ݣ�
	int find(int data);//����Ԫ��λ��(����һ��int���ͣ�
	Node * getElem(int pos); //��ȡָ��λ��Ԫ��
	void deleteNode(int pos);//ɾ��ָ��λ��Ԫ��(����λ�ã�
	void deleteList();//ɾ������Ԫ��
	void outputList();//��ӡ��ǰ������Ԫ��
	int getLength()
	{
		int count = 1;
		Node * pointer = header;

		while (pointer->getNext() != header)
		{
			pointer = pointer->getNext();
			count++;
		}

		return count;

	}
	void deleteNode(Node * node)
	{
		Node * p = header;
		int n = getLength();
		while (p->getNext() != p && n>=1)
		{

			if (p->getNext() == node)
			{
				p->setNext(node->getNext());
				delete node;
				break;
			}
			p=p->getNext();
			n=n-1;
		}
	}
	Node * getHeader()
	{
		return header;
	}
private:
	Node * header; //ͷָ��
	void insert(Node * p, int pos);
	Node * getLast()
	{
		Node * tmp = header;

		while (tmp->getNext() != header)
		{
			tmp = tmp->getNext();
		}

		return tmp;
	}

};

#endif // LINKLIST_H
