#include "disjointset.h"
#include <vector>


DisjointSet::DisjointSet(int N){
    this->N = N;
    id = new int[N];
    for (int i = 0; i < N; i++){
        id[i] = i;
    }
}

DisjointSet::~DisjointSet(){
}

int DisjointSet::find(int i){
    while (i != id[i]){
        id[i] = id[id[i]];
        i = id[i];
    }
    return i;
}

void DisjointSet::join(int p, int q){
    int i = find(p);
    int j = find(q);
    if (i==j) return;
    if (size[i] < size[j]){
        id[i] = j;
        size[j] += size[i];
    } else {
        id[j] = i;
        size[i] += size[j];
    }
}

bool DisjointSet::sameComponent(int p, int q){
    return find(p) == find(q);
}
