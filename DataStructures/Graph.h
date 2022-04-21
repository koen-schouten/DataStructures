#pragma once
#ifndef GRAPH
#define GRAPH

#include "Vertex.h"
#include "Edge.h"
#include <vector>
#include <iterator>

template<typename VertexItem, typename EdgeItem>
class Graph
{
public:
	Graph();
	~Graph();

	int numVertices();
	std::vector<Vertex>::iterator vertices();
	int numEdges();
	std::vector<Vertex>::iterator edges();

	Edge getEdge(Vertex u, Vertex v);
	std::vector<Vertex> endVertices(Edge e);
	Vertex opposite(Vertex v, Edge e);

	int outDegree(Vertex v);
	int inDegree(Vertex v);

	std::vector<Vertex>::iterator outgoingEdges(Vertex v);
	std::vector<Vertex>::iterator incomingEdges(Vertex v);

	Vertex insertVertex(VertexItem item);
	Edge insertEdge(Vertex u, Vertex v, EdgeItem item);

	void removeVertex(Vertex v);
	void removeEdge(Edge e);

private:

};

#include "Graph.cpp"
#endif GRAPH