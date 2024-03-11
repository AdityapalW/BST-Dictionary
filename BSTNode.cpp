/*
 * BSTNode.cpp
 * 
 * Description: Handels a node required to build a link-based binary search tree (BST).
 * 
 */

#include "BSTNode.h"
#include "Word.h"

// Constructors
BSTNode::BSTNode() { }

BSTNode::BSTNode(Word & newElement) : element(newElement) { }

BSTNode::BSTNode(Word & newElement, BSTNode * left, BSTNode * right) {
   this->element = newElement;
   this->left = left;
   this->right = right;   
}

// Boolean helper functions
bool BSTNode::isLeaf() const {
   return (left == nullptr && right == nullptr);
}

bool BSTNode::hasLeft() const {
   return (left != nullptr);
}

bool BSTNode::hasRight() const {
   return (right != nullptr);
}
