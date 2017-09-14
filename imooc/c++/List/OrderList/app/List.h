#ifndef LIST_H
#define LIST_H


/**************************
		˳������
***************************/

class List
{
public:
	List(int iSize);		//���캯��
	~List();				//��������
	void ClearList();		//�������
	bool ListEmpty();		//�ж������Ƿ�Ϊ��
	int ListLength();		//��ȡ����ĳ���
	bool GetElem(int i, int *e);						//��ȡָ��Ԫ��
	int LocateElem(int *e);								//Ѱ�ҵ�һ������e������Ԫ�ص�λ��
	bool PriorElem(int *currentElem, int *preElem);		//��ȡָ��Ԫ�ص�ǰ��
	bool NextElem(int *currentElem, int *nextElem);		//��ȡָ��Ԫ�صĺ���
	bool ListInsert(int i, int *e);						//�ڵ�i��λ�ò���Ԫ��
	bool ListDelete(int i, int *e);						//�ڵ�i��λ��ɾ��Ԫ��
	void ListTraverse();								//�������Ա�
private:
	int * m_pList;
	int m_iLength;
	int m_iSize;
};
#endif