#include <iostream>

#ifndef BINARYTREE_H
#define BINARYTREE_H

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int value);
};

class BinaryTree {
public:
    Node* root;
    BinaryTree(); // Constructor
    Node* insert(Node* node, int value);
    Node* search(Node* node, int value);
    Node* remove(Node* node, int value);
    void inOrderTraversal(Node* node);
    void preorder(Node* node);
    void postorder(Node* node);
};

#endif // BINARYTREE_H
