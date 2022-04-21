#pragma once
#include "Vertex.h"

template <typename EdgeItem>
class Edge
{
public:

	Vertex from;
	Vertex to;
	EdgeItem item;

	Edge();
	~Edge();
};

#include "Edge.cpp"