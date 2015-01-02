#ifndef LINKLIST_H
#define LINKLIST_H
#include"Node.h"

class LinkList
{
	public:
		LinkList(); //���췽��
		bool isEmpty(); //�ж��Ƿ�Ϊ��
		void insert(int data,int pos); //ָ��λ�ò���Ԫ�أ�ֱ�Ӳ������ݣ�
		int find(int data);//����Ԫ��λ��(����һ��int���ͣ�
		Node* getElem(int pos);//��ȡָ��λ��Ԫ��
		void deleteNode(int pos);//ɾ��ָ��λ��Ԫ��(����λ�ã�
		void deleteList();//ɾ������Ԫ��
		void outputList();
	private:
		Node *header; //ͷָ��
		void insert(Node * p, int pos);
};

#endif // LINKLIST_H
