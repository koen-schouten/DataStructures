#pragma once
#ifndef SINGLY_LINKED_LIST_NODE_H
#define SINGLY_LINKED_LIST_NODE_H

#include "Node.h"

template<typename T>
class SinglyLinkedListNode : public Node<T> {
public:
	SinglyLinkedListNode<T> *next = nullptr;
	SinglyLinkedListNode(T element, SinglyLinkedListNode<T> *next);
	void setNext(SinglyLinkedListNode<T> *next);
	SinglyLinkedListNode<T> *getNext();
};

#include "SinglyLinkedListNode.cpp"
#endif