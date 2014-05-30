#include "vertex.h"
#include <set>
#include <sstream>

Vertex::Vertex(){
}

Vertex::Vertex(unsigned int theID){
    identifier = theID;
}

Vertex::~Vertex(){
}

unsigned int Vertex::getId(){
    return identifier;
}

void Vertex::addAdjacency(unsigned int number){
    adjacencies.insert(number);
}

set<unsigned int>* Vertex::getAdjacencies(){
    return &adjacencies;
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

void Vertex::setMinDistance(double minDist){
    minDistance = minDist;
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
    stringstream ss;
    ss << vertex.getId();
    string vertexString = ss.str();
    out << vertexString;
    return out;
}
