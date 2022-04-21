
#ifndef GRAPH
#define GRAPH

#include "Graph.h"
#include "Edge.h"
#include "Vertex.h"
#include <vector>

template<typename VertexItem, typename EdgeItem>
inline Graph<VertexItem, EdgeItem>::Graph()
{
}

template<typename VertexItem, typename EdgeItem>
inline Graph<VertexItem, EdgeItem>::~Graph()
{
}

template<typename VertexItem, typename EdgeItem>
inline int Graph<VertexItem, EdgeItem>::numVertices()
{
	return 0;
}

template<typename VertexItem, typename EdgeItem>
inline std::vector<Vertex<VertexItem>> Graph<VertexItem, EdgeItem>::vertices()
{
	return std::vector<Vertex<VertexItem>>::iterator();
}

template<typename VertexItem, typename EdgeItem>
inline Edge<EdgeItem, VertexItem> Graph<VertexItem, EdgeItem>::getEdge(Vertex<VertexItem> u, Vertex<VertexItem> v)
{
}

template<typename VertexItem, typename EdgeItem>
inline std::vector<Vertex<VertexItem>> Graph<VertexItem, EdgeItem>::endVertices(Edge<EdgeItem, VertexItem> e)
{
	return std::vector<Vertex>();
}

template<typename VertexItem, typename EdgeItem>
inline Vertex<VertexItem> Graph<VertexItem, EdgeItem>::opposite(Vertex<VertexItem> v, Edge<EdgeItem, VertexItem> e)
{
}

template<typename VertexItem, typename EdgeItem>
inline int Graph<VertexItem, EdgeItem>::outDegree(Vertex<VertexItem> v)
{
	return 0;
}

template<typename VertexItem, typename EdgeItem>
inline int Graph<VertexItem, EdgeItem>::inDegree(Vertex<VertexItem> v)
{
	return 0;
}

template<typename VertexItem, typename EdgeItem>
inline std::vector<Vertex<VertexItem>> Graph<VertexItem, EdgeItem>::outgoingEdges(Vertex<VertexItem> v)
{
}

template<typename VertexItem, typename EdgeItem>
inline std::vector<Vertex<VertexItem>> Graph<VertexItem, EdgeItem>::incomingEdges(Vertex<VertexItem> v)
{
}

template<typename VertexItem, typename EdgeItem>
inline Vertex<VertexItem> Graph<VertexItem, EdgeItem>::insertVertex(VertexItem item)
{
}

template<typename VertexItem, typename EdgeItem>
inline Edge<EdgeItem, VertexItem> Graph<VertexItem, EdgeItem>::insertEdge(Vertex<VertexItem> u, Vertex<VertexItem> v, EdgeItem item)
{
}

template<typename VertexItem, typename EdgeItem>
inline void Graph<VertexItem, EdgeItem>::removeVertex(Vertex<VertexItem> v)
{
}

template<typename VertexItem, typename EdgeItem>
void Graph<VertexItem, EdgeItem>::removeEdge(Edge<EdgeItem, VertexItem> e)
{
}

template<typename VertexItem, typename EdgeItem>
inline int Graph<VertexItem, EdgeItem>::numEdges()
{
	return 0;
}

template<typename VertexItem, typename EdgeItem>
inline std::vector<Vertex<VertexItem>> Graph<VertexItem, EdgeItem>::edges()
{
	return std::vector<Vertex<VertexItem>>::iterator();
}

#endif