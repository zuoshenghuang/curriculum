#pragma once
#include <iostream>

/*
	一个链表"节点"类的模板化实现
*/
template <class T>
class ListNode
{
public:
	T getValue() { return value; }
	ListNode * getNext() { return next; }
	void setNext(ListNode * n) { next = n; }
	static ListNode * genListNode(T v)
	{
		return new ListNode(v);
	}

private:
	ListNode(T v) : value(v) {}

private:

	T value;
	ListNode * next;
};

/*
	一个"链表"类的模板化实现
*/
template <class T>
class MiniList
{
public:
	
	MiniList() {head = tail = NULL;}
	~MiniList()
	{
		ListNode<T>  * cur = head;
		while (NULL != cur)
		{
			ListNode<T>  * next = cur->getNext();
			safeDel(cur);
			cur = next;
		}
	}

	ListNode<T>  * getHead() { return head; }
	void insert(T value)
	{
		ListNode<T>  * newNode = genListNode(value);
		add(newNode);
	}

	void remove(int n)
	{
		ListNode<T> *  p = getElement(n-1);
		if (NULL == p)
			return;
		ListNode<T> * nth = p->getNext();
		if (NULL == nth)
			return;
	
		p->setNext(nth->getNext());
		safeDel(nth);		
	}
	void show()
	{
		ListNode<T> * p = head;
		while (NULL != p)
		{
			std::cout << p->getValue() << std::endl;
			p = p->getNext();
		}
	}

private:	
	ListNode<T>  * genListNode(T value)
	{
		return ListNode<T>::genListNode(value);
	}

	ListNode<T>  * getElement(int n)
	{
		ListNode<T> * p = head;
		while((n-- > 0) && (p != NULL))
		{
			p = p->getNext();
		}
		return p;
	}

	void add(ListNode<T>  * node)
	{
		if (NULL == head)
		{
			head = tail = node;
			return;
		}
		tail->setNext(node);
		tail = node;
	}

	void safeDel(ListNode<T> * node)
	{
		if (NULL != node)
		{
			delete node; node = NULL;
		}
	}
private:
	ListNode<T> * head;
	ListNode<T>  * tail;
};