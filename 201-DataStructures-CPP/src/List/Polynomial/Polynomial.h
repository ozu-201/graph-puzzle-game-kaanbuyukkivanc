//
// Created by Olcay Taner YILDIZ on 26.03.2023.
//

#ifndef GRAPH_PUZZLE_GAME_KAANBUYUKKIVANC_DATASTRUCTURES_CPP_POLYNOMIAL_H
#define GRAPH_PUZZLE_GAME_KAANBUYUKKIVANC_DATASTRUCTURES_CPP_POLYNOMIAL_H


#include "TermNode.h"

class Polynomial {
private:
    TermNode* head;
    TermNode* tail;
public:
    Polynomial();
    void insertLast(TermNode* newTermNode);
    string to_string();
    Polynomial add(Polynomial polynomial);
};


#endif //GRAPH_PUZZLE_GAME_KAANBUYUKKIVANC_DATASTRUCTURES_CPP_POLYNOMIAL_H
