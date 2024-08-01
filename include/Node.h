#pragma once

template <typename T>
class Node {
public:
    Node<T>* left;
    Node<T>* right;
    T value;

    Node(T val) : value(val), left(nullptr), right(nullptr) {}
};
