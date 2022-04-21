#ifndef SINGLY_LINKED_LIST
#define SINGLY_LINKED_LIST


#include <iostream>
#include "SinglyLinkedList.h"
#include <memory>

template<typename VertexItem>
int SinglyLinkedList<VertexItem>::getSize() {
	return size;
}

template<typename VertexItem>
bool SinglyLinkedList<VertexItem>::isEmpty() {
	return (size == 0);
}

template<typename VertexItem>
VertexItem SinglyLinkedList<VertexItem>::removeFirst() {
	if (isEmpty()) {
		return 0;
	}

	SinglyLinkedListNode<VertexItem> *elementToRemove = head;
	VertexItem answer = head->getElement();
	head = head->getNext();
	delete elementToRemove;
	size--;
	if (size == 0) {
		tail = 0;
	}
	return answer;
}

template<typename VertexItem>
VertexItem SinglyLinkedList<VertexItem>::first() {
	if (isEmpty()) {
		return 0;
	}
	return head->getElement();
}

template<typename VertexItem>
VertexItem SinglyLinkedList<VertexItem>::last() {
	if (isEmpty()) {
		return 0;
	}
	return tail->getElement();
}

template<typename VertexItem>
void SinglyLinkedList<VertexItem>::addFirst(VertexItem elememt) {
	head = new SinglyLinkedListNode<VertexItem>(elememt, head);
	if (size == 0) {
		tail = head;
	}
	size++;
}

template<typename VertexItem>
void SinglyLinkedList<VertexItem>::addLast(VertexItem element) {
	SinglyLinkedListNode<VertexItem> newest = new SinglyLinkedListNode<VertexItem>(element, 0);
	if (isEmpty()) {
		head = newest;
	}
	else {
		tail->setNext(newest);
	}
	tail = newest;
	size++;
}

template<typename VertexItem>
SinglyLinkedList<VertexItem>::~SinglyLinkedList() {
	while (size > 0) {
		removeFirst();
	}
	delete head;
	delete tail;
}


#endif



