#pragma once
#include "Vertex.h"

template <typename EdgeItem, typename VertexItem>
class Edge
{
public:

	Vertex<VertexItem> from;
	Vertex<VertexItem> to;
	EdgeItem item;

	Edge();
	~Edge();
};

#include "Edge.cpp"