#include <iostream>
#include "BinaryTree.h"
using namespace std;

int main() {
    BinaryTree tree;
    tree.root = tree.insert(tree.root, 30);
    tree.root = tree.insert(tree.root, 50);
    tree.root = tree.insert(tree.root, 70);

    int valueToSearch = 40;
    Node* result = tree.search(tree.root, valueToSearch);
    if (result != nullptr) {
        cout << "Found: " << result->data << endl;
    } else {
        cout << "Not found" << endl;
    }

    cout << "In-order Traversal: ";
    tree.inOrderTraversal(tree.root);
    cout << endl;

    cout << "Pre-order Traversal: ";
    tree.preorder(tree.root);
    cout << endl;

    cout << "Post-order Traversal: ";
    tree.postorder(tree.root);
    cout << endl;

    return 0;
}
