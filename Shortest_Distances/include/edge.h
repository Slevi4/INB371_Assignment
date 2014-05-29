#ifndef EDGE_H
#define EDGE_H

#include <ostream>
#include "vertex.h"

class Edge
{
    public:
        Edge();
        Edge(Vertex*, Vertex*, double);
        ~Edge();
        Vertex* getSource();
        Vertex* getDestination();
        double getWeight();
        bool operator()(Edge*, Edge*);
        friend ostream& operator<<(ostream& out, Edge& edge);

    protected:

    private:
        Vertex* source;
        Vertex* destination;
        double wight;
};

#endif // EDGE_H
