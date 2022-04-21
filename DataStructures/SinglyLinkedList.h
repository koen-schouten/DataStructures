#pragma once
#ifndef SINGLY_LINKED_LIST_H
#define SINGLY_LINKED_LIST_H

#include "SinglyLinkedListNode.h"

template<typename VertexItem>
class SinglyLinkedList {
	public:
		bool isEmpty();
		VertexItem first();
		VertexItem last();
		void addFirst(VertexItem elememt);
		void addLast(VertexItem elememt);
		VertexItem removeFirst();
		int getSize();
		~SinglyLinkedList();

	private:
		SinglyLinkedListNode<VertexItem> *head = nullptr;
		SinglyLinkedListNode<VertexItem> *tail = nullptr;
		int size = 0;


};


#include "SinglyLinkedList.cpp"
#endif
