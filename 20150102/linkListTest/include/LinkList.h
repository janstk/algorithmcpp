#ifndef LINKLIST_H
#define LINKLIST_H
#include"Node.h"

class LinkList
{
	public:
		LinkList(); //构造方法
		bool isEmpty(); //判断是否为空
		void insert(int data,int pos); //指定位置插入元素（直接插入数据）
		int find(int data);//查找元素位置(返回一个int类型）
		Node* getElem(int pos);//获取指定位置元素
		void deleteNode(int pos);//删除指定位置元素(传入位置）
		void deleteList();//删除所有元素
		void outputList();
	private:
		Node *header; //头指针
		void insert(Node * p, int pos);
};

#endif // LINKLIST_H
