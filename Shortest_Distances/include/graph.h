#ifndef GRAPH_H
#define GRAPH_H

#include "vertex.h"
#include "edge.h"
#include <queue>
#include <ostream>

class Graph
{
    public:
        Graph(unsigned int);
        ~Graph();
        void addVertex(Vertex*);
        Vertex* getVertex(int);
        void addEdge(Edge*);
        double minimumSpanningTreeCost();
        void dijkstra(unsigned int);
        void bfs(unsigned int);
        friend ostream& operator<<(ostream& out, Graph& graph);
    protected:

    private:
        unsigned int numVertices;
        double** weights;
        priority_queue<Edge*, vector<Edge*>, Edge> edges;
        vector<Vertex*> vertices;
};

#endif // GRAPH_H
