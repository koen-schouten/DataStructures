#ifndef NODE
#define NODE

#include "Node.h"

template<typename VertexItem>
Node<VertexItem>::Node(VertexItem element) {
	this->element = element;
}

template<typename VertexItem>
VertexItem Node<VertexItem>::getElement() {
	return this->element;
}

#endif