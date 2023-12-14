//
// Created by Olcay Taner YILDIZ on 18.05.2023.
//

#ifndef GRAPH_PUZZLE_GAME_KAANBUYUKKIVANC_DATASTRUCTURES_CPP_MAXHEAP_H
#define GRAPH_PUZZLE_GAME_KAANBUYUKKIVANC_DATASTRUCTURES_CPP_MAXHEAP_H


#include "Heap.h"

class MaxHeap : public Heap{
protected:
    void percolateDown(int no) override;
    void percolateUp(int no) override;
public:
    explicit MaxHeap(int N);
    void update(int k, int newValue) override;
};


#endif //DATASTRUCTURES_CPP_MAXHEAP_H
