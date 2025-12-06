#include "binary_tree.hpp"

// Node implementation
Node::Node(Squirrel* squirrel) 
    : squirrel_(squirrel), left_(nullptr), right_(nullptr) {}

Node::~Node() {
    delete left_;
    delete right_;
}

Node* Node::left() const {
    return left_;
}

Node* Node::right() const {
    return right_;
}

void Node::set_left(Node* node) {
    left_ = node;
}

void Node::set_right(Node* node) {
    right_ = node;
}

const Squirrel* Node::getSquirrel() const {
    return squirrel_;
}

Squirrel* Node::getSquirrel() {
    return squirrel_;
}

// BinaryTree implementation
BinaryTree::BinaryTree() : root_(nullptr) {}

BinaryTree::BinaryTree(Squirrel* rootSquirrel) 
    : root_(new Node(rootSquirrel)) {}

BinaryTree::~BinaryTree() {
    delete root_;
}

Node* BinaryTree::getRoot() const {
    return root_;
}

void BinaryTree::setRoot(Node* root) {
    root_ = root;
}

