//
// Created by Olcay Taner YILDIZ on 18.05.2023.
//

#ifndef GRAPH_PUZZLE_GAME_KAANBUYUKKIVANC_DATASTRUCTURES_CPP_MINDHEAP_H
#define GRAPH_PUZZLE_GAME_KAANBUYUKKIVANC_DATASTRUCTURES_CPP_MINDHEAP_H


#include "DHeap.h"

class MinDHeap : public DHeap{
public:
    MinDHeap(int N, int d);
protected:
    void percolateDown(int no) override;
    void percolateUp(int no) override;
};


#endif //DATASTRUCTURES_CPP_MINDHEAP_H
