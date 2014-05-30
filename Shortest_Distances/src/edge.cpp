#include "edge.h"
#include <ostream>
#include <sstream>

Edge::Edge(){
}

Edge::Edge(Vertex* a, Vertex* b, double x){
    source = a;
    destination = b;
    weight = x;
}

Edge::~Edge(){
}

Vertex* Edge::getSource(){
    Vertex **pointer = &source;
    return *pointer;
}

Vertex* Edge::getDestination(){
    Vertex **pointer = &destination;
    return *pointer;
}

double Edge::getWeight(){
    return weight;
}

bool Edge::operator()(Edge* a, Edge* b){
    if (a->weight > b->weight){
        return true;
    } else {
        return false;
    }
}

ostream& operator<<(ostream& out, Edge& edge){
    stringstream ss;
    ss << edge.getWeight();
    string edgeString = ss.str();
    out << edgeString;
    return out;
}
