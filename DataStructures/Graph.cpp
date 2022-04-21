
#include "Graph.h"
#include "Edge.h";
#include "Vertex.h"
#include <vector>;

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
inline std::vector<Vertex>::iterator Graph<VertexItem, EdgeItem>::vertices()
{
	return std::vector<Vertex>::iterator();
}

template<typename VertexItem, typename EdgeItem>
inline Edge Graph<VertexItem, EdgeItem>::getEdge(Vertex u, Vertex v)
{
	return Edge();
}

template<typename VertexItem, typename EdgeItem>
inline std::vector<Vertex> Graph<VertexItem, EdgeItem>::endVertices(Edge e)
{
	return std::vector<Vertex>();
}

template<typename VertexItem, typename EdgeItem>
inline Vertex Graph<VertexItem, EdgeItem>::opposite(Vertex v, Edge e)
{
	return Vertex();
}

template<typename VertexItem, typename EdgeItem>
int Graph<VertexItem, EdgeItem>::outDegree(Vertex v)
{
	return 0;
}

template<typename VertexItem, typename EdgeItem>
inline int Graph<VertexItem, EdgeItem>::inDegree(Vertex v)
{
	return 0;
}

template<typename VertexItem, typename EdgeItem>
inline std::vector<Vertex>::iterator Graph<VertexItem, EdgeItem>::outgoingEdges(Vertex v)
{
	return std::vector<Vertex>::iterator();
}

template<typename VertexItem, typename EdgeItem>
inline std::vector<Vertex>::iterator Graph<VertexItem, EdgeItem>::incomingEdges(Vertex v)
{
	return std::vector<Vertex>::iterator();
}

template<typename VertexItem, typename EdgeItem>
inline Vertex Graph<VertexItem, EdgeItem>::insertVertex(VertexItem item)
{
	return Vertex();
}

template<typename VertexItem, typename EdgeItem>
inline Edge Graph<VertexItem, EdgeItem>::insertEdge(Vertex u, Vertex v, EdgeItem item)
{
}

template<typename VertexItem, typename EdgeItem>
inline void Graph<VertexItem, EdgeItem>::removeVertex(Vertex v)
{
}

template<typename VertexItem, typename EdgeItem>
inline void Graph<VertexItem, EdgeItem>::removeEdge(Edge e)
{
}

template<typename VertexItem, typename EdgeItem>
inline int Graph<VertexItem, EdgeItem>::numEdges()
{
	return 0;
}

template<typename VertexItem, typename EdgeItem>
inline std::vector<Vertex>::iterator Graph<VertexItem, EdgeItem>::edges()
{
	return std::vector<Vertex>::iterator();
}