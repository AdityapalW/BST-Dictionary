/*
 * BSTNode.h
 * 
 * Description: Handels a node required to build a link-based binary search tree (BST).
 * 
 */

#ifndef BST_NODE_H
#define BST_NODE_H

#include "Word.h"


class BSTNode {

public:

    Word element;
    BSTNode * left = nullptr;
    BSTNode * right = nullptr;

    // Constructors
    BSTNode();
    BSTNode(Word & element);
    BSTNode(Word & element, BSTNode * theLeftSubTree, BSTNode * theRightSubTree) ;

    // Boolean helper functions
    bool isLeaf() const;
    bool hasLeft() const;
    bool hasRight() const;

};
#endif
