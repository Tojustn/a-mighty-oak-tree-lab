#ifndef BINARY_TREE_HPP
#define BINARY_TREE_HPP

#include "squirrel.hpp"

class Node {
public:
    explicit Node(Squirrel* squirrel);
    ~Node();
    
    Node* left() const;
    Node* right() const;
    
    void set_left(Node* node);
    void set_right(Node* node);
    
    const Squirrel* getSquirrel() const;
    Squirrel* getSquirrel();
    
private:
    Squirrel* squirrel_;
    Node* left_;
    Node* right_;
};

class BinaryTree {
public:
    BinaryTree();
    explicit BinaryTree(Squirrel* rootSquirrel);
    ~BinaryTree();
    
    Node* getRoot() const;
    
    void setRoot(Node* root);
    
private:
    Node* root_;
};

#endif 

