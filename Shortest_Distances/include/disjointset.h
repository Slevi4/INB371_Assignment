#ifndef DISJOINTSET_H
#define DISJOINTSET_H


class DisjointSet
{
    public:
        DisjointSet(int);
        ~DisjointSet();
        int find(int);
        void join(int, int);
        bool sameComponent(int, int);

    protected:

    private:
        int* id;
        int N;
        int size[];
};

#endif // DISJOINTSET_H
