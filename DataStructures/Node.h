#pragma once
#ifndef NODE_H
#define NODE_H

template<typename T>
class Node {
public:
	Node<T>(T element);
	T getElement();
private:
	T element;
};

#include "node.cpp"
#endif