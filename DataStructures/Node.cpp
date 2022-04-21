#ifndef NODE
#define NODE

#include "Node.h"

template<typename T>
Node<T>::Node(T element) {
	this->element = element;
}

template<typename T>
T Node<T>::getElement() {
	return this->element;
}

#endif