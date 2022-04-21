#pragma once
#ifndef GRAPH_H
#define GRAPH_H

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
	std::vector<Vertex<VertexItem>> vertices();
	int numEdges();
	std::vector<Vertex<VertexItem>> edges();

	Edge<EdgeItem, VertexItem> getEdge(Vertex<VertexItem> u, Vertex<VertexItem> v);
	std::vector<Vertex<VertexItem>> endVertices(Edge<EdgeItem, VertexItem> e);
	Vertex<VertexItem> opposite(Vertex<VertexItem> v, Edge<EdgeItem, VertexItem> e);

	int outDegree(Vertex<VertexItem> v);
	int inDegree(Vertex<VertexItem> v);

	std::vector<Vertex<VertexItem>> outgoingEdges(Vertex<VertexItem> v);
	std::vector<Vertex<VertexItem>> incomingEdges(Vertex<VertexItem> v);

	Vertex<VertexItem> insertVertex(VertexItem item);
	Edge<EdgeItem, VertexItem> insertEdge(Vertex<VertexItem> u, Vertex<VertexItem> v, EdgeItem item);

	void removeVertex(Vertex<VertexItem> v);
	void removeEdge(Edge<EdgeItem, VertexItem> e);

private:

};

#include "Graph.cpp"
#endif GRAPH