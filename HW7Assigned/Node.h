#ifndef NODE_H_
#define NODE_H_
#include <iostream>

template<typename T> class Node {
private:
   T data;
   Node* left = nullptr;
   Node* right = nullptr;
public:
   Node();
   Node(T _data);
   void print() const;
   Node* insertNode(const T& n);
};


template<typename T> Node<T>::Node() {}

template<typename T> Node<T>::Node(const T _data): data(_data) {}

template<typename T> void Node<T>::print() const {
    if (this->left != nullptr) {
        this->left->print( );
    }
    std::cout << data << " ";
    if (this->right != nullptr) {
        this->right->print( );
    }
}

template<typename T> Node<T> * Node<T>::insertNode(const T &n) {
    if (this->data == n) return this;
    if (n < this->data) {
        if (left != nullptr) return left->insertNode(n);
        else {
            left = new Node(n);
            return left;
        }
    }
    if (n > this->data) {
        if (right != nullptr) return right->insertNode(n);
        else {
            right = new Node(n);
            return left;
        }
    }
    return nullptr;
}


#endif /* NODE_H_ */
