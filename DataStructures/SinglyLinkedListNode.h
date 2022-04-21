#pragma once
#ifndef SINGLY_LINKED_LIST_NODE_H
#define SINGLY_LINKED_LIST_NODE_H

#include "Node.h"

template<typename VertexItem>
class SinglyLinkedListNode : public Node<VertexItem> {
public:
	SinglyLinkedListNode<VertexItem> *next = nullptr;
	SinglyLinkedListNode(VertexItem element, SinglyLinkedListNode<VertexItem> *next);
	void setNext(SinglyLinkedListNode<VertexItem> *next);
	SinglyLinkedListNode<VertexItem> *getNext();
};

#include "SinglyLinkedListNode.cpp"
#endif