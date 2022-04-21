#ifndef SINGLY_LINKED_LIST
#define SINGLY_LINKED_LIST


#include <iostream>
#include "SinglyLinkedList.h"
#include <memory>

template<typename T>
int SinglyLinkedList<T>::getSize() {
	return size;
}

template<typename T>
bool SinglyLinkedList<T>::isEmpty() {
	return (size == 0);
}

template<typename T>
T SinglyLinkedList<T>::removeFirst() {
	if (isEmpty()) {
		return 0;
	}

	SinglyLinkedListNode<T> *elementToRemove = head;
	T answer = head->getElement();
	head = head->getNext();
	delete elementToRemove;
	size--;
	if (size == 0) {
		tail = 0;
	}
	return answer;
}

template<typename T>
T SinglyLinkedList<T>::first() {
	if (isEmpty()) {
		return 0;
	}
	return head->getElement();
}

template<typename T>
T SinglyLinkedList<T>::last() {
	if (isEmpty()) {
		return 0;
	}
	return tail->getElement();
}

template<typename T>
void SinglyLinkedList<T>::addFirst(T elememt) {
	head = new SinglyLinkedListNode<T>(elememt, head);
	if (size == 0) {
		tail = head;
	}
	size++;
}

template<typename T>
void SinglyLinkedList<T>::addLast(T element) {
	SinglyLinkedListNode<T> newest = new SinglyLinkedListNode<T>(element, 0);
	if (isEmpty()) {
		head = newest;
	}
	else {
		tail->setNext(newest);
	}
	tail = newest;
	size++;
}

template<typename T>
SinglyLinkedList<T>::~SinglyLinkedList() {
	while (size > 0) {
		removeFirst();
	}
	delete head;
	delete tail;
}


#endif



