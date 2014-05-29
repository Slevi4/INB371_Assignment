#ifndef VERTEX_H
#define VERTEX_H

#include <set>
#include <ostream>

using namespace std;

class Vertex
{
    public:
        Vertex();
        Vertex(unsigned int);
        ~Vertex();
        unsigned int getId();
        void addAdjacency(unsigned int);
        set<unsigned int>* getAdjacencies();
        void setDiscovered(bool);
        bool isDiscovered();
        void setPredecessorId(unsigned int);
        unsigned int getPredecessorId();
        void setMinDistance(double);
        double getMinDistance();
        bool operator()(Vertex*, Vertex*);
        friend ostream& operator<<(ostream& out, Vertex& vertex);

    protected:

    private:
        unsigned int identifier;
        set<unsigned int> adjacencies;
        bool discovered;
        unsigned int predecessorId;
        double minDistance;
};

#endif // VERTEX_H
