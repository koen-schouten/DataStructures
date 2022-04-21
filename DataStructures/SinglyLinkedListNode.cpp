#ifndef SINGLY_LINKED_LIST_NODE
#define SINGLY_LINKED_LIST_NODE

#include "SinglyLinkedListNode.h"
#include <memory>

template<typename VertexItem>
SinglyLinkedListNode<VertexItem>::SinglyLinkedListNode(VertexItem element, SinglyLinkedListNode<VertexItem> *next): Node<VertexItem>(element)
{
	this->next = next;
}

template<typename VertexItem>
void SinglyLinkedListNode<VertexItem>::setNext(SinglyLinkedListNode<VertexItem> *next) {
	this->next = next;
}

template<typename VertexItem>
SinglyLinkedListNode<VertexItem> *SinglyLinkedListNode<VertexItem>::getNext() {
	return this->next;
}

#endif