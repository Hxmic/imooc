#ifndef SINGLELIST_H
#define SINGLELIST_H
#include "Node.h"

/**************************
		������
***************************/

class List
{
public:
	List();					//���캯��
	~List();				//��������
	void ClearList();		//�������
	bool ListEmpty();		//�ж������Ƿ�Ϊ��
	int ListLength();		//��ȡ����ĳ���
	bool GetElem(int i, Node *pNode);					//��ȡָ��Ԫ��
	int LocateElem(Node *pNode);						//Ѱ�ҵ�һ������e������Ԫ�ص�λ��
	bool PriorElem(Node *currentElem, Node *preElem);	//��ȡָ��Ԫ�ص�ǰ��
	bool NextElem(Node *currentElem, Node *nextElem);	//��ȡָ��Ԫ�صĺ���
	bool ListInsert(int i, Node *pNode);				//�ڵ�i��λ�ò���Ԫ��
	bool ListDelete(int i, Node *pNode);				//�ڵ�i��λ��ɾ��Ԫ��
	void ListTraverse();								//�������Ա�
	bool ListInsertHead(Node *pNode);					//������ͷ��������
	bool ListInsertTail(Node *pNode);					//������β��������
private:
	Node * m_pList;
	int m_iLength;
};
#endif