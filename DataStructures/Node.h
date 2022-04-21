#pragma once
#ifndef NODE_H
#define NODE_H

template<typename VertexItem>
class Node {
public:
	Node<VertexItem>(VertexItem element);
	VertexItem getElement();
private:
	VertexItem element;
};

#include "node.cpp"
#endif