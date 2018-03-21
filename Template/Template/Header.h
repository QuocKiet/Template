#pragma once
#include <stdio.h>
template <class T>
class List
{
public:
	template <class T>
	struct  Node
	{
		T data;
		Node<T>* pNext;
	};
	Node<T>* pHead;
	Node<T>* pTail;
	/*template <class T>
	Node* Getnode(T x)
	{
		Node* p = new Node;
		p->data = x;
		p->pNext = NULL;
		return p;
	}*/

	class iterator
	{
	public:
		Node<T>* p;
		iterator() {};
		~iterator() {};
		template <class T>
		void operator= (Node<T>* q)
		{
			p = q;
			
		};
		T operator*()
		{
			return p->data;
		}
		Node<T>* operator++ ()
		{
			p = p->pNext;
			return p;
		}
	

	};

	template <class T>
	void Addhead(T x)
	{
		Node<T>* p = new Node<T>;
		p->data = x;
		p->pNext = NULL;
		if (pHead == NULL)
		{
			pHead = pTail = p;
		}
		else
		{
			p->pNext = pHead;
			pHead = p;
		}
		
	}
	void OutHead()
	{
		printf("%d", *(pHead));
	}
	Node<T>* begin()
	{
		return pHead;
	}
	List()
	{
		pHead = NULL;
		pTail = NULL;
	}
	~List() {};

	
};
