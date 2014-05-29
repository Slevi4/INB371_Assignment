#include "vertex.h"
#include <set>

Vertex::Vertex(){
}

Vertex::Vertex(unsigned int x){
    identifier = x;
}

Vertex::~Vertex(){
}

unsigned int Vertex::getId(){
    return identifier;
}

void Vertex::addAdjacency(unsigned int){
    //TODO
}

set<unsigned int>* Vertex::getAdjacencies(){
    //TODO
}

void Vertex::setDiscovered(bool theBool){
    if (theBool == true){
        discovered = true;
    } else {
        discovered = false;
    }
}

bool Vertex::isDiscovered(){
    return discovered;
}

void Vertex::setPredecessorId(unsigned int x){
    predecessorId = x;
}

unsigned int Vertex::getPredecessorId(){
    return predecessorId;
}

void Vertex::setMinDistance(double x){
    minDistance = x;
}

double Vertex::getMinDistance(){
    return minDistance;
}

bool Vertex::operator()(Vertex* a, Vertex* b){
    if (a->minDistance > b->minDistance){
        return true;
    } else {
        return false;
    }
}

ostream& operator<<(ostream& out, Vertex& vertex){
}
