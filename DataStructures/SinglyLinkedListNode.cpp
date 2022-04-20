#ifndef SINGLY_LINKED_LIST_NODE
#define SINGLY_LINKED_LIST_NODE

#include "SinglyLinkedListNode.h"
#include <memory>

template<typename T>
SinglyLinkedListNode<T>::SinglyLinkedListNode(T element, SinglyLinkedListNode<T> *next): Node<T>(element)
{
	this->next = next;
}

template<typename T>
void SinglyLinkedListNode<T>::setNext(SinglyLinkedListNode<T> *next) {
	this->next = next;
}

template<typename T>
SinglyLinkedListNode<T> *SinglyLinkedListNode<T>::getNext() {
	return this->next;
}

#endif