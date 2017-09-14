#ifndef MYSTACK_H#define MYSTACK_H#include <iostream>using namespace std;/*****************************栈：先进后出   栈模版实现头文件*****************************/template<typename T>class MyStack{public:	MyStack(int size);	~MyStack();	bool stackEmpty();	bool stackFull();	void clearStack();	int stackLength();	bool push(T elem);		//入栈	bool pop(T &elem);		//出栈	void stackTraverse(bool);	//遍历栈private:	T *m_pBuffer;			//栈空间指针	int m_iSize;				//栈容量	int m_iTop;					//栈顶、栈中元素个数};template<typename T>MyStack<T>::MyStack(int size){	m_iSize = size;	m_pBuffer = new T[size];	m_iTop = 0;}template<typename T>MyStack<T>::~MyStack(){	delete []m_pBuffer;	m_pBuffer = NULL;}template<typename T>bool MyStack<T>::stackEmpty(){	if(0 != m_iTop)	{		return false;	}	return true;}template<typename T>bool MyStack<T>::stackFull(){	if(m_iSize == m_iTop)	{		return true;	}	return false;}template<typename T>void MyStack<T>::clearStack(){	m_iTop = 0;}template<typename T>int MyStack<T>::stackLength(){	return m_iTop;}template<typename T>bool MyStack<T>::push(T elem){	if(stackFull())	{		return false;	}	m_pBuffer[m_iTop] = elem;	m_iTop++;	return true;}template<typename T>bool MyStack<T>::pop(T &elem){	if(stackEmpty())	{		return false;	}	elem = m_pBuffer[--m_iTop];	return true;}template<typename T>void MyStack<T>::stackTraverse(bool isFromButtom){	if(isFromButtom)	{		for(int i=0; i < m_iTop; i++)		{			cout << m_pBuffer[i];			//m_pBuffer[i].printCoordinate();		}	}	else	{		for(int i = m_iTop -1; i >= 0; i--)		{			cout << m_pBuffer[i];			//m_pBuffer[i].printCoordinate();		}	}}#endif