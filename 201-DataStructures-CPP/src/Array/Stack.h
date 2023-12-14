//
// Created by Olcay Taner YILDIZ on 20.03.2023.
//

#ifndef GRAPH_PUZZLE_GAME_KAANBUYUKKIVANC_DATASTRUCTURES_CPP_STACK_H
#define GRAPH_PUZZLE_GAME_KAANBUYUKKIVANC_DATASTRUCTURES_CPP_STACK_H


#include "Element.h"

namespace array{

class Stack {
private:
    Element* array;
    int top;
    int N;
public:
    explicit Stack(int N);
    ~Stack();
    bool isFull();
    bool isEmpty();
    Element peek();
    void push(Element element);
    Element pop();
};

}

#endif //DATASTRUCTURES_CPP_STACK_H
