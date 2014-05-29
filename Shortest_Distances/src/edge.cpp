#include "edge.h"
#include <ostream>

Edge::Edge(){
}

Edge::Edge(Vertex*, Vertex*, double){
}

Edge::~Edge(){
}

Vertex* Edge::getSource(){
}

Vertex* Edge::getDestination(){
}

double Edge::getWeight(){
}

bool Edge::operator()(Edge*, Edge*){
}

ostream& operator<<(ostream& out, Edge& edge){
}
