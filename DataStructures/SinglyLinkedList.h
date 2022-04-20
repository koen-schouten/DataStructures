#pragma once
#ifndef SINGLY_LINKED_LIST_H
#define SINGLY_LINKED_LIST_H

#include "SinglyLinkedListNode.h"

template<typename T>
class SinglyLinkedList {
	public:
		SinglyLinkedList();
		bool isEmpty();
		T first();
		T last();
		void addFirst(T elememt);
		void addLast(T elememt);
		T removeFirst();
		int getSize();

	private:
		SinglyLinkedListNode<T> *head = nullptr;
		SinglyLinkedListNode<T> *tail = nullptr;
		int size = 0;

};


#include "SinglyLinkedList.cpp"
#endif
