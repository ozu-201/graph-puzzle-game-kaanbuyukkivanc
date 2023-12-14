//
// Created by Olcay Taner YILDIZ on 10.04.2023.
//

#ifndef GRAPH_PUZZLE_GAME_KAANBUYUKKIVANC_DATASTRUCTURES_CPP_AVLTREENODE_H
#define GRAPH_PUZZLE_GAME_KAANBUYUKKIVANC_DATASTRUCTURES_CPP_AVLTREENODE_H


#include "TreeNode.h"

class AvlTreeNode : public TreeNode{
private:
    int height;
public:
    explicit AvlTreeNode(int data);
    ~AvlTreeNode();
    int getHeight() const;
    void setHeight(int height);
};


#endif //GRAPH_PUZZLE_GAME_KAANBUYUKKIVANC_DATASTRUCTURES_CPP_AVLTREENODE_H
